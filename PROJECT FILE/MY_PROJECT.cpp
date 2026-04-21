#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    int index = 10;
    const int Total_Consumers = 30; // Total Size
    int Total_Months = 6;
    // data strurcture
    // This Program consist 10 HARDCODE CSTOMER
    // Consumers Name Section
    string Consumers_nameArray[Total_Consumers] = {"Smart", "Brandon", "Tony", "Legend", "Venom", "Eagle", "Knight", "Shadow", "Inferno", "Blaze"};
    // Consumer's Adress Secion
    string adress_Array[Total_Consumers] = {"Ali Town Block C", "Lake City M4", "PSCIR Phase 2", "DHA Phase 2", "DHA Phase 4", "NFC Street 74", "Airline Street 34", "Model Town Phasae 3", "Wapda Town Block D", "Ali Town Street 19"};
    // Conumer's Ids Section
    int Consumers_IdArray[Total_Consumers] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    // Meter Id Number Section
    int meterNumber_Array[Total_Consumers] = {111, 222, 333, 444, 555, 666, 777, 888, 999, 1010};
    // Connection Type ( 1=domestic, 2=commercial)
    int connection_TypeArray[Total_Consumers] = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    // Active Status ( 1=Active, 0=Inactive)
    int active_StatusArray[Total_Consumers] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    // Previous Unit of 6 month (First 10 Consumers)
    int prev1[30] = {100, 110, 120, 130, 140, 150, 160, 170, 180, 190};
    int prev2[30] = {150, 160, 170, 180, 190, 200, 210, 220, 230, 240};
    int prev3[30] = {200, 210, 220, 230, 240, 250, 260, 270, 280, 290};
    int prev4[30] = {250, 260, 270, 280, 290, 300, 310, 320, 330, 340};
    int prev5[30] = {300, 310, 320, 330, 340, 350, 360, 370, 380, 390};
    int prev6[30] = {350, 360, 370, 380, 390, 400, 410, 420, 430, 440};
    // Current Units of 6 Months  (First 10 consumers)
    int curr1[30] = {150, 165, 180, 195, 210, 225, 240, 255, 270, 285};
    int curr2[30] = {200, 215, 230, 245, 260, 275, 290, 305, 320, 335};
    int curr3[30] = {250, 265, 280, 295, 310, 325, 340, 355, 370, 385};
    int curr4[30] = {300, 315, 330, 345, 360, 375, 390, 405, 420, 435};
    int curr5[30] = {350, 365, 380, 395, 410, 425, 440, 455, 470, 485};
    int curr6[30] = {400, 415, 430, 445, 460, 475, 490, 505, 520, 535};
    // UNITS Consumed by months
    int used_units1[30], used_units2[30], used_units3[30], used_units4[30], used_units5[30], used_units6[30];
    // Calculation Loop for first 10 consumers
    for (int i = 0; i < 10; i++)
    {
        used_units1[i] = curr1[i] - prev1[i];
        used_units2[i] = curr2[i] - prev2[i];
        used_units3[i] = curr3[i] - prev3[i];
        used_units4[i] = curr4[i] - prev4[i];
        used_units5[i] = curr5[i] - prev5[i];
        used_units6[i] = curr6[i] - prev6[i];
    }
    // Paid Status 1 = Paid, 0 = Unpaid
    int pay_stat1[30] = {1, 0, 1, 1, 0, 1, 1, 0, 1, 1}; // Month 1
    int pay_stat2[30] = {1, 1, 0, 1, 1, 0, 1, 1, 0, 1}; // Month 2
    int pay_stat3[30] = {0, 1, 1, 0, 1, 1, 0, 1, 1, 0}; // Month 3
    int pay_stat4[30] = {1, 1, 1, 1, 0, 0, 1, 1, 1, 1}; // Month 4
    int pay_stat5[30] = {1, 0, 1, 0, 1, 1, 1, 0, 1, 0}; // Month 5
    int pay_stat6[30] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}; // Month 6
    // Bill Calculation
    float bill_m1[30], bill_m2[30], bill_m3[30], bill_m4[30], bill_m5[30], bill_m6[30];

    // Rates & Taxes
    float domestic_rate = 20.0;   // For Type 1
    float commercial_rate = 45.0; // For Type 2
    float tax = 0.15;             // 15% tax
    float fixed_charges = 500.0;
    // Bill Calculation Loop
    // Bill Calculation Loop with Arrears
    for (int i = 0; i < 10; i++)
    {
        float current_rate;

        if (connection_TypeArray[i] == 1)
        {
            current_rate = domestic_rate;
        }
        else
        {
            current_rate = commercial_rate;
        }

        // --- Month 1 ---
        bill_m1[i] = (used_units1[i] * current_rate) * (1 + tax) + fixed_charges;

        // --- Month 2 --- (Check if M1 was Unpaid)
        bill_m2[i] = (used_units2[i] * current_rate) * (1 + tax) + fixed_charges;
        if (pay_stat1[i] == 0)
        {
            bill_m2[i] += bill_m1[i]; // Add M1 amount
        }
        // --- Month 3 --- (Check if M2 was Unpaid)
        bill_m3[i] = (used_units3[i] * current_rate) * (1 + tax) + fixed_charges;
        if (pay_stat2[i] == 0)
        {
            bill_m3[i] += bill_m2[i]; // Add cumulative M2 amount
        }
        // --- Month 4 ---
        bill_m4[i] = (used_units4[i] * current_rate) * (1 + tax) + fixed_charges;
        if (pay_stat3[i] == 0)
        {
            bill_m4[i] += bill_m3[i];
        }
        // --- Month 5 ---
        bill_m5[i] = (used_units5[i] * current_rate) * (1 + tax) + fixed_charges;
        if (pay_stat4[i] == 0)
        {
            bill_m5[i] += bill_m4[i];
        }
        // --- Month 6 ---
        bill_m6[i] = (used_units6[i] * current_rate) * (1 + tax) + fixed_charges;
        if (pay_stat5[i] == 0)
        {
            bill_m6[i] += bill_m5[i];
        }
    }
    // CRUD Create, Read, Update, Delete
    while (true)
    {
        system("cls");
        // main header of Electricity Bill and Monthly Record System
        cout << "==================================================================\n";
        cout << "===========Electricity Bill and Monthly Record System ============\n";
        cout << "==================================================================\n\n";
        cout << " User menu" << endl;
        cout << "1 Manager" << endl;
        cout << "2 Consumer" << endl;
        cout << "3  Exit" << endl;
        cout << "Choose option : ";
        string userOption;
        cin >> userOption;
        cout << " You Choose : " << userOption << endl;

        if (userOption == "1")
        {
            // Manager Code
            for (int i = 0; i < 3; i++)
            {
                cout << endl;
                cout << " Manager Menu : Login attempt " << i + 1 << endl;
                cout << " Enter username : ";
                string username;
                cin >> username;
                cout << " Enter the password : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")

                {

                    cout << "\n   Login Success! Press any key to enter Manager Menu...";
                    getch();

                    string managerOption;
                    while (true)
                    {
                        system("cls");
                        cout << "==================================================================\n";
                        cout << "                       MANAGER CONTROL PANEL                      \n";
                        cout << "==================================================================\n\n";
                        cout << "1) Enter / Replace Consumer Records\n";
                        cout << "2) Display All Consumers\n";
                        cout << "3) Enter Monthly Readings & Generate Bill\n";
                        cout << "4) Update / Correct Monthly Readings\n";
                        cout << "5) Mark Bill Paid / Unpaid\n";
                        cout << "6) Display Consumer Billing History\n";
                        cout << "7) Search / Listings\n";
                        cout << "8) Validate Records & Detect Conflicts\n";
                        cout << "9) Generate Reports / Summaries\n";
                        cout << "10) Change Consumer Account Status (Active/In)\n";
                        cout << "0) Exit\n";
                        cout << "---------------------------------------------\n";
                        cout << "Enter your choice: ";
                        cin >> managerOption;
                        // Enter / Replace Consumer Record
                        if (managerOption == "1")
                        {
                            system("cls");
                            cout << "--- Consumer Record Management (Full Database View) ---\n\n";
                            cout << "Index\tStatus\t\tID\tMeter #\t\tName\n";
                            cout << "------------------------------------------------------------\n";

                            // Show all Empty and Filled Slots
                            for (int k = 0; k < Total_Consumers; k++)
                            {
                                cout << "[" << k << "]\t";
                                if (Consumers_IdArray[k] == 0)
                                {
                                    cout << "EMPTY\t\t---\t---\t\t---";
                                }
                                else
                                {
                                    cout << "FILLED\t\t" << Consumers_IdArray[k] << "\t" << meterNumber_Array[k] << "\t\t" << Consumers_nameArray[k];
                                }
                                cout << endl;
                            }

                            int i;
                            bool validIndex = false;
                            // Index Validation Loop
                            while (validIndex == false)
                            {
                                cout << "\nChoose an Index to Add/Update (0-29): ";
                                cin >> i;
                                if (i >= 0 && i < Total_Consumers)
                                {
                                    validIndex = true;
                                }
                                else
                                {
                                    cout << "[!] Wrong Index! Try Again ( between 0-29 ).";
                                }
                            }

                            int tempID;
                            bool validID = false;
                            // ID Validation Loop (Unique ID check)
                            while (validID == false)
                            {
                                cout << "Enter Unique Consumer ID: ";
                                cin >> tempID;

                                bool duplicate = false;
                                for (int j = 0; j < Total_Consumers; j++)
                                {
                                    if (Consumers_IdArray[j] == tempID)
                                    {
                                        if (i != j)
                                        {
                                            duplicate = true;
                                        }
                                    }
                                }

                                if (duplicate == true)
                                {
                                    cout << "[!] Error: ID " << tempID << " Already Exist ...\n";
                                }
                                else
                                {
                                    validID = true;
                                    Consumers_IdArray[i] = tempID;
                                }
                            }

                            // others information input
                            cout << "Enter Name: ";
                            cin.ignore();
                            getline(cin, Consumers_nameArray[i]);

                            cout << "Enter Address: ";
                            getline(cin, adress_Array[i]);

                            cout << "Enter Meter Number: ";
                            cin >> meterNumber_Array[i];

                            // Connection Type Validation Loop
                            int cType;
                            bool validCType = false;
                            while (validCType == false)
                            {
                                cout << "Enter Connection Type (1=Domestic, 2=Commercial): ";
                                cin >> cType;
                                if (cType == 1 || cType == 2)
                                {
                                    connection_TypeArray[i] = cType;
                                    validCType = true;
                                }
                                else
                                {
                                    cout << "[!] Just Enter 1 or 2.\n";
                                }
                            }

                            // Active Status Validation Loop
                            int aStat;
                            bool validAStat = false;
                            while (validAStat == false)
                            {
                                cout << "Enter Status (1=Active, 0=Inactive): ";
                                cin >> aStat;
                                if (aStat == 1 || aStat == 0)
                                {
                                    active_StatusArray[i] = aStat;
                                    validAStat = true;
                                }
                                else
                                {
                                    cout << "[!] Just Enter 1 or 2.\n";
                                }
                            }

                            // Variable reset to prevent garbage value
                            curr1[i] = 0;
                            curr2[i] = 0;
                            curr3[i] = 0;
                            curr4[i] = 0;
                            curr5[i] = 0;
                            curr6[i] = 0;
                            bill_m1[i] = 0;
                            bill_m2[i] = 0;
                            bill_m3[i] = 0;
                            bill_m4[i] = 0;
                            bill_m5[i] = 0;
                            bill_m6[i] = 0;

                            cout << "\n[Success] Record updated successfully for " << Consumers_nameArray[i] << "!";
                            cout << "\nPress any key to return...";
                            getch();
                        }
                        // Display all Consumers
                        else if (managerOption == "2")
                        {
                            system("cls");
                            cout << "---------------------------------------------------------------------------------------------\n";
                            cout << "ID\tName\t\tType\t\tStatus\t\tCurrent Bill (M6)\tPayment\n";
                            cout << "---------------------------------------------------------------------------------------------\n";

                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                // just output the consumers whose Ids are not zero
                                if (Consumers_IdArray[i] != 0)
                                {
                                    // 1. Print Id
                                    cout << Consumers_IdArray[i] << "\t";

                                    // 2. Name Alignment
                                    cout << Consumers_nameArray[i];
                                    if (Consumers_nameArray[i].length() < 8)
                                    {
                                        cout << "\t\t";
                                    }
                                    else
                                    {
                                        cout << "\t";
                                    }

                                    // 3. Connection Type (Domestic vs Commercial)
                                    if (connection_TypeArray[i] == 1)
                                    {
                                        cout << "Domestic\t";
                                    }
                                    else
                                    {
                                        cout << "Commercial\t";
                                    }

                                    // 4. Active/Inactive Status
                                    if (active_StatusArray[i] == 1)
                                    {
                                        cout << "Active  \t";
                                    }
                                    else
                                    {
                                        cout << "Inactive\t";
                                    }

                                    // 5. Current Month Bill (M6)
                                    cout << bill_m6[i] << " PKR";

                                    // Adjust Tabs for Formating
                                    if (bill_m6[i] < 1000)
                                    {
                                        cout << "\t\t";
                                    }
                                    else
                                    {
                                        cout << "\t";
                                    }

                                    // 6. Payment Status (PAID vs UNPAID)
                                    if (pay_stat6[i] == 1)
                                    {
                                        cout << "PAID" << endl;
                                    }
                                    else
                                    {
                                        cout << "UNPAID" << endl;
                                    }
                                }
                            }
                            cout << "---------------------------------------------------------------------------------------------\n";
                            cout << "\nEnd of Records. Press any key to return...";
                            getch();
                        }
                        // Monthly Reading & Generate Bill
                        else if (managerOption == "3")
                        {
                            system("cls");
                            int searchId, foundIndex = -1;
                            cout << "====================================================\n";
                            cout << "--- Enter Readings (Auto-Previous Cascading) ---\n";
                            cout << "====================================================\n";
                            cout << "Enter Consumer ID: ";
                            cin >> searchId;

                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] == searchId)
                                {
                                    foundIndex = i;
                                    break;
                                }
                            }

                            if (foundIndex != -1)
                            {
                                if (active_StatusArray[foundIndex] == 0)
                                {
                                    cout << "\n[Error] Inactive Consumer! Cannot enter readings.";
                                }
                                else
                                {
                                    cout << "\nConsumer: " << Consumers_nameArray[foundIndex] << endl;
                                    int tempCurr;

                                    // --- Month 1 ---
                                    prev1[foundIndex] = 0; // M1 Previous hamesha 0 hogi
                                    cout << "\n--- Month 1 --- (Prev: 0)\n";
                                    cout << "Enter Current Reading: ";
                                    cin >> tempCurr;
                                    if (tempCurr >= 0)
                                    {
                                        curr1[foundIndex] = tempCurr;
                                    }
                                    else
                                    {
                                        cout << "[!] Error! Current cannot be negative.\n";
                                        curr1[foundIndex] = 0;
                                    }

                                    // --- Month 2 --- (Pichle mahine ki Current ko Prev banao)
                                    if (curr1[foundIndex] != 0)
                                    {
                                        prev2[foundIndex] = curr1[foundIndex];
                                        cout << "\n--- Month 2 --- (Prev: " << prev2[foundIndex] << ")\n";
                                        cout << "Enter Current Reading: ";
                                        cin >> tempCurr;
                                        if (tempCurr >= prev2[foundIndex])
                                        {
                                            curr2[foundIndex] = tempCurr;
                                        }
                                        else
                                        {
                                            cout << "[!] Invalid! M2 set to 0.\n";
                                            curr2[foundIndex] = 0;
                                        }
                                    }

                                    // --- Month 3 ---
                                    if (curr2[foundIndex] != 0)
                                    {
                                        prev3[foundIndex] = curr2[foundIndex];
                                        cout << "\n--- Month 3 --- (Prev: " << prev3[foundIndex] << ")\n";
                                        cout << "Enter Current Reading: ";
                                        cin >> tempCurr;
                                        if (tempCurr >= prev3[foundIndex])
                                        {
                                            curr3[foundIndex] = tempCurr;
                                        }
                                        else
                                        {
                                            cout << "[!] Invalid! M3 set to 0.\n";
                                            curr3[foundIndex] = 0;
                                        }
                                    }

                                    // --- Month 4 ---
                                    if (curr3[foundIndex] != 0)
                                    {
                                        prev4[foundIndex] = curr3[foundIndex];
                                        cout << "\n--- Month 4 --- (Prev: " << prev4[foundIndex] << ")\n";
                                        cout << "Enter Current Reading: ";
                                        cin >> tempCurr;
                                        if (tempCurr >= prev4[foundIndex])
                                        {
                                            curr4[foundIndex] = tempCurr;
                                        }
                                        else
                                        {
                                            cout << "[!] Invalid! M4 set to 0.\n";
                                            curr4[foundIndex] = 0;
                                        }
                                    }

                                    // --- Month 5 ---
                                    if (curr4[foundIndex] != 0)
                                    {
                                        prev5[foundIndex] = curr4[foundIndex];
                                        cout << "\n--- Month 5 --- (Prev: " << prev5[foundIndex] << ")\n";
                                        cout << "Enter Current Reading: ";
                                        cin >> tempCurr;
                                        if (tempCurr >= prev5[foundIndex])
                                        {
                                            curr5[foundIndex] = tempCurr;
                                        }
                                        else
                                        {
                                            cout << "[!] Invalid! M5 set to 0.\n";
                                            curr5[foundIndex] = 0;
                                        }
                                    }

                                    // --- Month 6 ---
                                    if (curr5[foundIndex] != 0)
                                    {
                                        prev6[foundIndex] = curr5[foundIndex];
                                        cout << "\n--- Month 6 --- (Prev: " << prev6[foundIndex] << ")\n";
                                        cout << "Enter Current Reading: ";
                                        cin >> tempCurr;
                                        if (tempCurr >= prev6[foundIndex])
                                        {
                                            curr6[foundIndex] = tempCurr;
                                        }
                                        else
                                        {
                                            cout << "[!] Invalid! M6 set to 0.\n";
                                            curr6[foundIndex] = 0;
                                        }
                                    }

                                    // --- CALCULATION LOGIC ---
                                    float rate;
                                    if (connection_TypeArray[foundIndex] == 1)
                                    {
                                        rate = domestic_rate;
                                    }
                                    else
                                    {
                                        rate = commercial_rate;
                                    }

                                    // Bill M1
                                    if (curr1[foundIndex] != 0)
                                    {
                                        used_units1[foundIndex] = curr1[foundIndex] - prev1[foundIndex];
                                        bill_m1[foundIndex] = (used_units1[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                    }
                                    // Bill M2
                                    if (curr2[foundIndex] != 0)
                                    {
                                        used_units2[foundIndex] = curr2[foundIndex] - prev2[foundIndex];
                                        bill_m2[foundIndex] = (used_units2[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat1[foundIndex] == 0)
                                        {
                                            bill_m2[foundIndex] += bill_m1[foundIndex];
                                        }
                                    }
                                    // Bill M3
                                    if (curr3[foundIndex] != 0)
                                    {
                                        used_units3[foundIndex] = curr3[foundIndex] - prev3[foundIndex];
                                        bill_m3[foundIndex] = (used_units3[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat2[foundIndex] == 0)
                                        {
                                            bill_m3[foundIndex] += bill_m2[foundIndex];
                                        }
                                    }
                                    // Bill M4
                                    if (curr4[foundIndex] != 0)
                                    {
                                        used_units4[foundIndex] = curr4[foundIndex] - prev4[foundIndex];
                                        bill_m4[foundIndex] = (used_units4[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat3[foundIndex] == 0)
                                        {
                                            bill_m4[foundIndex] += bill_m3[foundIndex];
                                        }
                                    }
                                    // Bill M5
                                    if (curr5[foundIndex] != 0)
                                    {
                                        used_units5[foundIndex] = curr5[foundIndex] - prev5[foundIndex];
                                        bill_m5[foundIndex] = (used_units5[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat4[foundIndex] == 0)
                                        {
                                            bill_m5[foundIndex] += bill_m4[foundIndex];
                                        }
                                    }
                                    // Bill M6
                                    if (curr6[foundIndex] != 0)
                                    {
                                        used_units6[foundIndex] = curr6[foundIndex] - prev6[foundIndex];
                                        bill_m6[foundIndex] = (used_units6[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat5[foundIndex] == 0)
                                        {
                                            bill_m6[foundIndex] += bill_m5[foundIndex];
                                        }
                                    }

                                    cout << "\n[Success] Readings recorded and bills updated correctly!";
                                }
                            }
                            else
                            {
                                cout << "\n[!] Consumer ID not found.";
                            }
                            getch();
                        }
                        // Update Corrrect Reading
                        else if (managerOption == "4")
                        {
                            system("cls");
                            int searchId, foundIndex = -1;
                            cout << "--- Update / Correct Monthly Readings ---\n";
                            cout << "Enter Consumer ID: ";
                            cin >> searchId;

                            // 1. Search Consumer
                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] == searchId)
                                {
                                    foundIndex = i;
                                    break;
                                }
                            }

                            if (foundIndex != -1)
                            {
                                int monthChoice;
                                cout << "Consumer Found: " << Consumers_nameArray[foundIndex] << endl;
                                cout << "Enter Month Number to Correct (1-6): ";
                                cin >> monthChoice;

                                if (monthChoice >= 1 && monthChoice <= 6)
                                {
                                    // 2. Check if Record Exists (Policy: Reading 0 means not entered)
                                    bool exists = true;
                                    if (monthChoice == 1 && curr1[foundIndex] == 0)
                                        exists = false;
                                    else if (monthChoice == 2 && curr2[foundIndex] == 0)
                                        exists = false;
                                    else if (monthChoice == 3 && curr3[foundIndex] == 0)
                                        exists = false;
                                    else if (monthChoice == 4 && curr4[foundIndex] == 0)
                                        exists = false;
                                    else if (monthChoice == 5 && curr5[foundIndex] == 0)
                                        exists = false;
                                    else if (monthChoice == 6 && curr6[foundIndex] == 0)
                                        exists = false;

                                    if (exists == false)
                                    {
                                        cout << "\n[!] Error: Record for Month " << monthChoice << " has not been entered yet.";
                                        cout << "\nPlease use Option 3 to enter a new record.";
                                    }
                                    else
                                    {
                                        int correctedReading;
                                        cout << "Current saved reading for Month " << monthChoice << " is being updated.\n";
                                        cout << "Enter Corrected Reading: ";
                                        cin >> correctedReading;

                                        // 3. Validation and Update
                                        if (correctedReading >= 0)
                                        {
                                            // Update the specific month reading
                                            if (monthChoice == 1)
                                            {
                                                curr1[foundIndex] = correctedReading;
                                            }
                                            else if (monthChoice == 2)
                                            {
                                                curr2[foundIndex] = correctedReading;
                                            }
                                            else if (monthChoice == 3)
                                            {
                                                curr3[foundIndex] = correctedReading;
                                            }
                                            else if (monthChoice == 4)
                                            {
                                                curr4[foundIndex] = correctedReading;
                                            }
                                            else if (monthChoice == 5)
                                            {
                                                curr5[foundIndex] = correctedReading;
                                            }
                                            else if (monthChoice == 6)
                                            {
                                                curr6[foundIndex] = correctedReading;
                                            }

                                            // 4. CRITICAL: Recalculate Units and Bills for ALL 6 months to maintain consistency
                                            float rate;
                                            if (connection_TypeArray[foundIndex] == 1)
                                            {
                                                rate = domestic_rate;
                                            }
                                            else
                                            {
                                                rate = commercial_rate;
                                            }

                                            // --- Month 1 Recalculation ---
                                            used_units1[foundIndex] = curr1[foundIndex] - prev1[foundIndex];
                                            bill_m1[foundIndex] = (used_units1[foundIndex] * rate) * (1 + tax) + fixed_charges;

                                            // --- Month 2 Recalculation ---
                                            used_units2[foundIndex] = curr2[foundIndex] - prev2[foundIndex];
                                            bill_m2[foundIndex] = (used_units2[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                            if (pay_stat1[foundIndex] == 0)
                                            {
                                                bill_m2[foundIndex] = bill_m2[foundIndex] + bill_m1[foundIndex];
                                            }

                                            // --- Month 3 Recalculation ---
                                            used_units3[foundIndex] = curr3[foundIndex] - prev3[foundIndex];
                                            bill_m3[foundIndex] = (used_units3[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                            if (pay_stat2[foundIndex] == 0)
                                            {
                                                bill_m3[foundIndex] = bill_m3[foundIndex] + bill_m2[foundIndex];
                                            }

                                            // --- Month 4 Recalculation ---
                                            used_units4[foundIndex] = curr4[foundIndex] - prev4[foundIndex];
                                            bill_m4[foundIndex] = (used_units4[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                            if (pay_stat3[foundIndex] == 0)
                                            {
                                                bill_m4[foundIndex] = bill_m4[foundIndex] + bill_m3[foundIndex];
                                            }

                                            // --- Month 5 Recalculation ---
                                            used_units5[foundIndex] = curr5[foundIndex] - prev5[foundIndex];
                                            bill_m5[foundIndex] = (used_units5[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                            if (pay_stat4[foundIndex] == 0)
                                            {
                                                bill_m5[foundIndex] = bill_m5[foundIndex] + bill_m4[foundIndex];
                                            }

                                            // --- Month 6 Recalculation ---
                                            used_units6[foundIndex] = curr6[foundIndex] - prev6[foundIndex];
                                            bill_m6[foundIndex] = (used_units6[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                            if (pay_stat5[foundIndex] == 0)
                                            {
                                                bill_m6[foundIndex] = bill_m6[foundIndex] + bill_m5[foundIndex];
                                            }

                                            cout << "\n[Success] Record corrected and all dependent bills updated!";
                                        }
                                        else
                                        {
                                            cout << "\n[Error] Invalid input!";
                                        }
                                    }
                                }
                                else
                                {
                                    cout << "\n[Error] Invalid Month!";
                                }
                            }
                            else
                            {
                                cout << "\n[!] Consumer ID not found.";
                            }

                            cout << "\n\nPress any key to return...";
                            getch();
                        }
                        // Mark Bill Paid / Unpaid
                        else if (managerOption == "5")
                        {
                            system("cls");
                            int searchId, foundIndex = -1;
                            cout << "====================================================\n";
                            cout << "--- Mark Bill Paid / Unpaid (Cascading System) ---\n";
                            cout << "====================================================\n";
                            cout << "Enter Consumer ID: ";
                            cin >> searchId;

                            // 1. Consumer Search Logic
                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] == searchId)
                                {
                                    foundIndex = i;
                                    break;
                                }
                            }

                            if (foundIndex != -1)
                            {
                                int monthChoice;
                                cout << "\nConsumer Found: " << Consumers_nameArray[foundIndex] << endl;
                                cout << "Enter Month Number (1-6) to update payment: ";
                                cin >> monthChoice;

                                if (monthChoice >= 1 && monthChoice <= 6)
                                {
                                    int newStatus;
                                    cout << "Enter New Status (1 for PAID, 0 for UNPAID): ";
                                    cin >> newStatus;

                                    if (newStatus == 1 || newStatus == 0)
                                    {
                                        // 2. Selected month update
                                        if (monthChoice == 1)
                                        {
                                            pay_stat1[foundIndex] = newStatus;
                                        }
                                        else if (monthChoice == 2)
                                        {
                                            pay_stat2[foundIndex] = newStatus;
                                        }
                                        else if (monthChoice == 3)
                                        {
                                            pay_stat3[foundIndex] = newStatus;
                                        }
                                        else if (monthChoice == 4)
                                        {
                                            pay_stat4[foundIndex] = newStatus;
                                        }
                                        else if (monthChoice == 5)
                                        {
                                            pay_stat5[foundIndex] = newStatus;
                                        }
                                        else if (monthChoice == 6)
                                        {
                                            pay_stat6[foundIndex] = newStatus;
                                        }

                                        // 3. --- CASCADING LOGIC (Pichle Mahine Auto-Clear) ---
                                        if (newStatus == 1)
                                        {
                                            if (monthChoice >= 2)
                                            {
                                                pay_stat1[foundIndex] = 1;
                                            }
                                            if (monthChoice >= 3)
                                            {
                                                pay_stat2[foundIndex] = 1;
                                            }
                                            if (monthChoice >= 4)
                                            {
                                                pay_stat3[foundIndex] = 1;
                                            }
                                            if (monthChoice >= 5)
                                            {
                                                pay_stat4[foundIndex] = 1;
                                            }
                                            if (monthChoice >= 6)
                                            {
                                                pay_stat5[foundIndex] = 1;
                                            }

                                            cout << "\n[System Notice] All previous months marked as PAID automatically.";
                                        }

                                        // 4. --- RE-CALCULATION (Arrears Update) ---
                                        float rate;
                                        if (connection_TypeArray[foundIndex] == 1)
                                        {
                                            rate = domestic_rate;
                                        }
                                        else
                                        {
                                            rate = commercial_rate;
                                        }

                                        // Step-by-step Recalculation
                                        bill_m1[foundIndex] = ((curr1[foundIndex] - prev1[foundIndex]) * rate) * (1 + tax) + fixed_charges;

                                        bill_m2[foundIndex] = ((curr2[foundIndex] - prev2[foundIndex]) * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat1[foundIndex] == 0)
                                        {
                                            bill_m2[foundIndex] = bill_m2[foundIndex] + bill_m1[foundIndex];
                                        }

                                        bill_m3[foundIndex] = ((curr3[foundIndex] - prev3[foundIndex]) * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat2[foundIndex] == 0)
                                        {
                                            bill_m3[foundIndex] = bill_m3[foundIndex] + bill_m2[foundIndex];
                                        }

                                        bill_m4[foundIndex] = ((curr4[foundIndex] - prev4[foundIndex]) * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat3[foundIndex] == 0)
                                        {
                                            bill_m4[foundIndex] = bill_m4[foundIndex] + bill_m3[foundIndex];
                                        }

                                        bill_m5[foundIndex] = ((curr5[foundIndex] - prev5[foundIndex]) * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat4[foundIndex] == 0)
                                        {
                                            bill_m5[foundIndex] = bill_m5[foundIndex] + bill_m4[foundIndex];
                                        }

                                        bill_m6[foundIndex] = ((curr6[foundIndex] - prev6[foundIndex]) * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat5[foundIndex] == 0)
                                        {
                                            bill_m6[foundIndex] = bill_m6[foundIndex] + bill_m5[foundIndex];
                                        }

                                        cout << "\n[Success] Status updated and all arrears cleared!";
                                    }
                                    else
                                    {
                                        cout << "\n[Error] Invalid Status!";
                                    }
                                }
                            }
                            else
                            {
                                cout << "\n[!] Consumer ID not found.";
                            }

                            cout << "\n\nPress any key to return...";
                            getch();
                        }
                        // Display Billing History
                        else if (managerOption == "6")
                        {
                            system("cls");
                            int searchId, foundIndex = -1;
                            cout << "--- View Consumer Billing History ---\n";
                            cout << "Enter Consumer ID: ";
                            cin >> searchId;

                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] == searchId)
                                {
                                    foundIndex = i;
                                    break;
                                }
                            }

                            if (foundIndex != -1)
                            {
                                // --- TO REMOVE GARBAGE VALUES ---
                                used_units1[foundIndex] = curr1[foundIndex] - prev1[foundIndex];
                                used_units2[foundIndex] = curr2[foundIndex] - prev2[foundIndex];
                                used_units3[foundIndex] = curr3[foundIndex] - prev3[foundIndex];
                                used_units4[foundIndex] = curr4[foundIndex] - prev4[foundIndex];
                                used_units5[foundIndex] = curr5[foundIndex] - prev5[foundIndex];
                                used_units6[foundIndex] = curr6[foundIndex] - prev6[foundIndex];

                                cout << "\nBilling History for: " << Consumers_nameArray[foundIndex] << " (ID: " << searchId << ")\n";
                                cout << "-----------------------------------------------------------------------------\n";
                                cout << "Month\tPrev Units\tCurr Units\tUnits Used\tBill Amount\tStatus\n";
                                cout << "-----------------------------------------------------------------------------\n";

                                // Month 1
                                cout << "M1\t" << prev1[foundIndex] << "\t\t" << curr1[foundIndex] << "\t\t" << used_units1[foundIndex]
                                     << "\t\t" << bill_m1[foundIndex] << "\t\t";
                                if (pay_stat1[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
                                cout << endl;

                                // Month 2
                                cout << "M2\t" << prev2[foundIndex] << "\t\t" << curr2[foundIndex] << "\t\t" << used_units2[foundIndex]
                                     << "\t\t" << bill_m2[foundIndex] << "\t\t";
                                if (pay_stat2[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
                                cout << endl;

                                // Month 3
                                cout << "M3\t" << prev3[foundIndex] << "\t\t" << curr3[foundIndex] << "\t\t" << used_units3[foundIndex]
                                     << "\t\t" << bill_m3[foundIndex] << "\t\t";
                                if (pay_stat3[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
                                cout << endl;

                                // Month 4
                                cout << "M4\t" << prev4[foundIndex] << "\t\t" << curr4[foundIndex] << "\t\t" << used_units4[foundIndex]
                                     << "\t\t" << bill_m4[foundIndex] << "\t\t";
                                if (pay_stat4[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
                                cout << endl;

                                // Month 5
                                cout << "M5\t" << prev5[foundIndex] << "\t\t" << curr5[foundIndex] << "\t\t" << used_units5[foundIndex]
                                     << "\t\t" << bill_m5[foundIndex] << "\t\t";
                                if (pay_stat5[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
                                cout << endl;

                                // Month 6
                                cout << "M6\t" << prev6[foundIndex] << "\t\t" << curr6[foundIndex] << "\t\t" << used_units6[foundIndex]
                                     << "\t\t" << bill_m6[foundIndex] << "\t\t";
                                if (pay_stat6[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
                                cout << endl;

                                cout << "-----------------------------------------------------------------------------\n";
                            }
                            else
                            {
                                cout << "\n[!] Error: Consumer ID " << searchId << " .";
                            }

                            cout << "\n\nPress any key to return...";
                            getch();
                        }
                        // Search /Listing
                        else if (managerOption == "7")
                        {
                            system("cls");
                            string searchChoice;
                            cout << "--- Search / Listings Menu ---\n";
                            cout << "1. Search by Consumer ID (Full Summary)\n";
                            cout << "2. List Unpaid Bills (By Month)\n";
                            cout << "3. List Bills Exceeding Threshold (By Month)\n";
                            cout << "4. List Zero Consumption Users (By Month)\n";
                            cout << "5. Go Back\n";
                            cout << "Enter Choice: ";
                            cin >> searchChoice;

                            if (searchChoice == "1")
                            {
                                int sid;
                                bool found = false;
                                cout << "Enter Consumer ID: ";
                                cin >> sid;
                                for (int i = 0; i < Total_Consumers; i++)
                                {
                                    if (Consumers_IdArray[i] == sid)
                                    {
                                        cout << "\n--- Full Consumer Record ---\n";
                                        cout << "Name: " << Consumers_nameArray[i] << " | Meter #: " << meterNumber_Array[i] << endl;
                                        cout << "Address: " << adress_Array[i] << endl;

                                        // Type Check (If-Else)
                                        cout << "Type: ";
                                        if (connection_TypeArray[i] == 1)
                                        {
                                            cout << "Domestic" << endl;
                                        }
                                        else
                                        {
                                            cout << "Commercial" << endl;
                                        }

                                        // Status Check (If-Else)
                                        cout << "Account Status: ";
                                        if (active_StatusArray[i] == 1)
                                        {
                                            cout << "Active" << endl;
                                        }
                                        else
                                        {
                                            cout << "Inactive" << endl;
                                        }

                                        cout << "--- Billing Summary (M6) ---\n";
                                        cout << "Units Used: " << used_units6[i] << " | Total Bill: " << bill_m6[i] << " PKR" << endl;

                                        // Payment Check (If-Else)
                                        cout << "Payment: ";
                                        if (pay_stat6[i] == 1)
                                        {
                                            cout << "Paid" << endl;
                                        }
                                        else
                                        {
                                            cout << "UNPAID" << endl;
                                        }

                                        found = true;
                                        break;
                                    }
                                }
                                if (found == false)
                                {
                                    cout << "\n[!] Error: Consumer ID " << sid << " not found.";
                                }
                            }
                            // List Unpaid Bill
                            else if (searchChoice == "2")
                            {
                                int m;
                                bool found = false;
                                cout << "Enter Month (1-6) to check Unpaid Bills: ";
                                cin >> m;
                                cout << "\n--- Unpaid Bills (Month " << m << ") ---\n";
                                cout << "ID\tName\t\tAmount\n";
                                for (int i = 0; i < Total_Consumers; i++)
                                {
                                    if (Consumers_IdArray[i] != 0)
                                    {
                                        bool isUnpaid = false;
                                        float amt = 0;

                                        // Manual month check using if-else
                                        if (m == 1)
                                        {
                                            if (pay_stat1[i] == 0)
                                            {
                                                isUnpaid = true;
                                                amt = bill_m1[i];
                                            }
                                        }
                                        else if (m == 2)
                                        {
                                            if (pay_stat2[i] == 0)
                                            {
                                                isUnpaid = true;
                                                amt = bill_m2[i];
                                            }
                                        }
                                        else if (m == 3)
                                        {
                                            if (pay_stat3[i] == 0)
                                            {
                                                isUnpaid = true;
                                                amt = bill_m3[i];
                                            }
                                        }
                                        else if (m == 4)
                                        {
                                            if (pay_stat4[i] == 0)
                                            {
                                                isUnpaid = true;
                                                amt = bill_m4[i];
                                            }
                                        }
                                        else if (m == 5)
                                        {
                                            if (pay_stat5[i] == 0)
                                            {
                                                isUnpaid = true;
                                                amt = bill_m5[i];
                                            }
                                        }
                                        else if (m == 6)
                                        {
                                            if (pay_stat6[i] == 0)
                                            {
                                                isUnpaid = true;
                                                amt = bill_m6[i];
                                            }
                                        }

                                        if (isUnpaid == true)
                                        {
                                            cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i] << "\t\t" << amt << endl;
                                            found = true;
                                        }
                                    }
                                }
                                if (found == false)
                                {
                                    cout << "No unpaid bills found for this month.\n";
                                }
                            }
                            // List BILLS Exceeding Threeshold
                            else if (searchChoice == "3")
                            {
                                int m, threshold;
                                bool found = false;
                                cout << "Enter Month (1-6): ";
                                cin >> m;
                                cout << "Enter Amount Threshold: ";
                                cin >> threshold;
                                cout << "\n--- Bills Exceeding " << threshold << " PKR ---\n";
                                for (int i = 0; i < Total_Consumers; i++)
                                {
                                    if (Consumers_IdArray[i] != 0)
                                    {
                                        float bill = 0;

                                        if (m == 1)
                                        {
                                            bill = bill_m1[i];
                                        }
                                        else if (m == 2)
                                        {
                                            bill = bill_m2[i];
                                        }
                                        else if (m == 3)
                                        {
                                            bill = bill_m3[i];
                                        }
                                        else if (m == 4)
                                        {
                                            bill = bill_m4[i];
                                        }
                                        else if (m == 5)
                                        {
                                            bill = bill_m5[i];
                                        }
                                        else if (m == 6)
                                        {
                                            bill = bill_m6[i];
                                        }

                                        if (bill > threshold)
                                        {
                                            cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i] << "\tBill: " << bill << endl;
                                            found = true;
                                        }
                                    }
                                }
                                if (found == false)
                                {
                                    cout << "No records found above this threshold.\n";
                                }
                            }
                            else if (searchChoice == "4")
                            {
                                int m;
                                bool found = false;
                                cout << "Enter Month (1-6) for Zero Consumption check: ";
                                cin >> m;
                                cout << "\n--- Zero Consumption Consumers ---\n";
                                for (int i = 0; i < Total_Consumers; i++)
                                {
                                    if (Consumers_IdArray[i] != 0)
                                    {
                                        int units = 0;
                                        // Manual if-else logic
                                        if (m == 1)
                                        {
                                            units = used_units1[i];
                                        }
                                        else if (m == 2)
                                        {
                                            units = used_units2[i];
                                        }
                                        else if (m == 3)
                                        {
                                            units = used_units3[i];
                                        }
                                        else if (m == 4)
                                        {
                                            units = used_units4[i];
                                        }
                                        else if (m == 5)
                                        {
                                            units = used_units5[i];
                                        }
                                        else if (m == 6)
                                        {
                                            units = used_units6[i];
                                        }

                                        if (units == 0)
                                        {
                                            cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i] << endl;
                                            found = true;
                                        }
                                    }
                                }
                                if (found == false)
                                {
                                    cout << "No users found with zero consumption.\n";
                                }
                            }

                            cout << "\nPress any key to return...";
                            getch();
                        }
                        else if (managerOption == "8")
                        {
                            system("cls");
                            int issuesFound = 0;
                            cout << "====================================================\n";
                            cout << "          SYSTEM DATA VALIDATION REPORT             \n";
                            cout << "====================================================\n\n";

                            // 1. Detect Duplicate Consumer IDs
                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] != 0) // Just check DATA Arrays
                                {
                                    for (int j = i + 1; j < Total_Consumers; j++)
                                    {
                                        if (Consumers_IdArray[i] == Consumers_IdArray[j])
                                        {
                                            cout << "[!] CONFLICT: Duplicate ID " << Consumers_IdArray[i] << " found at index " << i << " and " << j << endl;
                                            issuesFound = issuesFound + 1;
                                        }
                                    }
                                }
                            }

                            // 2. Scan all consumers for other errors
                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] != 0)
                                {
                                    // --- Check: Current Reading < Previous Reading ---
                                    if (curr6[i] < prev6[i])
                                    {
                                        cout << "[!] ERROR: Reading Conflict for ID " << Consumers_IdArray[i] << " (Current " << curr6[i] << " < Prev " << prev6[i] << ")" << endl;
                                        issuesFound = issuesFound + 1;
                                    }

                                    // --- Check: Negative Units or Bills ---
                                    if (used_units6[i] < 0)
                                    {
                                        cout << "[!] ERROR: Negative Units for ID " << Consumers_IdArray[i] << " (" << used_units6[i] << ")" << endl;
                                        issuesFound = issuesFound + 1;
                                    }
                                    if (bill_m6[i] < 0)
                                    {
                                        cout << "[!] ERROR: Negative Bill for ID " << Consumers_IdArray[i] << " (" << bill_m6[i] << ")" << endl;
                                        issuesFound = issuesFound + 1;
                                    }

                                    // --- Check: Inactive consumer having usage ---
                                    if (active_StatusArray[i] == 0) // If Active
                                    {
                                        if (used_units6[i] > 0)
                                        {
                                            cout << "[!] POLICY: Inactive consumer ID " << Consumers_IdArray[i] << " has usage of " << used_units6[i] << " units." << endl;
                                            issuesFound = issuesFound + 1;
                                        }
                                    }

                                    // --- Check: Bill Amount Mismatch (Recalculation check) ---
                                    float currentRate;
                                    if (connection_TypeArray[i] == 1)
                                    {
                                        currentRate = domestic_rate;
                                    }
                                    else
                                    {
                                        currentRate = commercial_rate;
                                    }

                                    float expectedBill = (used_units6[i] * currentRate);
                                    expectedBill = expectedBill + (expectedBill * tax) + fixed_charges;

                                    // Arrears logic for mismatch
                                    if (pay_stat5[i] == 0)
                                    {
                                        expectedBill = expectedBill + bill_m5[i];
                                    }

                                    // 0.1 Margin Due To Floating Point
                                    float difference = bill_m6[i] - expectedBill;
                                    if (difference > 0.1 || difference < -0.1)
                                    {
                                        cout << "[!] MISMATCH: Bill calculation error for ID " << Consumers_IdArray[i] << endl;
                                        cout << "    Stored: " << bill_m6[i] << " | Expected: " << expectedBill << endl;
                                        issuesFound = issuesFound + 1;
                                    }
                                }
                            }

                            // Final Report Summary
                            if (issuesFound == 0)
                            {
                                cout << ">>> All checks passed! No data conflicts found.\n";
                            }
                            else
                            {
                                cout << "\n----------------------------------------------------\n";
                                cout << "TOTAL ISSUES DETECTED: " << issuesFound << endl;
                            }

                            cout << "\nPress any key to return to Manager Menu...";
                            getch();
                        }
                        else if (managerOption == "9")
                        {
                            system("cls");
                            string rChoice;
                            cout << "--- Reports & Summaries ---\n";
                            cout << "1. Month-wise Revenue & Unpaid Totals\n";
                            cout << "2. Highest & Lowest Bills (By Month)\n";
                            cout << "3. Consumer-wise Overall Totals (6 Months)\n";
                            cout << "4. Slab Category Count\n";
                            cout << "Enter Choice: ";
                            cin >> rChoice;

                            if (rChoice == "1")
                            {
                                // Month-wise total revenue and unpaid amount using Nested Loops
                                cout << "\nMonth\tTotal Revenue\tUnpaid Amount\n";
                                cout << "--------------------------------------\n";
                                for (int m = 1; m <= 6; m++)
                                {
                                    float totalRev = 0;
                                    float totalUnpaid = 0;

                                    for (int i = 0; i < Total_Consumers; i++)
                                    {
                                        if (Consumers_IdArray[i] != 0)
                                        {
                                            float currentBill = 0;
                                            int currentStat = 0;

                                            // Manual Month selection using IF
                                            if (m == 1)
                                            {
                                                currentBill = bill_m1[i];
                                                currentStat = pay_stat1[i];
                                            }
                                            else if (m == 2)
                                            {
                                                currentBill = bill_m2[i];
                                                currentStat = pay_stat2[i];
                                            }
                                            else if (m == 3)
                                            {
                                                currentBill = bill_m3[i];
                                                currentStat = pay_stat3[i];
                                            }
                                            else if (m == 4)
                                            {
                                                currentBill = bill_m4[i];
                                                currentStat = pay_stat4[i];
                                            }
                                            else if (m == 5)
                                            {
                                                currentBill = bill_m5[i];
                                                currentStat = pay_stat5[i];
                                            }
                                            else if (m == 6)
                                            {
                                                currentBill = bill_m6[i];
                                                currentStat = pay_stat6[i];
                                            }

                                            totalRev = totalRev + currentBill;
                                            if (currentStat == 0) // Agar unpaid hai
                                            {
                                                totalUnpaid = totalUnpaid + currentBill;
                                            }
                                        }
                                    }
                                    cout << "M" << m << "\t" << totalRev << "\t\t" << totalUnpaid << endl;
                                }
                            }
                            else if (rChoice == "2")
                            {
                                int m;
                                cout << "Enter Month (1-6): ";
                                cin >> m;

                                float highestBill = -1.0;
                                float lowestBill = 9999999.0;
                                int highID = 0;
                                int lowID = 0;

                                for (int i = 0; i < Total_Consumers; i++)
                                {
                                    if (Consumers_IdArray[i] != 0)
                                    {
                                        float b = 0;
                                        if (m == 1)
                                        {
                                            b = bill_m1[i];
                                        }
                                        else if (m == 2)
                                        {
                                            b = bill_m2[i];
                                        }
                                        else if (m == 3)
                                        {
                                            b = bill_m3[i];
                                        }
                                        else if (m == 4)
                                        {
                                            b = bill_m4[i];
                                        }
                                        else if (m == 5)
                                        {
                                            b = bill_m5[i];
                                        }
                                        else if (m == 6)
                                        {
                                            b = bill_m6[i];
                                        }

                                        if (b > highestBill)
                                        {
                                            highestBill = b;
                                            highID = Consumers_IdArray[i];
                                        }
                                        if (b < lowestBill)
                                        {
                                            lowestBill = b;
                                            lowID = Consumers_IdArray[i];
                                        }
                                    }
                                }
                                cout << "\n--- Month " << m << " Report ---" << endl;
                                cout << "Highest Bill: " << highestBill << " PKR (Consumer ID: " << highID << ")" << endl;
                                cout << "Lowest Bill: " << lowestBill << " PKR (Consumer ID: " << lowID << ")" << endl;
                            }
                            else if (rChoice == "3")
                            {
                                // Consumer-wise total units and total billed amount across all 6 months
                                cout << "\nID\tName\t\tTotal Units\tTotal Billed\n";
                                cout << "----------------------------------------------------\n";
                                for (int i = 0; i < Total_Consumers; i++)
                                {
                                    if (Consumers_IdArray[i] != 0)
                                    {
                                        int totalU = used_units1[i] + used_units2[i] + used_units3[i] + used_units4[i] + used_units5[i] + used_units6[i];
                                        float totalB = bill_m1[i] + bill_m2[i] + bill_m3[i] + bill_m4[i] + bill_m5[i] + bill_m6[i];

                                        cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i];
                                        if (Consumers_nameArray[i].length() < 8)
                                        {
                                            cout << "\t\t";
                                        }
                                        else
                                        {
                                            cout << "\t";
                                        }

                                        cout << totalU << "\t\t" << totalB << endl;
                                    }
                                }
                            }
                            else if (rChoice == "4")
                            {
                                // Count of consumers in slab category (Low <= 200, High > 200)
                                int m;
                                cout << "Enter Month (1-6): ";
                                cin >> m;
                                int lowCount = 0;
                                int highCount = 0;

                                for (int i = 0; i < Total_Consumers; i++)
                                {
                                    if (Consumers_IdArray[i] != 0)
                                    {
                                        int u = 0;
                                        if (m == 1)
                                        {
                                            u = used_units1[i];
                                        }
                                        else if (m == 2)
                                        {
                                            u = used_units2[i];
                                        }
                                        else if (m == 3)
                                        {
                                            u = used_units3[i];
                                        }
                                        else if (m == 4)
                                        {
                                            u = used_units4[i];
                                        }
                                        else if (m == 5)
                                        {
                                            u = used_units5[i];
                                        }
                                        else if (m == 6)
                                        {
                                            u = used_units6[i];
                                        }

                                        if (u <= 200)
                                        {
                                            lowCount = lowCount + 1;
                                        }
                                        else
                                        {
                                            highCount = highCount + 1;
                                        }
                                    }
                                }
                                cout << "\n--- Slab Category Count (Month " << m << ") ---" << endl;
                                cout << "Slab 1 (Units <= 200): " << lowCount << " Consumers" << endl;
                                cout << "Slab 2 (Units > 200):  " << highCount << " Consumers" << endl;
                            }

                            cout << "\nPress any key to return to Manager Menu...";
                            getch();
                        }
                        else if (managerOption == "10")
                        {
                            system("cls");
                            int searchId, foundIndex = -1;
                            cout << "====================================================\n";
                            cout << "--- Change Consumer Account Status (Active/In) ---\n";
                            cout << "====================================================\n";
                            cout << "Enter Consumer ID: ";
                            cin >> searchId;

                            // 1. Search Consumer
                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] == searchId)
                                {
                                    foundIndex = i;
                                    break;
                                }
                            }

                            if (foundIndex != -1)
                            {
                                cout << "\nConsumer: " << Consumers_nameArray[foundIndex] << endl;

                                // Current Status Display (If-Else)
                                cout << "Current Status: ";
                                if (active_StatusArray[foundIndex] == 1)
                                {
                                    cout << "ACTIVE" << endl;
                                }
                                else
                                {
                                    cout << "INACTIVE" << endl;
                                }

                                // Taking New Status
                                int newStat;
                                cout << "\nEnter New Status (1 for ACTIVE, 0 for INACTIVE): ";
                                cin >> newStat;

                                if (newStat == 1 || newStat == 0)
                                {
                                    active_StatusArray[foundIndex] = newStat;

                                    cout << "\n[Success] Account status updated to ";
                                    if (newStat == 1)
                                    {
                                        cout << "ACTIVE.";
                                    }
                                    else
                                    {
                                        cout << "INACTIVE.";
                                    }
                                }
                                else
                                {
                                    cout << "\n[Error] Invalid Input! Use 1 or 0.";
                                }
                            }
                            else
                            {
                                cout << "\n[!] Error: Consumer ID " << searchId << " not found.";
                            }

                            cout << "\n\nPress any key to return...";
                            getch();
                        }
                        else if (managerOption == "0")
                        {
                            cout << "\nLogging out from Manager Panel... Press any key.";
                            getch();
                            break; // Break loop of Manager Menu
                        }
                        else
                        {
                            cout << "\nInvalid Choice! Press any key to try again...";
                            getch();
                        }
                    }
                    break;
                }
                else
                {
                    cout << "You enter Wrong infrmation." << endl;
                    if (i == 2)
                    {
                        cout << "Press Any Key to continue...";
                        getch();
                    }
                }
            }
        }
        else if (userOption == "2")
        {
            system("cls");
            int id, foundIndex = -1;
            cout << "\n====================================\n";
            cout << "          CONSUMER PORTAL           \n";
            cout << "====================================\n";
            cout << "Enter your Consumer ID to login: ";
            cin >> id;

            // LOOP to search Id
            for (int i = 0; i < Total_Consumers; i++)
            {
                if (Consumers_IdArray[i] == id)
                {
                    foundIndex = i;
                    break;
                }
            }

            if (foundIndex != -1)
            {
                string consumerChoice;
                while (true)
                {
                    system("cls");
                    cout << "\n--- Welcome, " << Consumers_nameArray[foundIndex] << " ---\n";
                    cout << "1. View Current Bill (Month 6)\n";
                    cout << "2. View 6-Month Billing History\n";
                    cout << "3. View My Account Details\n";
                    cout << "4. GO Back To Main Menu\n";
                    cout << "5. Logout\n";
                    cout << "Choose option: ";
                    cin >> consumerChoice;

                    if (consumerChoice == "1")
                    {
                        system("cls");
                        cout << "\n>>> LATEST BILL (MONTH 6) <<<\n";
                        cout << "Units Consumed: " << used_units6[foundIndex] << endl;
                        cout << "Total Amount (Inc. Taxes & Arrears): " << bill_m6[foundIndex] << " PKR" << endl;

                        // Status Check
                        cout << "Status: ";
                        if (pay_stat6[foundIndex] == 1)
                        {
                            cout << "PAID" << endl;
                        }
                        else
                        {
                            cout << "UNPAID" << endl;
                        }

                        cout << "\nPress Any key to go back...";
                        getch();
                    }
                    else if (consumerChoice == "2")
                    {
                        system("cls");
                        cout << "\n>>> 6-MONTH BILLING HISTORY <<<\n";
                        cout << "Month\tBill Amount\tStatus\n";
                        cout << "--------------------------------\n";

                        // Month 1
                        cout << "M1\t" << bill_m1[foundIndex] << " PKR\t";
                        if (pay_stat1[foundIndex] == 1)
                        {
                            cout << "Paid";
                        }
                        else
                        {
                            cout << "Unpaid";
                        }
                        cout << endl;

                        // Month 2
                        cout << "M2\t" << bill_m2[foundIndex] << " PKR\t";
                        if (pay_stat2[foundIndex] == 1)
                        {
                            cout << "Paid";
                        }
                        else
                        {
                            cout << "Unpaid";
                        }
                        cout << endl;

                        // Month 3
                        cout << "M3\t" << bill_m3[foundIndex] << " PKR\t";
                        if (pay_stat3[foundIndex] == 1)
                        {
                            cout << "Paid";
                        }
                        else
                        {
                            cout << "Unpaid";
                        }
                        cout << endl;

                        // Month 4
                        cout << "M4\t" << bill_m4[foundIndex] << " PKR\t";
                        if (pay_stat4[foundIndex] == 1)
                        {
                            cout << "Paid";
                        }
                        else
                        {
                            cout << "Unpaid";
                        }
                        cout << endl;

                        // Month 5
                        cout << "M5\t" << bill_m5[foundIndex] << " PKR\t";
                        if (pay_stat5[foundIndex] == 1)
                        {
                            cout << "Paid";
                        }
                        else
                        {
                            cout << "Unpaid";
                        }
                        cout << endl;

                        // Month 6
                        cout << "M6\t" << bill_m6[foundIndex] << " PKR\t";
                        if (pay_stat6[foundIndex] == 1)
                        {
                            cout << "Paid";
                        }
                        else
                        {
                            cout << "Unpaid";
                        }
                        cout << endl;

                        cout << "\nPress Any key to go back...";
                        getch();
                    }
                    else if (consumerChoice == "3")
                    {
                        system("cls");
                        cout << "\n>>> ACCOUNT DETAILS <<<\n";
                        cout << "Consumer ID: " << Consumers_IdArray[foundIndex] << endl;
                        cout << "Meter Number: " << meterNumber_Array[foundIndex] << endl;
                        cout << "Address: " << adress_Array[foundIndex] << endl;

                        // Connection Type
                        cout << "Connection: ";
                        if (connection_TypeArray[foundIndex] == 1)
                        {
                            cout << "Domestic" << endl;
                        }
                        else
                        {
                            cout << "Commercial" << endl;
                        }

                        // Account Status
                        cout << "Account Status: ";
                        if (active_StatusArray[foundIndex] == 1)
                        {
                            cout << "Active" << endl;
                        }
                        else
                        {
                            cout << "Inactive" << endl;
                        }

                        cout << "\nPress Any key to go back...";
                        getch();
                    }
                    else if (consumerChoice == "4")
                    {
                        break; // Exit to Main Menu
                    }
                    else if (consumerChoice == "5")
                    {
                        cout << "Logging out...\n";
                        break; // Exit sub-menu
                    }
                    else
                    {
                        cout << "Invalid Option! Try again.\n";
                    }
                }
            }
            else
            {
                cout << "\n[!] Error: Consumer ID " << id << " not found in our records.\n";
            }
            cout << "Press Any key to continue...";
            getch();
        }

        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option " << endl;
        }
    } // end of Main while loop
    cout << endl
         << " Thanks for using this software";
    return 0;
}
