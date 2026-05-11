#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    int index = 10;
    const int Total_Consumers = 30;
    int Total_Months = 6;
<<<<<<< HEAD
    // data strurcture
    // This Program consist 10 HARDCODE CSTOMER
    // Consumers Name Section
    string Consumers_nameArray[Total_Consumers] = {"Smart", "Brandon", "Tony", "Gullo", "Venom", "Nick", "John", "CARLO", "Inferno", "Trump"};
    // Consumer's Adress Secion
=======

    string Consumers_nameArray[Total_Consumers] = {"Smart", "Brandon", "Tony", "Legend", "Venom", "Eagle", "Knight", "Shadow", "Inferno", "Blaze"};
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
    string adress_Array[Total_Consumers] = {"Ali Town Block C", "Lake City M4", "PSCIR Phase 2", "DHA Phase 2", "DHA Phase 4", "NFC Street 74", "Airline Street 34", "Model Town Phasae 3", "Wapda Town Block D", "Ali Town Street 19"};
    int Consumers_IdArray[Total_Consumers] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    int meterNumber_Array[Total_Consumers] = {111, 222, 333, 444, 555, 666, 777, 888, 999, 1010};
    int connection_TypeArray[Total_Consumers] = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    int active_StatusArray[Total_Consumers] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0};

    int prev1[30] = {100, 110, 120, 130, 140, 150, 160, 170, 180, 190};
    int prev2[30] = {150, 160, 170, 180, 190, 200, 210, 220, 230, 240};
    int prev3[30] = {200, 210, 220, 230, 240, 250, 260, 270, 280, 290};
    int prev4[30] = {250, 260, 270, 280, 290, 300, 310, 320, 330, 340};
    int prev5[30] = {300, 310, 320, 330, 340, 350, 360, 370, 380, 390};
    int prev6[30] = {350, 360, 370, 380, 390, 400, 410, 420, 430, 440};

    int curr1[30] = {150, 165, 180, 195, 210, 225, 240, 255, 270, 285};
    int curr2[30] = {200, 215, 230, 245, 260, 275, 290, 305, 320, 335};
    int curr3[30] = {250, 265, 280, 295, 310, 325, 340, 355, 370, 385};
    int curr4[30] = {300, 315, 330, 345, 360, 375, 390, 405, 420, 435};
    int curr5[30] = {350, 365, 380, 395, 410, 425, 440, 455, 470, 485};
    int curr6[30] = {400, 415, 430, 445, 460, 475, 490, 505, 520, 535};

    int used_units1[30], used_units2[30], used_units3[30], used_units4[30], used_units5[30], used_units6[30];

    for (int i = 0; i < 10; i++)
    {
        used_units1[i] = curr1[i] - prev1[i];
        used_units2[i] = curr2[i] - prev2[i];
        used_units3[i] = curr3[i] - prev3[i];
        used_units4[i] = curr4[i] - prev4[i];
        used_units5[i] = curr5[i] - prev5[i];
        used_units6[i] = curr6[i] - prev6[i];
    }
<<<<<<< HEAD
    // Paid Status 1 = Paid, 0 = Unpaid
=======

>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
    int pay_stat1[30] = {1, 0, 1, 1, 0, 1, 1, 0, 1, 1};
    int pay_stat2[30] = {1, 1, 0, 1, 1, 0, 1, 1, 0, 1};
    int pay_stat3[30] = {0, 1, 1, 0, 1, 1, 0, 1, 1, 0};
    int pay_stat4[30] = {1, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    int pay_stat5[30] = {1, 0, 1, 0, 1, 1, 1, 0, 1, 0};
    int pay_stat6[30] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
<<<<<<< HEAD
    // Bill Calculation
    float bill_m1[30], bill_m2[30], bill_m3[30], bill_m4[30], bill_m5[30], bill_m6[30];
    // Rates & Taxes
    float domestic_rate = 20.0;   // For Type 1
    float commercial_rate = 45.0; // For Type 2
    float tax = 0.15;             // 15% tax
=======

    float bill_m1[30], bill_m2[30], bill_m3[30], bill_m4[30], bill_m5[30], bill_m6[30];

    float domestic_rate = 20.0;
    float commercial_rate = 45.0;
    float tax = 0.15;
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
    float fixed_charges = 500.0;

    for (int i = 0; i < 10; i++)
    {
        float current_rate;
<<<<<<< HEAD
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
=======
        if (connection_TypeArray[i] == 1) { current_rate = domestic_rate; }
        else { current_rate = commercial_rate; }

        bill_m1[i] = (used_units1[i] * current_rate) * (1 + tax) + fixed_charges;
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
        bill_m2[i] = (used_units2[i] * current_rate) * (1 + tax) + fixed_charges;
        if (pay_stat1[i] == 0) { bill_m2[i] += bill_m1[i]; }
        bill_m3[i] = (used_units3[i] * current_rate) * (1 + tax) + fixed_charges;
        if (pay_stat2[i] == 0) { bill_m3[i] += bill_m2[i]; }
        bill_m4[i] = (used_units4[i] * current_rate) * (1 + tax) + fixed_charges;
        if (pay_stat3[i] == 0) { bill_m4[i] += bill_m3[i]; }
        bill_m5[i] = (used_units5[i] * current_rate) * (1 + tax) + fixed_charges;
        if (pay_stat4[i] == 0) { bill_m5[i] += bill_m4[i]; }
        bill_m6[i] = (used_units6[i] * current_rate) * (1 + tax) + fixed_charges;
        if (pay_stat5[i] == 0) { bill_m6[i] += bill_m5[i]; }
    }

    // Initialize remaining slots to 0
    for (int i = 10; i < Total_Consumers; i++)
    {
        Consumers_IdArray[i] = 0;
        meterNumber_Array[i] = 0;
        connection_TypeArray[i] = 1;
        active_StatusArray[i] = 1;
<<<<<<< HEAD
        prev1[i] = 0;
        prev2[i] = 0;
        prev3[i] = 0;
        prev4[i] = 0;
        prev5[i] = 0;
        prev6[i] = 0;
        curr1[i] = 0;
        curr2[i] = 0;
        curr3[i] = 0;
        curr4[i] = 0;
        curr5[i] = 0;
        curr6[i] = 0;
        used_units1[i] = 0;
        used_units2[i] = 0;
        used_units3[i] = 0;
        used_units4[i] = 0;
        used_units5[i] = 0;
        used_units6[i] = 0;
        bill_m1[i] = 0;
        bill_m2[i] = 0;
        bill_m3[i] = 0;
        bill_m4[i] = 0;
        bill_m5[i] = 0;
        bill_m6[i] = 0;
        pay_stat1[i] = 1;
        pay_stat2[i] = 1;
        pay_stat3[i] = 1;
        pay_stat4[i] = 1;
        pay_stat5[i] = 1;
        pay_stat6[i] = 1;
    }
    // CRUD Create, Read, Update, Delete
=======
        prev1[i] = 0; prev2[i] = 0; prev3[i] = 0; prev4[i] = 0; prev5[i] = 0; prev6[i] = 0;
        curr1[i] = 0; curr2[i] = 0; curr3[i] = 0; curr4[i] = 0; curr5[i] = 0; curr6[i] = 0;
        used_units1[i] = 0; used_units2[i] = 0; used_units3[i] = 0;
        used_units4[i] = 0; used_units5[i] = 0; used_units6[i] = 0;
        bill_m1[i] = 0; bill_m2[i] = 0; bill_m3[i] = 0;
        bill_m4[i] = 0; bill_m5[i] = 0; bill_m6[i] = 0;
        pay_stat1[i] = 1; pay_stat2[i] = 1; pay_stat3[i] = 1;
        pay_stat4[i] = 1; pay_stat5[i] = 1; pay_stat6[i] = 1;
    }

>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
    while (true)
    {
        system("cls");
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
<<<<<<< HEAD
                            // Show all Empty and Filled Slots
=======

>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
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
                            while (validIndex == false)
                            {
                                cout << "\nChoose an Index to Add/Update (0-29): ";
                                cin >> i;
                                if (i >= 0 && i < Total_Consumers) { validIndex = true; }
                                else { cout << "[!] Wrong Index! Try Again ( between 0-29 )."; }
                            }

                            int tempID;
                            bool validID = false;
                            while (validID == false)
                            {
                                cout << "Enter Unique Consumer ID: ";
                                cin >> tempID;
                                bool duplicate = false;
                                for (int j = 0; j < Total_Consumers; j++)
                                {
<<<<<<< HEAD
                                    if (Consumers_IdArray[j] == tempID && i != j)
                                    {
                                        duplicate = true;
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
=======
                                    if (Consumers_IdArray[j] == tempID && i != j) { duplicate = true; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                }
                                if (duplicate == true) { cout << "[!] Error: ID " << tempID << " Already Exist ...\n"; }
                                else { validID = true; Consumers_IdArray[i] = tempID; }
                            }
<<<<<<< HEAD
                            // others information input
=======

>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                            cout << "Enter Name: ";
                            cin.ignore();
                            getline(cin, Consumers_nameArray[i]);

                            cout << "Enter Address: ";
                            getline(cin, adress_Array[i]);

                            cout << "Enter Meter Number: ";
                            cin >> meterNumber_Array[i];
<<<<<<< HEAD
                            // Connection Type Validation Loop
=======

>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                            int cType;
                            bool validCType = false;
                            while (validCType == false)
                            {
                                cout << "Enter Connection Type (1=Domestic, 2=Commercial): ";
                                cin >> cType;
                                if (cType == 1 || cType == 2) { connection_TypeArray[i] = cType; validCType = true; }
                                else { cout << "[!] Just Enter 1 or 2.\n"; }
                            }
<<<<<<< HEAD
                            // Active Status Validation Loop
=======

>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                            int aStat;
                            bool validAStat = false;
                            while (validAStat == false)
                            {
                                cout << "Enter Status (1=Active, 0=Inactive): ";
                                cin >> aStat;
<<<<<<< HEAD
                                if (aStat == 1 || aStat == 0)
                                {
                                    active_StatusArray[i] = aStat;
                                    validAStat = true;
                                }
                                else
                                {
                                    cout << "[!] Just Enter 1 or 0.\n";
                                }
                            }

                            prev1[i] = 0;
                            prev2[i] = 0;
                            prev3[i] = 0;
                            prev4[i] = 0;
                            prev5[i] = 0;
                            prev6[i] = 0;
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
                            used_units1[i] = 0;
                            used_units2[i] = 0;
                            used_units3[i] = 0;
                            used_units4[i] = 0;
                            used_units5[i] = 0;
                            used_units6[i] = 0;
                            pay_stat1[i] = 1;
                            pay_stat2[i] = 1;
                            pay_stat3[i] = 1;
                            pay_stat4[i] = 1;
                            pay_stat5[i] = 1;
                            pay_stat6[i] = 1;
=======
                                if (aStat == 1 || aStat == 0) { active_StatusArray[i] = aStat; validAStat = true; }
                                else { cout << "[!] Just Enter 1 or 0.\n"; }
                            }

                            prev1[i] = 0; prev2[i] = 0; prev3[i] = 0;
                            prev4[i] = 0; prev5[i] = 0; prev6[i] = 0;
                            curr1[i] = 0; curr2[i] = 0; curr3[i] = 0;
                            curr4[i] = 0; curr5[i] = 0; curr6[i] = 0;
                            bill_m1[i] = 0; bill_m2[i] = 0; bill_m3[i] = 0;
                            bill_m4[i] = 0; bill_m5[i] = 0; bill_m6[i] = 0;
                            used_units1[i] = 0; used_units2[i] = 0; used_units3[i] = 0;
                            used_units4[i] = 0; used_units5[i] = 0; used_units6[i] = 0;
                            pay_stat1[i] = 1; pay_stat2[i] = 1; pay_stat3[i] = 1;
                            pay_stat4[i] = 1; pay_stat5[i] = 1; pay_stat6[i] = 1;
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631

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
                                if (Consumers_IdArray[i] != 0)
                                {
                                    cout << Consumers_IdArray[i] << "\t";
<<<<<<< HEAD
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
=======
                                    cout << Consumers_nameArray[i];
                                    if (Consumers_nameArray[i].length() < 8) { cout << "\t\t"; } else { cout << "\t"; }
                                    if (connection_TypeArray[i] == 1) { cout << "Domestic\t"; } else { cout << "Commercial\t"; }
                                    if (active_StatusArray[i] == 1) { cout << "Active  \t"; } else { cout << "Inactive\t"; }
                                    cout << bill_m6[i] << " PKR";
                                    if (bill_m6[i] < 1000) { cout << "\t\t"; } else { cout << "\t"; }
                                    if (pay_stat6[i] == 1) { cout << "PAID" << endl; } else { cout << "UNPAID" << endl; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
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
                                if (Consumers_IdArray[i] == searchId) { foundIndex = i; break; }
                            }

                            if (foundIndex != -1)
                            {
                                if (active_StatusArray[foundIndex] == 0)
                                {
                                    cout << "\n[Error] Inactive Consumer! Cannot enter readings.";
                                    cout << "\n\nPress any key to return...";
                                    getch();
                                }
                                else
                                {
<<<<<<< HEAD
                                    // --- Find the first month that has zero current reading ---
                                    int startMonth = 0; // 0 means all 6 months already filled
                                    if (curr1[foundIndex] == 0)
                                        startMonth = 1;
                                    else if (curr2[foundIndex] == 0)
                                        startMonth = 2;
                                    else if (curr3[foundIndex] == 0)
                                        startMonth = 3;
                                    else if (curr4[foundIndex] == 0)
                                        startMonth = 4;
                                    else if (curr5[foundIndex] == 0)
                                        startMonth = 5;
                                    else if (curr6[foundIndex] == 0)
                                        startMonth = 6;

                                    if (startMonth == 0)
=======
                                    if (curr1[foundIndex] != 0)
                                    {
                                        cout << "\n[!] WARNING: Readings already exist for " << Consumers_nameArray[foundIndex] << ".";
                                        cout << "\nEntering new readings will OVERWRITE all existing data.";
                                        cout << "\nAre you sure? (1=Yes, 0=No): ";
                                        int confirm;
                                        cin >> confirm;
                                        if (confirm != 1)
                                        {
                                            cout << "\n[Cancelled] No changes made.";
                                            getch();
                                            continue;
                                        }
                                    }

                                    cout << "\nConsumer: " << Consumers_nameArray[foundIndex] << endl;
                                    int tempCurr;
                                    bool monthFailed = false; // FIX Issue 6: track chain break

                                    // --- Month 1 ---
                                    cout << "\n--- Month 1 --- (Prev: " << prev1[foundIndex] << ")\n";
                                    cout << "Enter Current Reading: ";
                                    cin >> tempCurr;
                                    if (tempCurr >= prev1[foundIndex])
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                    {
                                        cout << "\n[Info] All 6 months readings already entered for ";
                                        cout << Consumers_nameArray[foundIndex] << ".";
                                        cout << "\nUse Option 4 to correct any existing reading.";
                                        cout << "\n\nPress any key to return...";
                                        getch();
                                    }
                                    else
                                    {
<<<<<<< HEAD
                                        cout << "\nConsumer: " << Consumers_nameArray[foundIndex] << endl;
                                        if (startMonth > 1)
                                            cout << "[Info] Months 1 to " << startMonth - 1 << " already entered. ";
                                        cout << "Starting from Month " << startMonth << ".\n";

                                        // Fix prevs: each month's prev = previous month's curr
                                        if (startMonth == 2)
                                            prev2[foundIndex] = curr1[foundIndex];
                                        else if (startMonth == 3)
                                            prev3[foundIndex] = curr2[foundIndex];
                                        else if (startMonth == 4)
                                            prev4[foundIndex] = curr3[foundIndex];
                                        else if (startMonth == 5)
                                            prev5[foundIndex] = curr4[foundIndex];
                                        else if (startMonth == 6)
                                            prev6[foundIndex] = curr5[foundIndex];

                                        int tempCurr;
                                        bool monthFailed = false;

                                        // MONTH 1
                                        if (startMonth <= 1)
=======
                                        cout << "[!] Error! Current cannot be less than previous. M1 set to prev value.\n";
                                        curr1[foundIndex] = prev1[foundIndex];
                                        monthFailed = true;
                                    }

                                    // --- Month 2 ---
                                    if (curr1[foundIndex] != 0 && monthFailed == false)
                                    {
                                        prev2[foundIndex] = curr1[foundIndex];
                                        cout << "\n--- Month 2 --- (Prev: " << prev2[foundIndex] << ")\n";
                                        cout << "Enter Current Reading: ";
                                        cin >> tempCurr;
                                        if (tempCurr >= prev2[foundIndex])
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                        {
                                            cout << "\n--- Month 1 --- (Prev: " << prev1[foundIndex] << ")\n";
                                            cout << "Enter Current Reading: ";
                                            cin >> tempCurr;
                                            if (tempCurr >= prev1[foundIndex])
                                                curr1[foundIndex] = tempCurr;
                                            else
                                            {
                                                cout << "[!] Error! Current cannot be less than previous. M1 skipped.\n";
                                                monthFailed = true;
                                            }
                                        }

                                        // MONTH 2
                                        if (startMonth <= 2 && monthFailed == false && curr1[foundIndex] != 0)
                                        {
                                            prev2[foundIndex] = curr1[foundIndex]; // always set from M1 curr
                                            cout << "\n--- Month 2 --- (Prev: " << prev2[foundIndex] << ")\n";
                                            cout << "Enter Current Reading: ";
                                            cin >> tempCurr;
                                            if (tempCurr >= prev2[foundIndex])
                                                curr2[foundIndex] = tempCurr;
                                            else
                                            {
                                                cout << "[!] Invalid! M2 rejected. Months 3-6 cannot be entered this session.\n";
                                                curr2[foundIndex] = 0;
                                                monthFailed = true;
                                            }
                                        }

                                        // MONTH 3
                                        if (startMonth <= 3 && monthFailed == false && curr2[foundIndex] != 0)
                                        {
                                            prev3[foundIndex] = curr2[foundIndex]; // always set from M2 curr
                                            cout << "\n--- Month 3 --- (Prev: " << prev3[foundIndex] << ")\n";
                                            cout << "Enter Current Reading: ";
                                            cin >> tempCurr;
                                            if (tempCurr >= prev3[foundIndex])
                                                curr3[foundIndex] = tempCurr;
                                            else
                                            {
                                                cout << "[!] Invalid! M3 rejected. Months 4-6 cannot be entered this session.\n";
                                                curr3[foundIndex] = 0;
                                                monthFailed = true;
                                            }
                                        }

                                        // MONTH 4
                                        if (startMonth <= 4 && monthFailed == false && curr3[foundIndex] != 0)
                                        {
                                            prev4[foundIndex] = curr3[foundIndex]; // always set from M3 curr
                                            cout << "\n--- Month 4 --- (Prev: " << prev4[foundIndex] << ")\n";
                                            cout << "Enter Current Reading: ";
                                            cin >> tempCurr;
                                            if (tempCurr >= prev4[foundIndex])
                                                curr4[foundIndex] = tempCurr;
                                            else
                                            {
                                                cout << "[!] Invalid! M4 rejected. Months 5-6 cannot be entered this session.\n";
                                                curr4[foundIndex] = 0;
                                                monthFailed = true;
                                            }
                                        }

                                        // MONTH 5
                                        if (startMonth <= 5 && monthFailed == false && curr4[foundIndex] != 0)
                                        {
                                            prev5[foundIndex] = curr4[foundIndex]; // always set from M4 curr
                                            cout << "\n--- Month 5 --- (Prev: " << prev5[foundIndex] << ")\n";
                                            cout << "Enter Current Reading: ";
                                            cin >> tempCurr;
                                            if (tempCurr >= prev5[foundIndex])
                                                curr5[foundIndex] = tempCurr;
                                            else
                                            {
                                                cout << "[!] Invalid! M5 rejected. Month 6 cannot be entered this session.\n";
                                                curr5[foundIndex] = 0;
                                                monthFailed = true;
                                            }
                                        }

                                        // MONTH 6
                                        if (startMonth <= 6 && monthFailed == false && curr5[foundIndex] != 0)
                                        {
                                            prev6[foundIndex] = curr5[foundIndex]; // always set from M5 curr
                                            cout << "\n--- Month 6 --- (Prev: " << prev6[foundIndex] << ")\n";
                                            cout << "Enter Current Reading: ";
                                            cin >> tempCurr;
                                            if (tempCurr >= prev6[foundIndex])
                                                curr6[foundIndex] = tempCurr;
                                            else
                                            {
                                                cout << "[!] Invalid! M6 set to 0.\n";
                                                curr6[foundIndex] = 0;
                                            }
                                        } // --- BILL RECALCULATION (only for entered months) ---
                                        float rate;
                                        if (connection_TypeArray[foundIndex] == 1)
                                            rate = domestic_rate;
                                        else
                                            rate = commercial_rate;

                                        if (curr1[foundIndex] != 0)
                                        {
                                            used_units1[foundIndex] = curr1[foundIndex] - prev1[foundIndex];
                                            bill_m1[foundIndex] = (used_units1[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                        }
                                        if (curr2[foundIndex] != 0)
                                        {
                                            used_units2[foundIndex] = curr2[foundIndex] - prev2[foundIndex];
                                            bill_m2[foundIndex] = (used_units2[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                            if (pay_stat1[foundIndex] == 0)
                                                bill_m2[foundIndex] += bill_m1[foundIndex];
                                        }
                                        if (curr3[foundIndex] != 0)
                                        {
                                            used_units3[foundIndex] = curr3[foundIndex] - prev3[foundIndex];
                                            bill_m3[foundIndex] = (used_units3[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                            if (pay_stat2[foundIndex] == 0)
                                                bill_m3[foundIndex] += bill_m2[foundIndex];
                                        }
                                        if (curr4[foundIndex] != 0)
                                        {
                                            used_units4[foundIndex] = curr4[foundIndex] - prev4[foundIndex];
                                            bill_m4[foundIndex] = (used_units4[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                            if (pay_stat3[foundIndex] == 0)
                                                bill_m4[foundIndex] += bill_m3[foundIndex];
                                        }
                                        if (curr5[foundIndex] != 0)
                                        {
                                            used_units5[foundIndex] = curr5[foundIndex] - prev5[foundIndex];
                                            bill_m5[foundIndex] = (used_units5[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                            if (pay_stat4[foundIndex] == 0)
                                                bill_m5[foundIndex] += bill_m4[foundIndex];
                                        }
                                        if (curr6[foundIndex] != 0)
                                        {
                                            used_units6[foundIndex] = curr6[foundIndex] - prev6[foundIndex];
                                            bill_m6[foundIndex] = (used_units6[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                            if (pay_stat5[foundIndex] == 0)
                                                bill_m6[foundIndex] += bill_m5[foundIndex];
                                        }

                                        if (monthFailed == true)
                                        {
                                            cout << "\n[Warning] Some months not entered due to invalid readings.";
                                            cout << "\n[Info] Bills calculated only for successfully entered months.";
                                        }
                                        else
<<<<<<< HEAD
                                            cout << "\n[Success] Readings recorded and bills updated correctly!";

                                        cout << "\n\nPress any key to return...";
                                        getch();
                                    }
=======
                                        {
                                            // FIX Issue 6: Inform user that chain has stopped
                                            cout << "[!] Invalid! M2 reading rejected. Months 3-6 cannot be entered this session.\n";
                                            cout << "[!] Please use Option 3 again to re-enter from this point.\n";
                                            curr2[foundIndex] = 0;
                                            monthFailed = true;
                                        }
                                    }

                                    // --- Month 3 ---
                                    if (curr2[foundIndex] != 0 && monthFailed == false)
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
                                            cout << "[!] Invalid! M3 reading rejected. Months 4-6 cannot be entered this session.\n";
                                            cout << "[!] Please use Option 3 again to re-enter from this point.\n";
                                            curr3[foundIndex] = 0;
                                            monthFailed = true;
                                        }
                                    }

                                    // --- Month 4 ---
                                    if (curr3[foundIndex] != 0 && monthFailed == false)
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
                                            cout << "[!] Invalid! M4 reading rejected. Months 5-6 cannot be entered this session.\n";
                                            cout << "[!] Please use Option 3 again to re-enter from this point.\n";
                                            curr4[foundIndex] = 0;
                                            monthFailed = true;
                                        }
                                    }

                                    // --- Month 5 ---
                                    if (curr4[foundIndex] != 0 && monthFailed == false)
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
                                            cout << "[!] Invalid! M5 reading rejected. Month 6 cannot be entered this session.\n";
                                            cout << "[!] Please use Option 3 again to re-enter from this point.\n";
                                            curr5[foundIndex] = 0;
                                            monthFailed = true;
                                        }
                                    }

                                    // --- Month 6 ---
                                    if (curr5[foundIndex] != 0 && monthFailed == false)
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

                                    // --- CALCULATION (only for entered months) ---
                                    float rate;
                                    if (connection_TypeArray[foundIndex] == 1) { rate = domestic_rate; }
                                    else { rate = commercial_rate; }

                                    if (curr1[foundIndex] != 0)
                                    {
                                        used_units1[foundIndex] = curr1[foundIndex] - prev1[foundIndex];
                                        bill_m1[foundIndex] = (used_units1[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                    }
                                    if (curr2[foundIndex] != 0)
                                    {
                                        used_units2[foundIndex] = curr2[foundIndex] - prev2[foundIndex];
                                        bill_m2[foundIndex] = (used_units2[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat1[foundIndex] == 0) { bill_m2[foundIndex] += bill_m1[foundIndex]; }
                                    }
                                    if (curr3[foundIndex] != 0)
                                    {
                                        used_units3[foundIndex] = curr3[foundIndex] - prev3[foundIndex];
                                        bill_m3[foundIndex] = (used_units3[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat2[foundIndex] == 0) { bill_m3[foundIndex] += bill_m2[foundIndex]; }
                                    }
                                    if (curr4[foundIndex] != 0)
                                    {
                                        used_units4[foundIndex] = curr4[foundIndex] - prev4[foundIndex];
                                        bill_m4[foundIndex] = (used_units4[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat3[foundIndex] == 0) { bill_m4[foundIndex] += bill_m3[foundIndex]; }
                                    }
                                    if (curr5[foundIndex] != 0)
                                    {
                                        used_units5[foundIndex] = curr5[foundIndex] - prev5[foundIndex];
                                        bill_m5[foundIndex] = (used_units5[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat4[foundIndex] == 0) { bill_m5[foundIndex] += bill_m4[foundIndex]; }
                                    }
                                    if (curr6[foundIndex] != 0)
                                    {
                                        used_units6[foundIndex] = curr6[foundIndex] - prev6[foundIndex];
                                        bill_m6[foundIndex] = (used_units6[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                        if (pay_stat5[foundIndex] == 0) { bill_m6[foundIndex] += bill_m5[foundIndex]; }
                                    }

                                    if (monthFailed == true)
                                    {
                                        cout << "\n[Warning] Some months were not entered due to invalid readings.";
                                        cout << "\n[Info] Bills calculated only for successfully entered months.";
                                    }
                                    else
                                    {
                                        cout << "\n[Success] Readings recorded and bills updated correctly!";
                                    }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                }
                            }
                            else
                            {
                                cout << "\n[!] Consumer ID not found.";
                                cout << "\n\nPress any key to return...";
                                getch();
                            }
                        }
                        // Update / Correct Reading
                        // FIX Issue 1 & 2: Full cascading prev update + only recalculate entered months
                        else if (managerOption == "4")
                        {
                            system("cls");
                            int searchId, foundIndex = -1;
                            cout << "--- Update / Correct Monthly Readings ---\n";
                            cout << "Enter Consumer ID: ";
                            cin >> searchId;

                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] == searchId) { foundIndex = i; break; }
                            }

                            if (foundIndex != -1)
                            {
                                int monthChoice;
                                cout << "Consumer Found: " << Consumers_nameArray[foundIndex] << endl;
                                cout << "Enter Month Number to Correct (1-6): ";
                                cin >> monthChoice;

                                if (monthChoice >= 1 && monthChoice <= 6)
                                {
<<<<<<< HEAD
                                    // Check Record Exist or not
                                    bool exists = true;
                                    if (monthChoice == 1 && curr1[foundIndex] == 0)
                                    {
                                        exists = false;
                                    }
                                    else if (monthChoice == 2 && curr2[foundIndex] == 0)
                                    {
                                        exists = false;
                                    }
                                    else if (monthChoice == 3 && curr3[foundIndex] == 0)
                                    {
                                        exists = false;
                                    }
                                    else if (monthChoice == 4 && curr4[foundIndex] == 0)
                                    {
                                        exists = false;
                                    }
                                    else if (monthChoice == 5 && curr5[foundIndex] == 0)
                                    {
                                        exists = false;
                                    }
                                    else if (monthChoice == 6 && curr6[foundIndex] == 0)
                                    {
                                        exists = false;
                                    }
=======
                                    bool exists = true;
                                    if (monthChoice == 1 && curr1[foundIndex] == 0) { exists = false; }
                                    else if (monthChoice == 2 && curr2[foundIndex] == 0) { exists = false; }
                                    else if (monthChoice == 3 && curr3[foundIndex] == 0) { exists = false; }
                                    else if (monthChoice == 4 && curr4[foundIndex] == 0) { exists = false; }
                                    else if (monthChoice == 5 && curr5[foundIndex] == 0) { exists = false; }
                                    else if (monthChoice == 6 && curr6[foundIndex] == 0) { exists = false; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631

                                    if (exists == false)
                                    {
                                        cout << "\n[!] Error: Record for Month " << monthChoice << " has not been entered yet.";
                                        cout << "\nPlease use Option 3 to enter a new record.";
                                    }
                                    else
                                    {
                                        int correctedReading;
                                        cout << "Current saved reading for Month " << monthChoice << " is being updated.\n";
                                        if (monthChoice == 1)
                                        {
                                            cout << "Previous Current reading is :" << curr1[foundIndex] << endl;
                                        }
                                        else if (monthChoice == 2)
                                        {
                                            cout << "Previous Current reading is :" << curr2[foundIndex] << endl;
                                        }
                                        else if (monthChoice == 3)
                                        {
                                            cout << "Previous Current reading is :" << curr3[foundIndex] << endl;
                                        }
                                        else if (monthChoice == 4)
                                        {
                                            cout << "Previous Current reading is :" << curr4[foundIndex] << endl;
                                        }
                                        else if (monthChoice == 5)
                                        {
                                            cout << "Previous Current reading is :" << curr5[foundIndex] << endl;
                                        }
                                        else
                                        {
                                            cout << "Previous Current reading is :" << curr6[foundIndex] << endl;
                                        }

                                        cout << "Enter Corrected Reading: ";
                                        cin >> correctedReading;

                                        if (correctedReading >= 0)
                                        {
                                            // FIX Issue 1: Full cascading prev update for ALL subsequent months
                                            if (monthChoice == 1)
                                            {
                                                curr1[foundIndex] = correctedReading;
                                                prev2[foundIndex] = curr1[foundIndex]; // cascade to M2
                                                // cascade forward: M2 prev changed so M3 prev must also update
<<<<<<< HEAD
                                                if (curr2[foundIndex] != 0)
                                                {
                                                    prev3[foundIndex] = curr2[foundIndex];
                                                }
                                                if (curr3[foundIndex] != 0)
                                                {
                                                    prev4[foundIndex] = curr3[foundIndex];
                                                }
                                                if (curr4[foundIndex] != 0)
                                                {
                                                    prev5[foundIndex] = curr4[foundIndex];
                                                }
                                                if (curr5[foundIndex] != 0)
                                                {
                                                    prev6[foundIndex] = curr5[foundIndex];
                                                }
=======
                                                if (curr2[foundIndex] != 0) { prev3[foundIndex] = curr2[foundIndex]; }
                                                if (curr3[foundIndex] != 0) { prev4[foundIndex] = curr3[foundIndex]; }
                                                if (curr4[foundIndex] != 0) { prev5[foundIndex] = curr4[foundIndex]; }
                                                if (curr5[foundIndex] != 0) { prev6[foundIndex] = curr5[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            else if (monthChoice == 2)
                                            {
                                                curr2[foundIndex] = correctedReading;
                                                prev3[foundIndex] = curr2[foundIndex];
<<<<<<< HEAD
                                                if (curr3[foundIndex] != 0)
                                                {
                                                    prev4[foundIndex] = curr3[foundIndex];
                                                }
                                                if (curr4[foundIndex] != 0)
                                                {
                                                    prev5[foundIndex] = curr4[foundIndex];
                                                }
                                                if (curr5[foundIndex] != 0)
                                                {
                                                    prev6[foundIndex] = curr5[foundIndex];
                                                }
=======
                                                if (curr3[foundIndex] != 0) { prev4[foundIndex] = curr3[foundIndex]; }
                                                if (curr4[foundIndex] != 0) { prev5[foundIndex] = curr4[foundIndex]; }
                                                if (curr5[foundIndex] != 0) { prev6[foundIndex] = curr5[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            else if (monthChoice == 3)
                                            {
                                                curr3[foundIndex] = correctedReading;
                                                prev4[foundIndex] = curr3[foundIndex];
<<<<<<< HEAD
                                                if (curr4[foundIndex] != 0)
                                                {
                                                    prev5[foundIndex] = curr4[foundIndex];
                                                }
                                                if (curr5[foundIndex] != 0)
                                                {
                                                    prev6[foundIndex] = curr5[foundIndex];
                                                }
=======
                                                if (curr4[foundIndex] != 0) { prev5[foundIndex] = curr4[foundIndex]; }
                                                if (curr5[foundIndex] != 0) { prev6[foundIndex] = curr5[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            else if (monthChoice == 4)
                                            {
                                                curr4[foundIndex] = correctedReading;
                                                prev5[foundIndex] = curr4[foundIndex];
<<<<<<< HEAD
                                                if (curr5[foundIndex] != 0)
                                                {
                                                    prev6[foundIndex] = curr5[foundIndex];
                                                }
=======
                                                if (curr5[foundIndex] != 0) { prev6[foundIndex] = curr5[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            else if (monthChoice == 5)
                                            {
                                                curr5[foundIndex] = correctedReading;
                                                prev6[foundIndex] = curr5[foundIndex];
                                            }
                                            else if (monthChoice == 6)
                                            {
                                                curr6[foundIndex] = correctedReading;
                                            }

                                            float rate;
                                            if (connection_TypeArray[foundIndex] == 1) { rate = domestic_rate; }
                                            else { rate = commercial_rate; }

                                            // FIX Issue 2: Only recalculate months that have been entered (curr != 0)
                                            if (curr1[foundIndex] != 0)
                                            {
                                                used_units1[foundIndex] = curr1[foundIndex] - prev1[foundIndex];
                                                bill_m1[foundIndex] = (used_units1[foundIndex] * rate) * (1 + tax) + fixed_charges;
                                            }
                                            if (curr2[foundIndex] != 0)
                                            {
                                                used_units2[foundIndex] = curr2[foundIndex] - prev2[foundIndex];
                                                bill_m2[foundIndex] = (used_units2[foundIndex] * rate) * (1 + tax) + fixed_charges;
<<<<<<< HEAD
                                                if (pay_stat1[foundIndex] == 0)
                                                {
                                                    bill_m2[foundIndex] = bill_m2[foundIndex] + bill_m1[foundIndex];
                                                }
=======
                                                if (pay_stat1[foundIndex] == 0) { bill_m2[foundIndex] = bill_m2[foundIndex] + bill_m1[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            if (curr3[foundIndex] != 0)
                                            {
                                                used_units3[foundIndex] = curr3[foundIndex] - prev3[foundIndex];
                                                bill_m3[foundIndex] = (used_units3[foundIndex] * rate) * (1 + tax) + fixed_charges;
<<<<<<< HEAD
                                                if (pay_stat2[foundIndex] == 0)
                                                {
                                                    bill_m3[foundIndex] = bill_m3[foundIndex] + bill_m2[foundIndex];
                                                }
=======
                                                if (pay_stat2[foundIndex] == 0) { bill_m3[foundIndex] = bill_m3[foundIndex] + bill_m2[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            if (curr4[foundIndex] != 0)
                                            {
                                                used_units4[foundIndex] = curr4[foundIndex] - prev4[foundIndex];
                                                bill_m4[foundIndex] = (used_units4[foundIndex] * rate) * (1 + tax) + fixed_charges;
<<<<<<< HEAD
                                                if (pay_stat3[foundIndex] == 0)
                                                {
                                                    bill_m4[foundIndex] = bill_m4[foundIndex] + bill_m3[foundIndex];
                                                }
=======
                                                if (pay_stat3[foundIndex] == 0) { bill_m4[foundIndex] = bill_m4[foundIndex] + bill_m3[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            if (curr5[foundIndex] != 0)
                                            {
                                                used_units5[foundIndex] = curr5[foundIndex] - prev5[foundIndex];
                                                bill_m5[foundIndex] = (used_units5[foundIndex] * rate) * (1 + tax) + fixed_charges;
<<<<<<< HEAD
                                                if (pay_stat4[foundIndex] == 0)
                                                {
                                                    bill_m5[foundIndex] = bill_m5[foundIndex] + bill_m4[foundIndex];
                                                }
=======
                                                if (pay_stat4[foundIndex] == 0) { bill_m5[foundIndex] = bill_m5[foundIndex] + bill_m4[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            if (curr6[foundIndex] != 0)
                                            {
                                                used_units6[foundIndex] = curr6[foundIndex] - prev6[foundIndex];
                                                bill_m6[foundIndex] = (used_units6[foundIndex] * rate) * (1 + tax) + fixed_charges;
<<<<<<< HEAD
                                                if (pay_stat5[foundIndex] == 0)
                                                {
                                                    bill_m6[foundIndex] = bill_m6[foundIndex] + bill_m5[foundIndex];
                                                }
=======
                                                if (pay_stat5[foundIndex] == 0) { bill_m6[foundIndex] = bill_m6[foundIndex] + bill_m5[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
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
                        // FIX Issue 3: Recalculate bills only for entered months to avoid fake 500 PKR bills
                        else if (managerOption == "5")
                        {
                            system("cls");
                            int searchId, foundIndex = -1;
                            cout << "====================================================\n";
                            cout << "--- Mark Bill Paid / Unpaid (Cascading System) ---\n";
                            cout << "====================================================\n";
                            cout << "Enter Consumer ID: ";
                            cin >> searchId;

                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] == searchId) { foundIndex = i; break; }
                            }

                            if (foundIndex != -1)
                            {
                                int monthChoice;
                                cout << "\nConsumer Found: " << Consumers_nameArray[foundIndex] << endl;
                                cout << "Enter Month Number (1-6) to update payment: ";
                                cin >> monthChoice;

                                if (monthChoice >= 1 && monthChoice <= 6)
                                {
                                    // FIX Issue 3: Prevent marking a month that has no readings
                                    bool hasReading = false;
<<<<<<< HEAD
                                    if (monthChoice == 1 && curr1[foundIndex] != 0)
                                    {
                                        hasReading = true;
                                    }
                                    else if (monthChoice == 2 && curr2[foundIndex] != 0)
                                    {
                                        hasReading = true;
                                    }
                                    else if (monthChoice == 3 && curr3[foundIndex] != 0)
                                    {
                                        hasReading = true;
                                    }
                                    else if (monthChoice == 4 && curr4[foundIndex] != 0)
                                    {
                                        hasReading = true;
                                    }
                                    else if (monthChoice == 5 && curr5[foundIndex] != 0)
                                    {
                                        hasReading = true;
                                    }
                                    else if (monthChoice == 6 && curr6[foundIndex] != 0)
                                    {
                                        hasReading = true;
                                    }

                                    if (hasReading == false)
                                    {
=======
                                    if (monthChoice == 1 && curr1[foundIndex] != 0) { hasReading = true; }
                                    else if (monthChoice == 2 && curr2[foundIndex] != 0) { hasReading = true; }
                                    else if (monthChoice == 3 && curr3[foundIndex] != 0) { hasReading = true; }
                                    else if (monthChoice == 4 && curr4[foundIndex] != 0) { hasReading = true; }
                                    else if (monthChoice == 5 && curr5[foundIndex] != 0) { hasReading = true; }
                                    else if (monthChoice == 6 && curr6[foundIndex] != 0) { hasReading = true; }

                                    if (hasReading == false)
                                    {
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                        cout << "\n[Error] Month " << monthChoice << " has no readings entered yet. Cannot mark payment status.";
                                    }
                                    else
                                    {
                                        int newStatus;
                                        cout << "Enter New Status (1 for PAID, 0 for UNPAID): ";
                                        cin >> newStatus;

                                        if (newStatus == 1 || newStatus == 0)
                                        {
<<<<<<< HEAD
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
=======
                                            if (monthChoice == 1) { pay_stat1[foundIndex] = newStatus; }
                                            else if (monthChoice == 2) { pay_stat2[foundIndex] = newStatus; }
                                            else if (monthChoice == 3) { pay_stat3[foundIndex] = newStatus; }
                                            else if (monthChoice == 4) { pay_stat4[foundIndex] = newStatus; }
                                            else if (monthChoice == 5) { pay_stat5[foundIndex] = newStatus; }
                                            else if (monthChoice == 6) { pay_stat6[foundIndex] = newStatus; }

                                            if (newStatus == 1)
                                            {
                                                if (monthChoice >= 2) { pay_stat1[foundIndex] = 1; }
                                                if (monthChoice >= 3) { pay_stat2[foundIndex] = 1; }
                                                if (monthChoice >= 4) { pay_stat3[foundIndex] = 1; }
                                                if (monthChoice >= 5) { pay_stat4[foundIndex] = 1; }
                                                if (monthChoice >= 6) { pay_stat5[foundIndex] = 1; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                                cout << "\n[System Notice] All previous months marked as PAID automatically.";
                                            }

                                            float rate;
<<<<<<< HEAD
                                            if (connection_TypeArray[foundIndex] == 1)
                                            {
                                                rate = domestic_rate;
                                            }
                                            else
                                            {
                                                rate = commercial_rate;
                                            }
=======
                                            if (connection_TypeArray[foundIndex] == 1) { rate = domestic_rate; }
                                            else { rate = commercial_rate; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631

                                            // FIX Issue 3: Only recalculate bills for months with actual readings
                                            if (curr1[foundIndex] != 0)
                                            {
                                                bill_m1[foundIndex] = ((curr1[foundIndex] - prev1[foundIndex]) * rate) * (1 + tax) + fixed_charges;
                                            }
                                            if (curr2[foundIndex] != 0)
                                            {
                                                bill_m2[foundIndex] = ((curr2[foundIndex] - prev2[foundIndex]) * rate) * (1 + tax) + fixed_charges;
<<<<<<< HEAD
                                                if (pay_stat1[foundIndex] == 0)
                                                {
                                                    bill_m2[foundIndex] = bill_m2[foundIndex] + bill_m1[foundIndex];
                                                }
=======
                                                if (pay_stat1[foundIndex] == 0) { bill_m2[foundIndex] = bill_m2[foundIndex] + bill_m1[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            if (curr3[foundIndex] != 0)
                                            {
                                                bill_m3[foundIndex] = ((curr3[foundIndex] - prev3[foundIndex]) * rate) * (1 + tax) + fixed_charges;
<<<<<<< HEAD
                                                if (pay_stat2[foundIndex] == 0)
                                                {
                                                    bill_m3[foundIndex] = bill_m3[foundIndex] + bill_m2[foundIndex];
                                                }
=======
                                                if (pay_stat2[foundIndex] == 0) { bill_m3[foundIndex] = bill_m3[foundIndex] + bill_m2[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            if (curr4[foundIndex] != 0)
                                            {
                                                bill_m4[foundIndex] = ((curr4[foundIndex] - prev4[foundIndex]) * rate) * (1 + tax) + fixed_charges;
<<<<<<< HEAD
                                                if (pay_stat3[foundIndex] == 0)
                                                {
                                                    bill_m4[foundIndex] = bill_m4[foundIndex] + bill_m3[foundIndex];
                                                }
=======
                                                if (pay_stat3[foundIndex] == 0) { bill_m4[foundIndex] = bill_m4[foundIndex] + bill_m3[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            if (curr5[foundIndex] != 0)
                                            {
                                                bill_m5[foundIndex] = ((curr5[foundIndex] - prev5[foundIndex]) * rate) * (1 + tax) + fixed_charges;
<<<<<<< HEAD
                                                if (pay_stat4[foundIndex] == 0)
                                                {
                                                    bill_m5[foundIndex] = bill_m5[foundIndex] + bill_m4[foundIndex];
                                                }
=======
                                                if (pay_stat4[foundIndex] == 0) { bill_m5[foundIndex] = bill_m5[foundIndex] + bill_m4[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                            if (curr6[foundIndex] != 0)
                                            {
                                                bill_m6[foundIndex] = ((curr6[foundIndex] - prev6[foundIndex]) * rate) * (1 + tax) + fixed_charges;
<<<<<<< HEAD
                                                if (pay_stat5[foundIndex] == 0)
                                                {
                                                    bill_m6[foundIndex] = bill_m6[foundIndex] + bill_m5[foundIndex];
                                                }
=======
                                                if (pay_stat5[foundIndex] == 0) { bill_m6[foundIndex] = bill_m6[foundIndex] + bill_m5[foundIndex]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }

                                            cout << "\n[Success] Status updated and all arrears recalculated!";
                                        }
                                        else
                                        {
                                            cout << "\n[Error] Invalid Status!";
                                        }
                                    }
                                }
                                else
                                {
                                    cout << "\n[Error] Invalid Month! Please enter a value between 1 and 6.";
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
                                if (Consumers_IdArray[i] == searchId) { foundIndex = i; break; }
                            }

                            if (foundIndex != -1)
                            {
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

                                cout << "M1\t" << prev1[foundIndex] << "\t\t" << curr1[foundIndex] << "\t\t" << used_units1[foundIndex] << "\t\t" << bill_m1[foundIndex] << "\t\t";
<<<<<<< HEAD
                                if (pay_stat1[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
                                cout << endl;

                                cout << "M2\t" << prev2[foundIndex] << "\t\t" << curr2[foundIndex] << "\t\t" << used_units2[foundIndex] << "\t\t" << bill_m2[foundIndex] << "\t\t";
                                if (pay_stat2[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
                                cout << endl;

                                cout << "M3\t" << prev3[foundIndex] << "\t\t" << curr3[foundIndex] << "\t\t" << used_units3[foundIndex] << "\t\t" << bill_m3[foundIndex] << "\t\t";
                                if (pay_stat3[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
                                cout << endl;

                                cout << "M4\t" << prev4[foundIndex] << "\t\t" << curr4[foundIndex] << "\t\t" << used_units4[foundIndex] << "\t\t" << bill_m4[foundIndex] << "\t\t";
                                if (pay_stat4[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
                                cout << endl;

                                cout << "M5\t" << prev5[foundIndex] << "\t\t" << curr5[foundIndex] << "\t\t" << used_units5[foundIndex] << "\t\t" << bill_m5[foundIndex] << "\t\t";
                                if (pay_stat5[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
                                cout << endl;

                                cout << "M6\t" << prev6[foundIndex] << "\t\t" << curr6[foundIndex] << "\t\t" << used_units6[foundIndex] << "\t\t" << bill_m6[foundIndex] << "\t\t";
                                if (pay_stat6[foundIndex] == 1)
                                {
                                    cout << "Paid";
                                }
                                else
                                {
                                    cout << "Unpaid";
                                }
=======
                                if (pay_stat1[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
                                cout << endl;

                                cout << "M2\t" << prev2[foundIndex] << "\t\t" << curr2[foundIndex] << "\t\t" << used_units2[foundIndex] << "\t\t" << bill_m2[foundIndex] << "\t\t";
                                if (pay_stat2[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
                                cout << endl;

                                cout << "M3\t" << prev3[foundIndex] << "\t\t" << curr3[foundIndex] << "\t\t" << used_units3[foundIndex] << "\t\t" << bill_m3[foundIndex] << "\t\t";
                                if (pay_stat3[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
                                cout << endl;

                                cout << "M4\t" << prev4[foundIndex] << "\t\t" << curr4[foundIndex] << "\t\t" << used_units4[foundIndex] << "\t\t" << bill_m4[foundIndex] << "\t\t";
                                if (pay_stat4[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
                                cout << endl;

                                cout << "M5\t" << prev5[foundIndex] << "\t\t" << curr5[foundIndex] << "\t\t" << used_units5[foundIndex] << "\t\t" << bill_m5[foundIndex] << "\t\t";
                                if (pay_stat5[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
                                cout << endl;

                                cout << "M6\t" << prev6[foundIndex] << "\t\t" << curr6[foundIndex] << "\t\t" << used_units6[foundIndex] << "\t\t" << bill_m6[foundIndex] << "\t\t";
                                if (pay_stat6[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                cout << endl;

                                cout << "-----------------------------------------------------------------------------\n";
                            }
                            else
                            {
                                cout << "\n[!] Error: Consumer ID " << searchId << " not found.";
                            }

                            cout << "\n\nPress any key to return...";
                            getch();
                        }
                        // Search / Listing
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
                            // Search / Listing Menu
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
                                        cout << "Type: ";
<<<<<<< HEAD
                                        if (connection_TypeArray[i] == 1)
                                        {
                                            cout << "Domestic" << endl;
                                        }
                                        else
                                        {
                                            cout << "Commercial" << endl;
                                        }
=======
                                        if (connection_TypeArray[i] == 1) { cout << "Domestic" << endl; } else { cout << "Commercial" << endl; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                        cout << "Account Status: ";
                                        if (active_StatusArray[i] == 1) { cout << "Active" << endl; } else { cout << "Inactive" << endl; }

                                        int lastEnteredMonth = 0;
                                        int lastUnits = 0;
                                        float lastBill = 0;
                                        int lastStat = 1;
                                        if (curr1[i] != 0) { lastEnteredMonth = 1; lastUnits = used_units1[i]; lastBill = bill_m1[i]; lastStat = pay_stat1[i]; }
                                        if (curr2[i] != 0) { lastEnteredMonth = 2; lastUnits = used_units2[i]; lastBill = bill_m2[i]; lastStat = pay_stat2[i]; }
                                        if (curr3[i] != 0) { lastEnteredMonth = 3; lastUnits = used_units3[i]; lastBill = bill_m3[i]; lastStat = pay_stat3[i]; }
                                        if (curr4[i] != 0) { lastEnteredMonth = 4; lastUnits = used_units4[i]; lastBill = bill_m4[i]; lastStat = pay_stat4[i]; }
                                        if (curr5[i] != 0) { lastEnteredMonth = 5; lastUnits = used_units5[i]; lastBill = bill_m5[i]; lastStat = pay_stat5[i]; }
                                        if (curr6[i] != 0) { lastEnteredMonth = 6; lastUnits = used_units6[i]; lastBill = bill_m6[i]; lastStat = pay_stat6[i]; }

                                        if (lastEnteredMonth == 0)
                                        {
                                            cout << "--- Billing Summary ---\n";
                                            cout << "No readings entered yet.\n";
                                        }
                                        else
                                        {
                                            cout << "--- Billing Summary (Month " << lastEnteredMonth << ") ---\n";
                                            cout << "Units Used: " << lastUnits << " | Total Bill: " << lastBill << " PKR" << endl;
                                            cout << "Payment: ";
                                            if (lastStat == 1) { cout << "Paid" << endl; } else { cout << "UNPAID" << endl; }
                                        }
<<<<<<< HEAD

                                        int lastEnteredMonth = 0;
                                        int lastUnits = 0;
                                        float lastBill = 0;
                                        int lastStat = 1;
                                        if (curr1[i] != 0)
                                        {
                                            lastEnteredMonth = 1;
                                            lastUnits = used_units1[i];
                                            lastBill = bill_m1[i];
                                            lastStat = pay_stat1[i];
                                        }
                                        if (curr2[i] != 0)
                                        {
                                            lastEnteredMonth = 2;
                                            lastUnits = used_units2[i];
                                            lastBill = bill_m2[i];
                                            lastStat = pay_stat2[i];
                                        }
                                        if (curr3[i] != 0)
                                        {
                                            lastEnteredMonth = 3;
                                            lastUnits = used_units3[i];
                                            lastBill = bill_m3[i];
                                            lastStat = pay_stat3[i];
                                        }
                                        if (curr4[i] != 0)
                                        {
                                            lastEnteredMonth = 4;
                                            lastUnits = used_units4[i];
                                            lastBill = bill_m4[i];
                                            lastStat = pay_stat4[i];
                                        }
                                        if (curr5[i] != 0)
                                        {
                                            lastEnteredMonth = 5;
                                            lastUnits = used_units5[i];
                                            lastBill = bill_m5[i];
                                            lastStat = pay_stat5[i];
                                        }
                                        if (curr6[i] != 0)
                                        {
                                            lastEnteredMonth = 6;
                                            lastUnits = used_units6[i];
                                            lastBill = bill_m6[i];
                                            lastStat = pay_stat6[i];
                                        }

                                        if (lastEnteredMonth == 0)
                                        {
                                            cout << "--- Billing Summary ---\n";
                                            cout << "No readings entered yet.\n";
                                        }
                                        else
                                        {
                                            cout << "--- Billing Summary (Month " << lastEnteredMonth << ") ---\n";
                                            cout << "Units Used: " << lastUnits << " | Total Bill: " << lastBill << " PKR" << endl;
                                            cout << "Payment: ";
                                            if (lastStat == 1)
                                            {
                                                cout << "Paid" << endl;
                                            }
                                            else
                                            {
                                                cout << "UNPAID" << endl;
                                            }
                                        }
=======
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                        found = true;
                                        break;
                                    }
                                }
                                if (found == false) { cout << "\n[!] Error: Consumer ID " << sid << " not found."; }
                            }
<<<<<<< HEAD
                            // Consumer's Full Summary
=======
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
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
                                        // FIX Issue 4: Only list if readings exist for that month
<<<<<<< HEAD
                                        if (m == 1 && curr1[i] != 0 && pay_stat1[i] == 0)
                                        {
                                            isUnpaid = true;
                                            amt = bill_m1[i];
                                        }
                                        else if (m == 2 && curr2[i] != 0 && pay_stat2[i] == 0)
                                        {
                                            isUnpaid = true;
                                            amt = bill_m2[i];
                                        }
                                        else if (m == 3 && curr3[i] != 0 && pay_stat3[i] == 0)
                                        {
                                            isUnpaid = true;
                                            amt = bill_m3[i];
                                        }
                                        else if (m == 4 && curr4[i] != 0 && pay_stat4[i] == 0)
                                        {
                                            isUnpaid = true;
                                            amt = bill_m4[i];
                                        }
                                        else if (m == 5 && curr5[i] != 0 && pay_stat5[i] == 0)
                                        {
                                            isUnpaid = true;
                                            amt = bill_m5[i];
                                        }
                                        else if (m == 6 && curr6[i] != 0 && pay_stat6[i] == 0)
                                        {
                                            isUnpaid = true;
                                            amt = bill_m6[i];
                                        }
=======
                                        if (m == 1 && curr1[i] != 0 && pay_stat1[i] == 0) { isUnpaid = true; amt = bill_m1[i]; }
                                        else if (m == 2 && curr2[i] != 0 && pay_stat2[i] == 0) { isUnpaid = true; amt = bill_m2[i]; }
                                        else if (m == 3 && curr3[i] != 0 && pay_stat3[i] == 0) { isUnpaid = true; amt = bill_m3[i]; }
                                        else if (m == 4 && curr4[i] != 0 && pay_stat4[i] == 0) { isUnpaid = true; amt = bill_m4[i]; }
                                        else if (m == 5 && curr5[i] != 0 && pay_stat5[i] == 0) { isUnpaid = true; amt = bill_m5[i]; }
                                        else if (m == 6 && curr6[i] != 0 && pay_stat6[i] == 0) { isUnpaid = true; amt = bill_m6[i]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631

                                        if (isUnpaid == true)
                                        {
                                            cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i] << "\t\t" << amt << endl;
                                            found = true;
                                        }
                                    }
                                }
                                if (found == false) { cout << "No unpaid bills found for this month.\n"; }
                            }
<<<<<<< HEAD
                            // List Unpaid Bills (By Month)
=======
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
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
                                        bool hasReading = false;
<<<<<<< HEAD
                                        if (m == 1 && curr1[i] != 0)
                                        {
                                            bill = bill_m1[i];
                                            hasReading = true;
                                        }
                                        else if (m == 2 && curr2[i] != 0)
                                        {
                                            bill = bill_m2[i];
                                            hasReading = true;
                                        }
                                        else if (m == 3 && curr3[i] != 0)
                                        {
                                            bill = bill_m3[i];
                                            hasReading = true;
                                        }
                                        else if (m == 4 && curr4[i] != 0)
                                        {
                                            bill = bill_m4[i];
                                            hasReading = true;
                                        }
                                        else if (m == 5 && curr5[i] != 0)
                                        {
                                            bill = bill_m5[i];
                                            hasReading = true;
                                        }
                                        else if (m == 6 && curr6[i] != 0)
                                        {
                                            bill = bill_m6[i];
                                            hasReading = true;
                                        }
=======
                                        if (m == 1 && curr1[i] != 0) { bill = bill_m1[i]; hasReading = true; }
                                        else if (m == 2 && curr2[i] != 0) { bill = bill_m2[i]; hasReading = true; }
                                        else if (m == 3 && curr3[i] != 0) { bill = bill_m3[i]; hasReading = true; }
                                        else if (m == 4 && curr4[i] != 0) { bill = bill_m4[i]; hasReading = true; }
                                        else if (m == 5 && curr5[i] != 0) { bill = bill_m5[i]; hasReading = true; }
                                        else if (m == 6 && curr6[i] != 0) { bill = bill_m6[i]; hasReading = true; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631

                                        if (hasReading == true && bill > threshold)
                                        {
                                            cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i] << "\tBill: " << bill << endl;
                                            found = true;
                                        }
                                    }
                                }
                                if (found == false) { cout << "No records found above this threshold.\n"; }
                            }
                            // List Zero Consumption Users (By Month)
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
                                        int units = -1;
                                        // FIX: Only check consumers who have readings for that month
<<<<<<< HEAD
                                        if (m == 1 && curr1[i] != 0)
                                        {
                                            units = used_units1[i];
                                        }
                                        else if (m == 2 && curr2[i] != 0)
                                        {
                                            units = used_units2[i];
                                        }
                                        else if (m == 3 && curr3[i] != 0)
                                        {
                                            units = used_units3[i];
                                        }
                                        else if (m == 4 && curr4[i] != 0)
                                        {
                                            units = used_units4[i];
                                        }
                                        else if (m == 5 && curr5[i] != 0)
                                        {
                                            units = used_units5[i];
                                        }
                                        else if (m == 6 && curr6[i] != 0)
                                        {
                                            units = used_units6[i];
                                        }
=======
                                        if (m == 1 && curr1[i] != 0) { units = used_units1[i]; }
                                        else if (m == 2 && curr2[i] != 0) { units = used_units2[i]; }
                                        else if (m == 3 && curr3[i] != 0) { units = used_units3[i]; }
                                        else if (m == 4 && curr4[i] != 0) { units = used_units4[i]; }
                                        else if (m == 5 && curr5[i] != 0) { units = used_units5[i]; }
                                        else if (m == 6 && curr6[i] != 0) { units = used_units6[i]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631

                                        if (units == 0)
                                        {
                                            cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i] << endl;
                                            found = true;
                                        }
                                    }
                                }
                                if (found == false) { cout << "No users found with zero consumption.\n"; }
                            }

                            cout << "\nPress any key to return...";
                            getch();
                        }
                        //  Validate Records & Detect Conflicts
                        else if (managerOption == "8")
                        {
                            system("cls");
                            int issuesFound = 0;
                            cout << "====================================================\n";
                            cout << "          SYSTEM DATA VALIDATION REPORT             \n";
                            cout << "====================================================\n\n";

                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] != 0)
                                {
                                    for (int j = i + 1; j < Total_Consumers; j++)
                                    {
                                        if (Consumers_IdArray[i] == Consumers_IdArray[j])
                                        {
                                            cout << "[!] CONFLICT: Duplicate ID " << Consumers_IdArray[i] << " found at index " << i << " and " << j << endl;
                                            issuesFound++;
                                        }
                                    }
                                }
                            }

                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] != 0)
                                {
<<<<<<< HEAD
                                    if (curr1[i] != 0 && curr1[i] < prev1[i])
                                    {
                                        cout << "[!] ERROR: Reading Conflict M1 for ID " << Consumers_IdArray[i] << endl;
                                        issuesFound++;
                                    }
                                    if (curr2[i] != 0 && curr2[i] < prev2[i])
                                    {
                                        cout << "[!] ERROR: Reading Conflict M2 for ID " << Consumers_IdArray[i] << endl;
                                        issuesFound++;
                                    }
                                    if (curr3[i] != 0 && curr3[i] < prev3[i])
                                    {
                                        cout << "[!] ERROR: Reading Conflict M3 for ID " << Consumers_IdArray[i] << endl;
                                        issuesFound++;
                                    }
                                    if (curr4[i] != 0 && curr4[i] < prev4[i])
                                    {
                                        cout << "[!] ERROR: Reading Conflict M4 for ID " << Consumers_IdArray[i] << endl;
                                        issuesFound++;
                                    }
                                    if (curr5[i] != 0 && curr5[i] < prev5[i])
                                    {
                                        cout << "[!] ERROR: Reading Conflict M5 for ID " << Consumers_IdArray[i] << endl;
                                        issuesFound++;
                                    }
                                    if (curr6[i] != 0 && curr6[i] < prev6[i])
                                    {
                                        cout << "[!] ERROR: Reading Conflict M6 for ID " << Consumers_IdArray[i] << endl;
                                        issuesFound++;
                                    }

                                    if (curr6[i] != 0 && used_units6[i] < 0)
                                    {
                                        cout << "[!] ERROR: Negative Units for ID " << Consumers_IdArray[i] << endl;
                                        issuesFound++;
                                    }
                                    if (curr6[i] != 0 && bill_m6[i] < 0)
                                    {
                                        cout << "[!] ERROR: Negative Bill for ID " << Consumers_IdArray[i] << endl;
                                        issuesFound++;
                                    }
                                    if (active_StatusArray[i] == 0 && used_units6[i] > 0)
                                    {
                                        cout << "[!] POLICY: Inactive consumer ID " << Consumers_IdArray[i] << " has usage of " << used_units6[i] << " units." << endl;
                                        issuesFound++;
                                    }

                                    if (curr6[i] != 0)
                                    {
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
                                        if (pay_stat5[i] == 0)
                                        {
                                            expectedBill = expectedBill + bill_m5[i];
                                        }
                                        float difference = bill_m6[i] - expectedBill;
                                        if (difference > 0.1 || difference < -0.1)
                                        {
=======
                                    if (curr1[i] != 0 && curr1[i] < prev1[i]) { cout << "[!] ERROR: Reading Conflict M1 for ID " << Consumers_IdArray[i] << endl; issuesFound++; }
                                    if (curr2[i] != 0 && curr2[i] < prev2[i]) { cout << "[!] ERROR: Reading Conflict M2 for ID " << Consumers_IdArray[i] << endl; issuesFound++; }
                                    if (curr3[i] != 0 && curr3[i] < prev3[i]) { cout << "[!] ERROR: Reading Conflict M3 for ID " << Consumers_IdArray[i] << endl; issuesFound++; }
                                    if (curr4[i] != 0 && curr4[i] < prev4[i]) { cout << "[!] ERROR: Reading Conflict M4 for ID " << Consumers_IdArray[i] << endl; issuesFound++; }
                                    if (curr5[i] != 0 && curr5[i] < prev5[i]) { cout << "[!] ERROR: Reading Conflict M5 for ID " << Consumers_IdArray[i] << endl; issuesFound++; }
                                    if (curr6[i] != 0 && curr6[i] < prev6[i]) { cout << "[!] ERROR: Reading Conflict M6 for ID " << Consumers_IdArray[i] << endl; issuesFound++; }

                                    if (curr6[i] != 0 && used_units6[i] < 0) { cout << "[!] ERROR: Negative Units for ID " << Consumers_IdArray[i] << endl; issuesFound++; }
                                    if (curr6[i] != 0 && bill_m6[i] < 0) { cout << "[!] ERROR: Negative Bill for ID " << Consumers_IdArray[i] << endl; issuesFound++; }
                                    if (active_StatusArray[i] == 0 && used_units6[i] > 0)
                                    {
                                        cout << "[!] POLICY: Inactive consumer ID " << Consumers_IdArray[i] << " has usage of " << used_units6[i] << " units." << endl;
                                        issuesFound++;
                                    }

                                    if (curr6[i] != 0)
                                    {
                                        float currentRate;
                                        if (connection_TypeArray[i] == 1) { currentRate = domestic_rate; } else { currentRate = commercial_rate; }
                                        float expectedBill = (used_units6[i] * currentRate);
                                        expectedBill = expectedBill + (expectedBill * tax) + fixed_charges;
                                        if (pay_stat5[i] == 0) { expectedBill = expectedBill + bill_m5[i]; }
                                        float difference = bill_m6[i] - expectedBill;
                                        if (difference > 0.1 || difference < -0.1)
                                        {
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            cout << "[!] MISMATCH: Bill calculation error for ID " << Consumers_IdArray[i] << endl;
                                            cout << "    Stored: " << bill_m6[i] << " | Expected: " << expectedBill << endl;
                                            issuesFound++;
                                        }
                                    }
                                }
                            }

<<<<<<< HEAD
                            if (issuesFound == 0)
                            {
                                cout << ">>> All checks passed! No data conflicts found.\n";
                            }
                            else
                            {
                                cout << "\n----------------------------------------------------\n";
                                cout << "TOTAL ISSUES DETECTED: " << issuesFound << endl;
                            }
=======
                            if (issuesFound == 0) { cout << ">>> All checks passed! No data conflicts found.\n"; }
                            else { cout << "\n----------------------------------------------------\n"; cout << "TOTAL ISSUES DETECTED: " << issuesFound << endl; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631

                            cout << "\nPress any key to return to Manager Menu...";
                            getch();
                        }
                        // Generate Reports / Summaries
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
                            // Month-wise Revenue & Unpaid Totals
                            if (rChoice == "1")
                            {
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
                                            int currentStat = 1;
                                            bool hasReading = false;

                                            // FIX Issue 4: Only count consumers who have readings for that month
<<<<<<< HEAD
                                            if (m == 1 && curr1[i] != 0)
                                            {
                                                currentBill = bill_m1[i];
                                                currentStat = pay_stat1[i];
                                                hasReading = true;
                                            }
                                            else if (m == 2 && curr2[i] != 0)
                                            {
                                                currentBill = bill_m2[i];
                                                currentStat = pay_stat2[i];
                                                hasReading = true;
                                            }
                                            else if (m == 3 && curr3[i] != 0)
                                            {
                                                currentBill = bill_m3[i];
                                                currentStat = pay_stat3[i];
                                                hasReading = true;
                                            }
                                            else if (m == 4 && curr4[i] != 0)
                                            {
                                                currentBill = bill_m4[i];
                                                currentStat = pay_stat4[i];
                                                hasReading = true;
                                            }
                                            else if (m == 5 && curr5[i] != 0)
                                            {
                                                currentBill = bill_m5[i];
                                                currentStat = pay_stat5[i];
                                                hasReading = true;
                                            }
                                            else if (m == 6 && curr6[i] != 0)
                                            {
                                                currentBill = bill_m6[i];
                                                currentStat = pay_stat6[i];
                                                hasReading = true;
                                            }
=======
                                            if (m == 1 && curr1[i] != 0) { currentBill = bill_m1[i]; currentStat = pay_stat1[i]; hasReading = true; }
                                            else if (m == 2 && curr2[i] != 0) { currentBill = bill_m2[i]; currentStat = pay_stat2[i]; hasReading = true; }
                                            else if (m == 3 && curr3[i] != 0) { currentBill = bill_m3[i]; currentStat = pay_stat3[i]; hasReading = true; }
                                            else if (m == 4 && curr4[i] != 0) { currentBill = bill_m4[i]; currentStat = pay_stat4[i]; hasReading = true; }
                                            else if (m == 5 && curr5[i] != 0) { currentBill = bill_m5[i]; currentStat = pay_stat5[i]; hasReading = true; }
                                            else if (m == 6 && curr6[i] != 0) { currentBill = bill_m6[i]; currentStat = pay_stat6[i]; hasReading = true; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631

                                            if (hasReading == true)
                                            {
                                                totalRev = totalRev + currentBill;
<<<<<<< HEAD
                                                if (currentStat == 0)
                                                {
                                                    totalUnpaid = totalUnpaid + currentBill;
                                                }
=======
                                                if (currentStat == 0) { totalUnpaid = totalUnpaid + currentBill; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                        }
                                    }
                                    cout << "M" << m << "\t" << totalRev << "\t\t" << totalUnpaid << endl;
                                }
                            }
                            // Highest & Lowest Bills (By Month)
                            else if (rChoice == "2")
                            {
                                int m;
                                cout << "Enter Month (1-6): ";
                                cin >> m;

                                float highestBill = -1.0;
                                float lowestBill = -1.0;
                                int highID = 0;
                                int lowID = 0;
                                bool firstFound = false;

                                for (int i = 0; i < Total_Consumers; i++)
                                {
                                    if (Consumers_IdArray[i] != 0)
                                    {
                                        float b = 0;
                                        bool hasReading = false;
<<<<<<< HEAD
                                        if (m == 1 && curr1[i] != 0)
                                        {
                                            b = bill_m1[i];
                                            hasReading = true;
                                        }
                                        else if (m == 2 && curr2[i] != 0)
                                        {
                                            b = bill_m2[i];
                                            hasReading = true;
                                        }
                                        else if (m == 3 && curr3[i] != 0)
                                        {
                                            b = bill_m3[i];
                                            hasReading = true;
                                        }
                                        else if (m == 4 && curr4[i] != 0)
                                        {
                                            b = bill_m4[i];
                                            hasReading = true;
                                        }
                                        else if (m == 5 && curr5[i] != 0)
                                        {
                                            b = bill_m5[i];
                                            hasReading = true;
                                        }
                                        else if (m == 6 && curr6[i] != 0)
                                        {
                                            b = bill_m6[i];
                                            hasReading = true;
                                        }

                                        if (hasReading == true)
                                        {
                                            if (firstFound == false)
                                            {
                                                highestBill = b;
                                                lowestBill = b;
                                                highID = Consumers_IdArray[i];
                                                lowID = Consumers_IdArray[i];
                                                firstFound = true;
                                            }
                                            else
                                            {
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
=======
                                        if (m == 1 && curr1[i] != 0) { b = bill_m1[i]; hasReading = true; }
                                        else if (m == 2 && curr2[i] != 0) { b = bill_m2[i]; hasReading = true; }
                                        else if (m == 3 && curr3[i] != 0) { b = bill_m3[i]; hasReading = true; }
                                        else if (m == 4 && curr4[i] != 0) { b = bill_m4[i]; hasReading = true; }
                                        else if (m == 5 && curr5[i] != 0) { b = bill_m5[i]; hasReading = true; }
                                        else if (m == 6 && curr6[i] != 0) { b = bill_m6[i]; hasReading = true; }

                                        if (hasReading == true)
                                        {
                                            if (firstFound == false) { highestBill = b; lowestBill = b; highID = Consumers_IdArray[i]; lowID = Consumers_IdArray[i]; firstFound = true; }
                                            else
                                            {
                                                if (b > highestBill) { highestBill = b; highID = Consumers_IdArray[i]; }
                                                if (b < lowestBill) { lowestBill = b; lowID = Consumers_IdArray[i]; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                            }
                                        }
                                    }
                                }

                                cout << "\n--- Month " << m << " Report ---" << endl;
<<<<<<< HEAD
                                if (firstFound == false)
                                {
                                    cout << "No readings found for this month." << endl;
                                }
=======
                                if (firstFound == false) { cout << "No readings found for this month." << endl; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                else
                                {
                                    cout << "Highest Bill: " << highestBill << " PKR (Consumer ID: " << highID << ")" << endl;
                                    cout << "Lowest Bill: " << lowestBill << " PKR (Consumer ID: " << lowID << ")" << endl;
                                }
                            }
                            // Consumer-wise Overall Totals (6 Months)
                            else if (rChoice == "3")
                            {
                                cout << "\nID\tName\t\tTotal Units\tTotal Billed\n";
                                cout << "----------------------------------------------------\n";
                                for (int i = 0; i < Total_Consumers; i++)
                                {
                                    if (Consumers_IdArray[i] != 0)
                                    {
                                        int totalU = used_units1[i] + used_units2[i] + used_units3[i] + used_units4[i] + used_units5[i] + used_units6[i];
                                        float totalB = bill_m1[i] + bill_m2[i] + bill_m3[i] + bill_m4[i] + bill_m5[i] + bill_m6[i];
                                        cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i];
<<<<<<< HEAD
                                        if (Consumers_nameArray[i].length() < 8)
                                        {
                                            cout << "\t\t";
                                        }
                                        else
                                        {
                                            cout << "\t";
                                        }
=======
                                        if (Consumers_nameArray[i].length() < 8) { cout << "\t\t"; } else { cout << "\t"; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                                        cout << totalU << "\t\t" << totalB << endl;
                                    }
                                }
                            }
                            // Slab Category Count
                            else if (rChoice == "4")
                            {
                                int m;
                                cout << "Enter Month (1-6): ";
                                cin >> m;
                                int lowCount = 0;
                                int highCount = 0;

                                for (int i = 0; i < Total_Consumers; i++)
                                {
                                    if (Consumers_IdArray[i] != 0)
                                    {
                                        int u = -1;
                                        // FIX: Only count consumers who have readings for that month
<<<<<<< HEAD
                                        if (m == 1 && curr1[i] != 0)
                                        {
                                            u = used_units1[i];
                                        }
                                        else if (m == 2 && curr2[i] != 0)
                                        {
                                            u = used_units2[i];
                                        }
                                        else if (m == 3 && curr3[i] != 0)
                                        {
                                            u = used_units3[i];
                                        }
                                        else if (m == 4 && curr4[i] != 0)
                                        {
                                            u = used_units4[i];
                                        }
                                        else if (m == 5 && curr5[i] != 0)
                                        {
                                            u = used_units5[i];
                                        }
                                        else if (m == 6 && curr6[i] != 0)
                                        {
                                            u = used_units6[i];
                                        }

                                        if (u >= 0)
                                        {
                                            if (u <= 200)
                                            {
                                                lowCount++;
                                            }
                                            else
                                            {
                                                highCount++;
                                            }
=======
                                        if (m == 1 && curr1[i] != 0) { u = used_units1[i]; }
                                        else if (m == 2 && curr2[i] != 0) { u = used_units2[i]; }
                                        else if (m == 3 && curr3[i] != 0) { u = used_units3[i]; }
                                        else if (m == 4 && curr4[i] != 0) { u = used_units4[i]; }
                                        else if (m == 5 && curr5[i] != 0) { u = used_units5[i]; }
                                        else if (m == 6 && curr6[i] != 0) { u = used_units6[i]; }

                                        if (u >= 0)
                                        {
                                            if (u <= 200) { lowCount++; } else { highCount++; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
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

                            for (int i = 0; i < Total_Consumers; i++)
                            {
                                if (Consumers_IdArray[i] == searchId) { foundIndex = i; break; }
                            }

                            if (foundIndex != -1)
                            {
                                cout << "\nConsumer: " << Consumers_nameArray[foundIndex] << endl;
                                cout << "Current Status: ";
                                if (active_StatusArray[foundIndex] == 1) { cout << "ACTIVE" << endl; } else { cout << "INACTIVE" << endl; }

                                int newStat;
                                cout << "\nEnter New Status (1 for ACTIVE, 0 for INACTIVE): ";
                                cin >> newStat;

                                if (newStat == 1 || newStat == 0)
                                {
                                    active_StatusArray[foundIndex] = newStat;
                                    cout << "\n[Success] Account status updated to ";
                                    if (newStat == 1) { cout << "ACTIVE."; } else { cout << "INACTIVE."; }
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
                        // Log Out
                        else if (managerOption == "0")
                        {
                            cout << "\nLogging out from Manager Panel... Press any key.";
                            getch();
                            break;
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
                    cout << "You entered wrong information." << endl;
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

            for (int i = 0; i < Total_Consumers; i++)
            {
                if (Consumers_IdArray[i] == id) { foundIndex = i; break; }
            }

            if (foundIndex != -1)
            {
                string consumerChoice;
                while (true)
                {
                    system("cls");
                    cout << "\n--- Welcome, " << Consumers_nameArray[foundIndex] << " ---\n";
<<<<<<< HEAD
                    cout << "1. View Current Bill (Latest Month)\n"; // FIX Label updated
=======
                    cout << "1. View Current Bill (Latest Month)\n"; // FIX Issue 5: Label updated
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                    cout << "2. View 6-Month Billing History\n";
                    cout << "3. View My Account Details\n";
                    cout << "4. GO Back To Main Menu\n";
                    cout << "5. Logout\n";
                    cout << "Choose option: ";
                    cin >> consumerChoice;
                    // View Current Bill (Latest Month)
                    if (consumerChoice == "1")
                    {
                        system("cls");

<<<<<<< HEAD
                        // Find last entered month instead of always showing Month 6
=======
                        // FIX Issue 5: Find last entered month instead of always showing Month 6
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                        int lastEnteredMonth = 0;
                        int lastUnits = 0;
                        float lastBill = 0;
                        int lastStat = 1;
<<<<<<< HEAD
                        if (curr1[foundIndex] != 0)
                        {
                            lastEnteredMonth = 1;
                            lastUnits = used_units1[foundIndex];
                            lastBill = bill_m1[foundIndex];
                            lastStat = pay_stat1[foundIndex];
                        }
                        if (curr2[foundIndex] != 0)
                        {
                            lastEnteredMonth = 2;
                            lastUnits = used_units2[foundIndex];
                            lastBill = bill_m2[foundIndex];
                            lastStat = pay_stat2[foundIndex];
                        }
                        if (curr3[foundIndex] != 0)
                        {
                            lastEnteredMonth = 3;
                            lastUnits = used_units3[foundIndex];
                            lastBill = bill_m3[foundIndex];
                            lastStat = pay_stat3[foundIndex];
                        }
                        if (curr4[foundIndex] != 0)
                        {
                            lastEnteredMonth = 4;
                            lastUnits = used_units4[foundIndex];
                            lastBill = bill_m4[foundIndex];
                            lastStat = pay_stat4[foundIndex];
                        }
                        if (curr5[foundIndex] != 0)
                        {
                            lastEnteredMonth = 5;
                            lastUnits = used_units5[foundIndex];
                            lastBill = bill_m5[foundIndex];
                            lastStat = pay_stat5[foundIndex];
                        }
                        if (curr6[foundIndex] != 0)
                        {
                            lastEnteredMonth = 6;
                            lastUnits = used_units6[foundIndex];
                            lastBill = bill_m6[foundIndex];
                            lastStat = pay_stat6[foundIndex];
                        }

                        if (lastEnteredMonth == 0)
                        {
=======
                        if (curr1[foundIndex] != 0) { lastEnteredMonth = 1; lastUnits = used_units1[foundIndex]; lastBill = bill_m1[foundIndex]; lastStat = pay_stat1[foundIndex]; }
                        if (curr2[foundIndex] != 0) { lastEnteredMonth = 2; lastUnits = used_units2[foundIndex]; lastBill = bill_m2[foundIndex]; lastStat = pay_stat2[foundIndex]; }
                        if (curr3[foundIndex] != 0) { lastEnteredMonth = 3; lastUnits = used_units3[foundIndex]; lastBill = bill_m3[foundIndex]; lastStat = pay_stat3[foundIndex]; }
                        if (curr4[foundIndex] != 0) { lastEnteredMonth = 4; lastUnits = used_units4[foundIndex]; lastBill = bill_m4[foundIndex]; lastStat = pay_stat4[foundIndex]; }
                        if (curr5[foundIndex] != 0) { lastEnteredMonth = 5; lastUnits = used_units5[foundIndex]; lastBill = bill_m5[foundIndex]; lastStat = pay_stat5[foundIndex]; }
                        if (curr6[foundIndex] != 0) { lastEnteredMonth = 6; lastUnits = used_units6[foundIndex]; lastBill = bill_m6[foundIndex]; lastStat = pay_stat6[foundIndex]; }

                        if (lastEnteredMonth == 0)
                        {
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                            cout << "\n>>> LATEST BILL <<<\n";
                            cout << "No readings have been entered for your account yet.\n";
                        }
                        else
                        {
                            cout << "\n>>> LATEST BILL (MONTH " << lastEnteredMonth << ") <<<\n";
                            cout << "Units Consumed: " << lastUnits << endl;
                            cout << "Total Amount (Inc. Taxes & Arrears): " << lastBill << " PKR" << endl;
                            cout << "Status: ";
<<<<<<< HEAD
                            if (lastStat == 1)
                            {
                                cout << "PAID" << endl;
                            }
                            else
                            {
                                cout << "UNPAID" << endl;
                            }
=======
                            if (lastStat == 1) { cout << "PAID" << endl; } else { cout << "UNPAID" << endl; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                        }

                        cout << "\nPress Any key to go back...";
                        getch();
                    }
                    // View 6-Month Billing History
                    else if (consumerChoice == "2")
                    {
                        system("cls");
                        cout << "\n>>> 6-MONTH BILLING HISTORY <<<\n";
                        cout << "Month\tBill Amount\tStatus\n";
                        cout << "--------------------------------\n";

                        cout << "M1\t" << bill_m1[foundIndex] << " PKR\t";
                        if (pay_stat1[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
                        cout << endl;

                        cout << "M2\t" << bill_m2[foundIndex] << " PKR\t";
                        if (pay_stat2[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
                        cout << endl;

                        cout << "M3\t" << bill_m3[foundIndex] << " PKR\t";
                        if (pay_stat3[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
                        cout << endl;

                        cout << "M4\t" << bill_m4[foundIndex] << " PKR\t";
                        if (pay_stat4[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
                        cout << endl;

                        cout << "M5\t" << bill_m5[foundIndex] << " PKR\t";
                        if (pay_stat5[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
                        cout << endl;

                        cout << "M6\t" << bill_m6[foundIndex] << " PKR\t";
                        if (pay_stat6[foundIndex] == 1) { cout << "Paid"; } else { cout << "Unpaid"; }
                        cout << endl;

                        cout << "\nPress Any key to go back...";
                        getch();
                    }
                    // View My Account Details
                    else if (consumerChoice == "3")
                    {
                        system("cls");
                        cout << "\n>>> ACCOUNT DETAILS <<<\n";
                        cout << "Consumer ID: " << Consumers_IdArray[foundIndex] << endl;
                        cout << "Meter Number: " << meterNumber_Array[foundIndex] << endl;
                        cout << "Address: " << adress_Array[foundIndex] << endl;
                        cout << "Connection: ";
<<<<<<< HEAD
                        if (connection_TypeArray[foundIndex] == 1)
                        {
                            cout << "Domestic" << endl;
                        }
                        else
                        {
                            cout << "Commercial" << endl;
                        }
=======
                        if (connection_TypeArray[foundIndex] == 1) { cout << "Domestic" << endl; } else { cout << "Commercial" << endl; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
                        cout << "Account Status: ";
                        if (active_StatusArray[foundIndex] == 1) { cout << "Active" << endl; } else { cout << "Inactive" << endl; }

                        cout << "\nPress Any key to go back...";
                        getch();
                    }
<<<<<<< HEAD
                    // GO Back To Main Menu
                    else if (consumerChoice == "4")
                    {
                        break;
                    }
                    else if (consumerChoice == "5")
                    {
                        cout << "Logging out...\n";
                        break;
                    }
                    else
                    {
                        cout << "Invalid Option! Try again.\n";
                    }
=======
                    else if (consumerChoice == "4") { break; }
                    else if (consumerChoice == "5") { cout << "Logging out...\n"; break; }
                    else { cout << "Invalid Option! Try again.\n"; }
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
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
    }

<<<<<<< HEAD
    cout << endl
         << " Thanks for using this software";
=======
    cout << endl << " Thanks for using this software";
>>>>>>> ad5e14e293fd6fb8dbf6871386c28b949e549631
    return 0;
}