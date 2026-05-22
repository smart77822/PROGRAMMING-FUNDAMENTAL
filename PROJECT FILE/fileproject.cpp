#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

// ============================================================
//                  GLOBAL VARIABLES
// ============================================================

const int Total_Consumers = 30;
int Total_Months = 6;
int index_count = 10;

// Consumer Info
string Consumers_nameArray[Total_Consumers] = {"Smart", "Brandon", "Tony", "Gullo", "Andy", "Nick", "John", "CARLO", "Inferno", "Trump"};
string adress_Array[Total_Consumers] = {"Ali Town Block C", "Lake City M4", "PSCIR Phase 2", "DHA Phase 2", "DHA Phase 4", "NFC Street 74", "Airline Street 34", "Model Town Phasae 3", "Wapda Town Block D", "Ali Town Street 19"};
int Consumers_IdArray[Total_Consumers] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
int meterNumber_Array[Total_Consumers] = {111, 222, 333, 444, 555, 666, 777, 888, 999, 1010};
int connection_TypeArray[Total_Consumers] = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
int active_StatusArray[Total_Consumers] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0};

// Previous Readings
int prev1[Total_Consumers] = {100, 110, 120, 130, 140, 150, 160, 170, 180, 190};
int prev2[Total_Consumers] = {150, 160, 170, 180, 190, 200, 210, 220, 230, 240};
int prev3[Total_Consumers] = {200, 210, 220, 230, 240, 250, 260, 270, 280, 290};
int prev4[Total_Consumers] = {250, 260, 270, 280, 290, 300, 310, 320, 330, 340};
int prev5[Total_Consumers] = {300, 310, 320, 330, 340, 350, 360, 370, 380, 390};
int prev6[Total_Consumers] = {350, 360, 370, 380, 390, 400, 410, 420, 430, 440};

// Current Readings
int curr1[Total_Consumers] = {150, 165, 180, 195, 210, 225, 240, 255, 270, 285};
int curr2[Total_Consumers] = {200, 215, 230, 245, 260, 275, 290, 305, 320, 335};
int curr3[Total_Consumers] = {250, 265, 280, 295, 310, 325, 340, 355, 370, 385};
int curr4[Total_Consumers] = {300, 315, 330, 345, 360, 375, 390, 405, 420, 435};
int curr5[Total_Consumers] = {350, 365, 380, 395, 410, 425, 440, 455, 470, 485};
int curr6[Total_Consumers] = {400, 415, 430, 445, 460, 475, 490, 505, 520, 535};
// Units Used
int used_units1[Total_Consumers], used_units2[Total_Consumers], used_units3[Total_Consumers];

int used_units4[Total_Consumers], used_units5[Total_Consumers], used_units6[Total_Consumers];

// Payment Status (1=Paid, 0=Unpaid)
int pay_stat1[Total_Consumers] = {1, 0, 1, 1, 0, 1, 1, 0, 1, 1};
int pay_stat2[Total_Consumers] = {1, 1, 0, 1, 1, 0, 1, 1, 0, 1};
int pay_stat3[Total_Consumers] = {0, 1, 1, 0, 1, 1, 0, 1, 1, 0};
int pay_stat4[Total_Consumers] = {1, 1, 1, 1, 0, 0, 1, 1, 1, 1};
int pay_stat5[Total_Consumers] = {1, 0, 1, 0, 1, 1, 1, 0, 1, 0};
int pay_stat6[Total_Consumers] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

// Bills
float bill_m1[Total_Consumers], bill_m2[Total_Consumers], bill_m3[Total_Consumers];
float bill_m4[Total_Consumers], bill_m5[Total_Consumers], bill_m6[Total_Consumers];

// Rates & Taxes
float domestic_rate = 20.0;
float commercial_rate = 45.0;
float tax = 0.15;
float fixed_charges = 500.0;

// ============================================================
//                    FILE NAMES
// ============================================================

const string FILE_CONSUMERS = "consumers.txt";
const string FILE_READINGS = "readings.txt";
const string FILE_BILLS = "bills.txt";
const string FILE_PAYMENT = "payments.txt";
const string FILE_REPORT = "report.txt";
const string FILE_RECEIPT = "bill_receipt.txt";
const string FILE_LOG = "system_log.txt";
const string FILE_EXPORT = "all_consumers_export.txt";

// ============================================================
//                  FUNCTION PROTOTYPES
// ============================================================

void initializeData();
void calculateAllBills();
void initializeEmptySlots();

// FILE HANDLING PROTOTYPES
void saveAllDataToFile();
void loadAllDataFromFile();
void exportBillingHistoryToFile(int foundIndex);
void exportAllConsumersToFile();
void exportReportToFile();
void exportBillReceiptToFile(int foundIndex);
void appendLogEntry(string message);

// Manager Functions
bool managerLogin();
void managerMenu();
void addOrReplaceConsumer();
void displayAllConsumers();
void enterMonthlyReadings();
void updateMonthlyReading();
void markBillPaidUnpaid();
void displayBillingHistory();
void searchAndListings();
void validateRecords();
void generateReports();
void changeAccountStatus();

// Consumer Functions
void consumerPortal();
void viewCurrentBill(int foundIndex);
void viewBillingHistory(int foundIndex);
void viewAccountDetails(int foundIndex);

// Helper Functions
int findConsumer(int id);
void recalculateBills(int i);
float getRate(int i);
int getLastEnteredMonth(int i);

// ============================================================
//                       MAIN
// ============================================================

int main()
{
    initializeData();

    // FILE HANDLING
    loadAllDataFromFile();

    while (true)
    {
        system("cls");
        cout << "==================================================================\n";
        cout << "===========Electricity Bill and Monthly Record System ============\n";
        cout << "==================================================================\n\n";
        cout << " User menu\n";
        cout << "1 Manager\n";
        cout << "2 Consumer\n";
        cout << "3 Exit\n";
        cout << "Choose option : ";

        string userOption;
        cin >> userOption;
        cout << " You Choose : " << userOption << endl;

        if (userOption == "1")
        {
            if (managerLogin())
                managerMenu();
        }
        else if (userOption == "2")
        {
            consumerPortal();
        }
        else if (userOption == "3")
        {
            // FILE HANDLING
            saveAllDataToFile();
            appendLogEntry("System exited. Data saved successfully.");
            break;
        }
        else
        {
            cout << "You entered wrong option\n";
        }
    }

    cout << endl
         << " Thanks for using this software";
    return 0;
}

// ============================================================
//                  FUNCTION DEFINITIONS
// ============================================================

void initializeData()
{
    for (int i = 0; i < 10; i++)
    {
        used_units1[i] = curr1[i] - prev1[i];
        used_units2[i] = curr2[i] - prev2[i];
        used_units3[i] = curr3[i] - prev3[i];
        used_units4[i] = curr4[i] - prev4[i];
        used_units5[i] = curr5[i] - prev5[i];
        used_units6[i] = curr6[i] - prev6[i];
    }
    initializeEmptySlots();
    calculateAllBills();
}

void initializeEmptySlots()
{
    for (int i = 10; i < Total_Consumers; i++)
    {
        Consumers_IdArray[i] = 0;
        meterNumber_Array[i] = 0;
        connection_TypeArray[i] = 1;
        active_StatusArray[i] = 1;
        prev1[i] = prev2[i] = prev3[i] = prev4[i] = prev5[i] = prev6[i] = 0;
        curr1[i] = curr2[i] = curr3[i] = curr4[i] = curr5[i] = curr6[i] = 0;
        used_units1[i] = used_units2[i] = used_units3[i] = used_units4[i] = used_units5[i] = used_units6[i] = 0;
        bill_m1[i] = bill_m2[i] = bill_m3[i] = bill_m4[i] = bill_m5[i] = bill_m6[i] = 0;
        pay_stat1[i] = pay_stat2[i] = pay_stat3[i] = pay_stat4[i] = pay_stat5[i] = pay_stat6[i] = 1;
    }
}

void calculateAllBills()
{
    for (int i = 0; i < 10; i++)
    {
        float rate = getRate(i);
        bill_m1[i] = (used_units1[i] * rate) * (1 + tax) + fixed_charges;
        bill_m2[i] = (used_units2[i] * rate) * (1 + tax) + fixed_charges;
        if (pay_stat1[i] == 0)
            bill_m2[i] += bill_m1[i];
        bill_m3[i] = (used_units3[i] * rate) * (1 + tax) + fixed_charges;
        if (pay_stat2[i] == 0)
            bill_m3[i] += bill_m2[i];
        bill_m4[i] = (used_units4[i] * rate) * (1 + tax) + fixed_charges;
        if (pay_stat3[i] == 0)
            bill_m4[i] += bill_m3[i];
        bill_m5[i] = (used_units5[i] * rate) * (1 + tax) + fixed_charges;
        if (pay_stat4[i] == 0)
            bill_m5[i] += bill_m4[i];
        bill_m6[i] = (used_units6[i] * rate) * (1 + tax) + fixed_charges;
        if (pay_stat5[i] == 0)
            bill_m6[i] += bill_m5[i];
    }
}

float getRate(int i)
{
    if (connection_TypeArray[i] == 1)
        return domestic_rate;
    else
        return commercial_rate;
}

int findConsumer(int id)
{
    for (int i = 0; i < Total_Consumers; i++)
        if (Consumers_IdArray[i] == id)
            return i;
    return -1;
}

int getLastEnteredMonth(int i)
{
    if (curr6[i] != 0)
        return 6;
    if (curr5[i] != 0)
        return 5;
    if (curr4[i] != 0)
        return 4;
    if (curr3[i] != 0)
        return 3;
    if (curr2[i] != 0)
        return 2;
    if (curr1[i] != 0)
        return 1;
    return 0;
}

void recalculateBills(int i)
{
    float rate = getRate(i);
    if (curr1[i] != 0)
    {
        used_units1[i] = curr1[i] - prev1[i];
        bill_m1[i] = (used_units1[i] * rate) * (1 + tax) + fixed_charges;
    }
    if (curr2[i] != 0)
    {
        used_units2[i] = curr2[i] - prev2[i];
        bill_m2[i] = (used_units2[i] * rate) * (1 + tax) + fixed_charges;
        if (pay_stat1[i] == 0)
            bill_m2[i] += bill_m1[i];
    }
    if (curr3[i] != 0)
    {
        used_units3[i] = curr3[i] - prev3[i];
        bill_m3[i] = (used_units3[i] * rate) * (1 + tax) + fixed_charges;
        if (pay_stat2[i] == 0)
            bill_m3[i] += bill_m2[i];
    }
    if (curr4[i] != 0)
    {
        used_units4[i] = curr4[i] - prev4[i];
        bill_m4[i] = (used_units4[i] * rate) * (1 + tax) + fixed_charges;
        if (pay_stat3[i] == 0)
            bill_m4[i] += bill_m3[i];
    }
    if (curr5[i] != 0)
    {
        used_units5[i] = curr5[i] - prev5[i];
        bill_m5[i] = (used_units5[i] * rate) * (1 + tax) + fixed_charges;
        if (pay_stat4[i] == 0)
            bill_m5[i] += bill_m4[i];
    }
    if (curr6[i] != 0)
    {
        used_units6[i] = curr6[i] - prev6[i];
        bill_m6[i] = (used_units6[i] * rate) * (1 + tax) + fixed_charges;
        if (pay_stat5[i] == 0)
            bill_m6[i] += bill_m5[i];
    }
}

// ============================================================
//       FILE HANDLING FUNCTIONS
// ============================================================

// --- Save all data to txt files ---
void saveAllDataToFile()
{
    // ---- Save consumers.txt ----
    fstream consFile;
    consFile.open(FILE_CONSUMERS, ios::out);
    if (consFile.is_open())
    {
        consFile << "=== CONSUMER RECORDS ===\n";
        consFile << "Index|ID|MeterNo|Name|Address|ConnectionType|ActiveStatus\n";
        consFile << "-----------------------------------------------------------\n";
        for (int i = 0; i < Total_Consumers; i++)
        {
            consFile << i << "|"
                     << Consumers_IdArray[i] << "|"
                     << meterNumber_Array[i] << "|"
                     << Consumers_nameArray[i] << "|"
                     << adress_Array[i] << "|"
                     << connection_TypeArray[i] << "|"
                     << active_StatusArray[i] << "\n";
        }
        consFile.close();
    }

    // ---- Save readings.txt ----
    fstream readFile;
    readFile.open(FILE_READINGS, ios::out);
    if (readFile.is_open())
    {
        readFile << "=== MONTHLY READINGS ===\n";
        readFile << "Index|ID|Prev1|Curr1|Used1|Prev2|Curr2|Used2|Prev3|Curr3|Used3|Prev4|Curr4|Used4|Prev5|Curr5|Used5|Prev6|Curr6|Used6\n";
        readFile << "-----------------------------------------------------------\n";
        for (int i = 0; i < Total_Consumers; i++)
        {
            readFile << i << "|" << Consumers_IdArray[i] << "|"
                     << prev1[i] << "|" << curr1[i] << "|" << used_units1[i] << "|"
                     << prev2[i] << "|" << curr2[i] << "|" << used_units2[i] << "|"
                     << prev3[i] << "|" << curr3[i] << "|" << used_units3[i] << "|"
                     << prev4[i] << "|" << curr4[i] << "|" << used_units4[i] << "|"
                     << prev5[i] << "|" << curr5[i] << "|" << used_units5[i] << "|"
                     << prev6[i] << "|" << curr6[i] << "|" << used_units6[i] << "\n";
        }
        readFile.close();
    }

    // ---- Save bills.txt ----
    fstream billFile;
    billFile.open(FILE_BILLS, ios::out);
    if (billFile.is_open())
    {
        billFile << "=== BILL RECORDS ===\n";
        billFile << "Index|ID|Bill_M1|Bill_M2|Bill_M3|Bill_M4|Bill_M5|Bill_M6\n";
        billFile << "-----------------------------------------------------------\n";
        for (int i = 0; i < Total_Consumers; i++)
        {
            billFile << i << "|" << Consumers_IdArray[i] << "|"
                     << bill_m1[i] << "|" << bill_m2[i] << "|"
                     << bill_m3[i] << "|" << bill_m4[i] << "|"
                     << bill_m5[i] << "|" << bill_m6[i] << "\n";
        }
        billFile.close();
    }

    // ---- Save payments.txt ----
    fstream payFile;
    payFile.open(FILE_PAYMENT, ios::out);
    if (payFile.is_open())
    {
        payFile << "=== PAYMENT STATUS RECORDS ===\n";
        payFile << "Index|ID|Pay_M1|Pay_M2|Pay_M3|Pay_M4|Pay_M5|Pay_M6\n";
        payFile << "-----------------------------------------------------------\n";
        for (int i = 0; i < Total_Consumers; i++)
        {
            payFile << i << "|" << Consumers_IdArray[i] << "|"
                    << pay_stat1[i] << "|" << pay_stat2[i] << "|"
                    << pay_stat3[i] << "|" << pay_stat4[i] << "|"
                    << pay_stat5[i] << "|" << pay_stat6[i] << "\n";
        }
        payFile.close();
    }

    cout << "\n[File] All data saved to txt files successfully.\n";
}

// --- Load all data from txt files ---
void loadAllDataFromFile()
{
    // ---- Load consumers.txt ----
    fstream consFile;
    consFile.open(FILE_CONSUMERS, ios::in);
    if (consFile.is_open())
    {
        string line;
        // Skip 3 header lines
        getline(consFile, line);
        getline(consFile, line);
        getline(consFile, line);

        while (!consFile.eof())
        {
            getline(consFile, line);
            if (line.empty())
                continue;

            // Parse: Index|ID|MeterNo|Name|Address|ConnectionType|ActiveStatus
            int idx = 0, pos = 0;

            pos = line.find('|');
            idx = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            if (idx < 0 || idx >= Total_Consumers)
                continue;

            pos = line.find('|');
            Consumers_IdArray[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);

            pos = line.find('|');
            meterNumber_Array[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);

            pos = line.find('|');
            Consumers_nameArray[idx] = line.substr(0, pos);
            line = line.substr(pos + 1);

            pos = line.find('|');
            adress_Array[idx] = line.substr(0, pos);
            line = line.substr(pos + 1);

            pos = line.find('|');
            connection_TypeArray[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);

            active_StatusArray[idx] = stoi(line);
        }
        consFile.close();
    }

    // ---- Load readings.txt ----
    fstream readFile;
    readFile.open(FILE_READINGS, ios::in);
    if (readFile.is_open())
    {
        string line;
        getline(readFile, line);
        getline(readFile, line);
        getline(readFile, line);

        while (!readFile.eof())
        {
            getline(readFile, line);
            if (line.empty())
                continue;

            // Parse: Index|ID|Prev1|Curr1|Used1|...|Prev6|Curr6|Used6
            int idx = 0, pos = 0;

            pos = line.find('|');
            idx = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            if (idx < 0 || idx >= Total_Consumers)
                continue;

            pos = line.find('|');
            line = line.substr(pos + 1); // skip ID

            pos = line.find('|');
            prev1[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            curr1[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            used_units1[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);

            pos = line.find('|');
            prev2[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            curr2[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            used_units2[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);

            pos = line.find('|');
            prev3[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            curr3[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            used_units3[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);

            pos = line.find('|');
            prev4[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            curr4[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            used_units4[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);

            pos = line.find('|');
            prev5[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            curr5[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            used_units5[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);

            pos = line.find('|');
            prev6[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            curr6[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            used_units6[idx] = stoi(line);
        }
        readFile.close();
    }

    // ---- Load bills.txt ----
    fstream billFile;
    billFile.open(FILE_BILLS, ios::in);
    if (billFile.is_open())
    {
        string line;
        getline(billFile, line);
        getline(billFile, line);
        getline(billFile, line);

        while (!billFile.eof())
        {
            getline(billFile, line);
            if (line.empty())
                continue;

            int idx = 0, pos = 0;

            pos = line.find('|');
            idx = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            if (idx < 0 || idx >= Total_Consumers)
                continue;

            pos = line.find('|');
            line = line.substr(pos + 1); // skip ID

            pos = line.find('|');
            bill_m1[idx] = stof(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            bill_m2[idx] = stof(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            bill_m3[idx] = stof(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            bill_m4[idx] = stof(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            bill_m5[idx] = stof(line.substr(0, pos));
            line = line.substr(pos + 1);
            bill_m6[idx] = stof(line);
        }
        billFile.close();
    }

    // ---- Load payments.txt ----
    fstream payFile;
    payFile.open(FILE_PAYMENT, ios::in);
    if (payFile.is_open())
    {
        string line;
        getline(payFile, line);
        getline(payFile, line);
        getline(payFile, line);

        while (!payFile.eof())
        {
            getline(payFile, line);
            if (line.empty())
                continue;

            int idx = 0, pos = 0;

            pos = line.find('|');
            idx = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            if (idx < 0 || idx >= Total_Consumers)
                continue;

            pos = line.find('|');
            line = line.substr(pos + 1); // skip ID

            pos = line.find('|');
            pay_stat1[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            pay_stat2[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            pay_stat3[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            pay_stat4[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find('|');
            pay_stat5[idx] = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pay_stat6[idx] = stoi(line);
        }
        payFile.close();
        cout << "[File] Saved data loaded from txt files successfully.\n";
    }
}

// --- Export bill receipt for a consumer ---
void exportBillReceiptToFile(int foundIndex)
{
    fstream receiptFile;
    receiptFile.open(FILE_RECEIPT, ios::out);
    if (receiptFile.is_open())
    {
        receiptFile << "===========================================================\n";
        receiptFile << "              ELECTRICITY BILL RECEIPT                     \n";
        receiptFile << "===========================================================\n";
        receiptFile << "Consumer ID   : " << Consumers_IdArray[foundIndex] << "\n";
        receiptFile << "Name          : " << Consumers_nameArray[foundIndex] << "\n";
        receiptFile << "Address       : " << adress_Array[foundIndex] << "\n";
        receiptFile << "Meter Number  : " << meterNumber_Array[foundIndex] << "\n";

        if (connection_TypeArray[foundIndex] == 1)
            receiptFile << "Connection    : Domestic\n";
        else
            receiptFile << "Connection    : Commercial\n";

        if (active_StatusArray[foundIndex] == 1)
            receiptFile << "Account Status: Active\n";
        else
            receiptFile << "Account Status: Inactive\n";

        receiptFile << "-----------------------------------------------------------\n";
        receiptFile << "Month\tPrev\tCurr\tUnits\tBill (PKR)\tStatus\n";
        receiptFile << "-----------------------------------------------------------\n";

        int prevArr[6] = {prev1[foundIndex], prev2[foundIndex], prev3[foundIndex], prev4[foundIndex], prev5[foundIndex], prev6[foundIndex]};
        int currArr[6] = {curr1[foundIndex], curr2[foundIndex], curr3[foundIndex], curr4[foundIndex], curr5[foundIndex], curr6[foundIndex]};
        int usedArr[6] = {used_units1[foundIndex], used_units2[foundIndex], used_units3[foundIndex], used_units4[foundIndex], used_units5[foundIndex], used_units6[foundIndex]};
        float billArr[6] = {bill_m1[foundIndex], bill_m2[foundIndex], bill_m3[foundIndex], bill_m4[foundIndex], bill_m5[foundIndex], bill_m6[foundIndex]};
        int statArr[6] = {pay_stat1[foundIndex], pay_stat2[foundIndex], pay_stat3[foundIndex], pay_stat4[foundIndex], pay_stat5[foundIndex], pay_stat6[foundIndex]};

        for (int m = 0; m < 6; m++)
        {
            receiptFile << "M" << m + 1 << "\t"
                        << prevArr[m] << "\t"
                        << currArr[m] << "\t"
                        << usedArr[m] << "\t"
                        << billArr[m] << "\t\t";
            if (statArr[m] == 1)
                receiptFile << "Paid\n";
            else
                receiptFile << "Unpaid\n";
        }
        receiptFile << "===========================================================\n";
        receiptFile.close();
        cout << "\n[File] Bill receipt saved to '" << FILE_RECEIPT << "'\n";
    }
}

// ---  Export billing history for one consumer ---
void exportBillingHistoryToFile(int foundIndex)
{
    string histFileName = "history_" + to_string(Consumers_IdArray[foundIndex]) + ".txt";

    fstream histFile;
    histFile.open(histFileName, ios::out);
    if (histFile.is_open())
    {
        histFile << "Billing History for: " << Consumers_nameArray[foundIndex]
                 << " (ID: " << Consumers_IdArray[foundIndex] << ")\n";
        histFile << "Month\tPrev\tCurr\tUnits\tBill\tStatus\n";
        histFile << "------------------------------------------------------\n";

        int prevArr[6] = {prev1[foundIndex], prev2[foundIndex], prev3[foundIndex], prev4[foundIndex], prev5[foundIndex], prev6[foundIndex]};
        int currArr[6] = {curr1[foundIndex], curr2[foundIndex], curr3[foundIndex], curr4[foundIndex], curr5[foundIndex], curr6[foundIndex]};
        int usedArr[6] = {used_units1[foundIndex], used_units2[foundIndex], used_units3[foundIndex], used_units4[foundIndex], used_units5[foundIndex], used_units6[foundIndex]};
        float billArr[6] = {bill_m1[foundIndex], bill_m2[foundIndex], bill_m3[foundIndex], bill_m4[foundIndex], bill_m5[foundIndex], bill_m6[foundIndex]};
        int statArr[6] = {pay_stat1[foundIndex], pay_stat2[foundIndex], pay_stat3[foundIndex], pay_stat4[foundIndex], pay_stat5[foundIndex], pay_stat6[foundIndex]};

        for (int m = 0; m < 6; m++)
        {
            histFile << "M" << m + 1 << "\t"
                     << prevArr[m] << "\t"
                     << currArr[m] << "\t"
                     << usedArr[m] << "\t"
                     << billArr[m] << "\t";
            if (statArr[m] == 1)
                histFile << "Paid\n";
            else
                histFile << "Unpaid\n";
        }
        histFile.close();
        cout << "\n[File] Billing history exported to '" << histFileName << "'\n";
    }
}

// --- WRITE (ios::out): Export all consumers list to txt ---
void exportAllConsumersToFile()
{
    fstream expFile;
    expFile.open(FILE_EXPORT, ios::out);
    if (expFile.is_open())
    {
        expFile << "===========================================================\n";
        expFile << "                 ALL CONSUMERS EXPORT                      \n";
        expFile << "===========================================================\n";
        expFile << "ID\tName\t\tType\t\tStatus\t\tBill_M6\t\tPayment_M6\n";
        expFile << "-----------------------------------------------------------\n";

        for (int i = 0; i < Total_Consumers; i++)
        {
            if (Consumers_IdArray[i] != 0)
            {
                expFile << Consumers_IdArray[i] << "\t"
                        << Consumers_nameArray[i] << "\t\t";

                if (connection_TypeArray[i] == 1)
                    expFile << "Domestic\t\t";
                else
                    expFile << "Commercial\t\t";

                if (active_StatusArray[i] == 1)
                    expFile << "Active  \t\t";
                else
                    expFile << "Inactive\t\t";

                expFile << bill_m6[i] << " PKR\t\t";

                if (pay_stat6[i] == 1)
                    expFile << "PAID\n";
                else
                    expFile << "UNPAID\n";
            }
        }
        expFile << "===========================================================\n";
        expFile.close();
        cout << "\n[File] All consumers exported to '" << FILE_EXPORT << "'\n";
    }
}

// --- WRITE (ios::out): Export month-wise revenue summary report ---
void exportReportToFile()
{
    fstream repFile;
    repFile.open(FILE_REPORT, ios::out);
    if (repFile.is_open())
    {
        repFile << "===========================================================\n";
        repFile << "             MONTH-WISE REVENUE SUMMARY REPORT             \n";
        repFile << "===========================================================\n";
        repFile << "Month\tTotal Revenue (PKR)\tTotal Unpaid (PKR)\n";
        repFile << "-----------------------------------------------------------\n";

        for (int m = 1; m <= 6; m++)
        {
            float totalRev = 0, totalUnpaid = 0;
            for (int i = 0; i < Total_Consumers; i++)
            {
                if (Consumers_IdArray[i] == 0)
                    continue;
                float currentBill = 0;
                int currentStat = 1;
                bool hasReading = false;
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
                if (hasReading)
                {
                    totalRev += currentBill;
                    if (currentStat == 0)
                        totalUnpaid += currentBill;
                }
            }
            repFile << "M" << m << "\t" << totalRev << "\t\t\t" << totalUnpaid << "\n";
        }
        repFile << "===========================================================\n";
        repFile.close();
        cout << "\n[File] Revenue report saved to '" << FILE_REPORT << "'\n";
    }
}

// --- APPEND (ios::app): Write a log entry to system_log.txt ---
void appendLogEntry(string message)
{
    fstream logFile;
    logFile.open(FILE_LOG, ios::app);
    if (logFile.is_open())
    {
        logFile << "[LOG] " << message << "\n";
        logFile.close();
    }
}

// ============================================================
//              MANAGER LOGIN
// ============================================================

bool managerLogin()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "\n Manager Menu : Login attempt " << i + 1 << endl;
        cout << " Enter username : ";
        string username;
        cin >> username;
        cout << " Enter the password : ";
        string password;
        cin >> password;

        if (username == "admin" && password == "123")
        {
            cout << "\n   Login Success! Press any key to enter Manager Menu...";
            appendLogEntry("Manager login successful.");
            getch();
            return true;
        }
        else
        {
            cout << "You entered wrong information.\n";
            if (i == 2)
            {
                appendLogEntry("Manager login failed after 3 attempts.");
                cout << "Press Any Key to continue...";
                getch();
            }
        }
    }
    return false;
}

// ============================================================
//              MANAGER MENU
// ============================================================

void managerMenu()
{
    string managerOption;
    while (true)
    {
        system("cls");
        cout << "==================================================================\n";
        cout << "                       MANAGER CONTROL PANEL                      \n";
        cout << "==================================================================\n\n";
        cout << "1)  Enter / Replace Consumer Records\n";
        cout << "2)  Display All Consumers\n";
        cout << "3)  Enter Monthly Readings & Generate Bill\n";
        cout << "4)  Update / Correct Monthly Readings\n";
        cout << "5)  Mark Bill Paid / Unpaid\n";
        cout << "6)  Display Consumer Billing History\n";
        cout << "7)  Search / Listings\n";
        cout << "8)  Validate Records & Detect Conflicts\n";
        cout << "9)  Generate Reports / Summaries\n";
        cout << "10) Change Consumer Account Status (Active/In)\n";
        cout << "11) [FILE] Save All Data to Files\n";
        cout << "12) [FILE] Export All Consumers to File\n";
        cout << "13) [FILE] Export Revenue Report to File\n";
        cout << "0)  Exit\n";
        cout << "---------------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> managerOption;

        if (managerOption == "1")
            addOrReplaceConsumer();
        else if (managerOption == "2")
            displayAllConsumers();
        else if (managerOption == "3")
            enterMonthlyReadings();
        else if (managerOption == "4")
            updateMonthlyReading();
        else if (managerOption == "5")
            markBillPaidUnpaid();
        else if (managerOption == "6")
            displayBillingHistory();
        else if (managerOption == "7")
            searchAndListings();
        else if (managerOption == "8")
            validateRecords();
        else if (managerOption == "9")
            generateReports();
        else if (managerOption == "10")
            changeAccountStatus();
        else if (managerOption == "11")
        {
            saveAllDataToFile();
            appendLogEntry("Manager manually saved all data to files.");
            cout << "Press any key to return...";
            getch();
        }
        else if (managerOption == "12")
        {
            exportAllConsumersToFile();
            appendLogEntry("Manager exported all consumer list to file.");
            cout << "Press any key to return...";
            getch();
        }
        else if (managerOption == "13")
        {
            exportReportToFile();
            appendLogEntry("Manager exported revenue report to file.");
            cout << "Press any key to return...";
            getch();
        }
        else if (managerOption == "0")
        {
            // FILE HANDLING: Auto-save on manager logout
            saveAllDataToFile();
            appendLogEntry("Manager logged out. Data auto-saved.");
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
}

// ============================================================
//         1) ADD OR REPLACE CONSUMER
// ============================================================

void addOrReplaceConsumer()
{
    system("cls");
    cout << "--- Consumer Record Management (Full Database View) ---\n\n";
    cout << "Index\tStatus\t\tID\tMeter #\t\tName\n";
    cout << "------------------------------------------------------------\n";

    for (int k = 0; k < Total_Consumers; k++)
    {
        cout << "[" << k << "]\t";
        if (Consumers_IdArray[k] == 0)
            cout << "EMPTY\t\t---\t---\t\t---";
        else
            cout << "FILLED\t\t" << Consumers_IdArray[k] << "\t" << meterNumber_Array[k] << "\t\t" << Consumers_nameArray[k];
        cout << endl;
    }

    int i;
    bool validIndex = false;
    while (!validIndex)
    {
        cout << "\nChoose an Index to Add/Update (0-29): ";
        cin >> i;
        if (i >= 0 && i < Total_Consumers)
            validIndex = true;
        else
            cout << "[!] Wrong Index! Try Again ( between 0-29 ).";
    }

    int tempID;
    bool validID = false;
    while (!validID)
    {
        cout << "Enter Unique Consumer ID: ";
        cin >> tempID;
        bool duplicate = false;
        for (int j = 0; j < Total_Consumers; j++)
            if (Consumers_IdArray[j] == tempID && i != j)
            {
                duplicate = true;
                break;
            }
        if (duplicate)
            cout << "[!] Error: ID " << tempID << " Already Exist ...\n";
        else
        {
            validID = true;
            Consumers_IdArray[i] = tempID;
        }
    }

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, Consumers_nameArray[i]);

    cout << "Enter Address: ";
    getline(cin, adress_Array[i]);

    cout << "Enter Meter Number: ";
    cin >> meterNumber_Array[i];

    int cType;
    bool validCType = false;
    while (!validCType)
    {
        cout << "Enter Connection Type (1=Domestic, 2=Commercial): ";
        cin >> cType;
        if (cType == 1 || cType == 2)
        {
            connection_TypeArray[i] = cType;
            validCType = true;
        }
        else
            cout << "[!] Just Enter 1 or 2.\n";
    }

    int aStat;
    bool validAStat = false;
    while (!validAStat)
    {
        cout << "Enter Status (1=Active, 0=Inactive): ";
        cin >> aStat;
        if (aStat == 1 || aStat == 0)
        {
            active_StatusArray[i] = aStat;
            validAStat = true;
        }
        else
            cout << "[!] Just Enter 1 or 0.\n";
    }

    prev1[i] = prev2[i] = prev3[i] = prev4[i] = prev5[i] = prev6[i] = 0;
    curr1[i] = curr2[i] = curr3[i] = curr4[i] = curr5[i] = curr6[i] = 0;
    bill_m1[i] = bill_m2[i] = bill_m3[i] = bill_m4[i] = bill_m5[i] = bill_m6[i] = 0;
    used_units1[i] = used_units2[i] = used_units3[i] = used_units4[i] = used_units5[i] = used_units6[i] = 0;
    pay_stat1[i] = pay_stat2[i] = pay_stat3[i] = pay_stat4[i] = pay_stat5[i] = pay_stat6[i] = 1;

    // FILE HANDLING: Auto-save after adding/updating consumer
    saveAllDataToFile();
    appendLogEntry("Consumer record added/updated at index " + to_string(i) + " ID: " + to_string(Consumers_IdArray[i]));

    cout << "\n[Success] Record updated successfully for " << Consumers_nameArray[i] << "!";
    cout << "\nPress any key to return...";
    getch();
}

// ============================================================
//         2) DISPLAY ALL CONSUMERS
// ============================================================

void displayAllConsumers()
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
            cout << Consumers_nameArray[i];

            if (Consumers_nameArray[i].length() < 8)
                cout << "\t\t";
            else
                cout << "\t";

            if (connection_TypeArray[i] == 1)
                cout << "Domestic\t";
            else
                cout << "Commercial\t";

            if (active_StatusArray[i] == 1)
                cout << "Active  \t";
            else
                cout << "Inactive\t";

            cout << bill_m6[i] << " PKR";

            if (bill_m6[i] < 1000)
                cout << "\t\t";
            else
                cout << "\t";

            if (pay_stat6[i] == 1)
                cout << "PAID";
            else
                cout << "UNPAID";

            cout << endl;
        }
    }

    cout << "---------------------------------------------------------------------------------------------\n";
    cout << "\nEnd of Records. Press any key to return...";
    getch();
}

// ============================================================
//         3) ENTER MONTHLY READINGS
// ============================================================

void enterMonthlyReadings()
{
    system("cls");
    int searchId;
    cout << "====================================================\n";
    cout << "--- Enter Readings (Auto-Previous Cascading) ---\n";
    cout << "====================================================\n";
    cout << "Enter Consumer ID: ";
    cin >> searchId;

    int foundIndex = findConsumer(searchId);

    if (foundIndex == -1)
    {
        cout << "\n[!] Consumer ID not found.";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    if (active_StatusArray[foundIndex] == 0)
    {
        cout << "\n[Error] Inactive Consumer! Cannot enter readings.";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    int startMonth = 0;
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
    {
        cout << "\n[Info] All 6 months readings already entered for " << Consumers_nameArray[foundIndex] << ".";
        cout << "\nUse Option 4 to correct any existing reading.";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    cout << "\nConsumer: " << Consumers_nameArray[foundIndex] << endl;
    if (startMonth > 1)
        cout << "[Info] Months 1 to " << startMonth - 1 << " already entered. ";
    cout << "Starting from Month " << startMonth << ".\n";

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

    if (startMonth <= 1)
    {
        cout << "\n--- Month 1 --- (Prev: " << prev1[foundIndex] << ")\nEnter Current Reading: ";
        cin >> tempCurr;
        if (tempCurr >= prev1[foundIndex])
            curr1[foundIndex] = tempCurr;
        else
        {
            cout << "[!] Error! M1 skipped.\n";
            monthFailed = true;
        }
    }
    if (startMonth <= 2 && !monthFailed && curr1[foundIndex] != 0)
    {
        prev2[foundIndex] = curr1[foundIndex];
        cout << "\n--- Month 2 --- (Prev: " << prev2[foundIndex] << ")\nEnter Current Reading: ";
        cin >> tempCurr;
        if (tempCurr >= prev2[foundIndex])
            curr2[foundIndex] = tempCurr;
        else
        {
            cout << "[!] Invalid! M2 rejected.\n";
            curr2[foundIndex] = 0;
            monthFailed = true;
        }
    }
    if (startMonth <= 3 && !monthFailed && curr2[foundIndex] != 0)
    {
        prev3[foundIndex] = curr2[foundIndex];
        cout << "\n--- Month 3 --- (Prev: " << prev3[foundIndex] << ")\nEnter Current Reading: ";
        cin >> tempCurr;
        if (tempCurr >= prev3[foundIndex])
            curr3[foundIndex] = tempCurr;
        else
        {
            cout << "[!] Invalid! M3 rejected.\n";
            curr3[foundIndex] = 0;
            monthFailed = true;
        }
    }
    if (startMonth <= 4 && !monthFailed && curr3[foundIndex] != 0)
    {
        prev4[foundIndex] = curr3[foundIndex];
        cout << "\n--- Month 4 --- (Prev: " << prev4[foundIndex] << ")\nEnter Current Reading: ";
        cin >> tempCurr;
        if (tempCurr >= prev4[foundIndex])
            curr4[foundIndex] = tempCurr;
        else
        {
            cout << "[!] Invalid! M4 rejected.\n";
            curr4[foundIndex] = 0;
            monthFailed = true;
        }
    }
    if (startMonth <= 5 && !monthFailed && curr4[foundIndex] != 0)
    {
        prev5[foundIndex] = curr4[foundIndex];
        cout << "\n--- Month 5 --- (Prev: " << prev5[foundIndex] << ")\nEnter Current Reading: ";
        cin >> tempCurr;
        if (tempCurr >= prev5[foundIndex])
            curr5[foundIndex] = tempCurr;
        else
        {
            cout << "[!] Invalid! M5 rejected.\n";
            curr5[foundIndex] = 0;
            monthFailed = true;
        }
    }
    if (startMonth <= 6 && !monthFailed && curr5[foundIndex] != 0)
    {
        prev6[foundIndex] = curr5[foundIndex];
        cout << "\n--- Month 6 --- (Prev: " << prev6[foundIndex] << ")\nEnter Current Reading: ";
        cin >> tempCurr;
        if (tempCurr >= prev6[foundIndex])
            curr6[foundIndex] = tempCurr;
        else
        {
            cout << "[!] Invalid! M6 set to 0.\n";
            curr6[foundIndex] = 0;
        }
    }

    recalculateBills(foundIndex);

    // FILE HANDLING: Auto-save after entering readings
    saveAllDataToFile();
    appendLogEntry("Readings entered for Consumer ID: " + to_string(Consumers_IdArray[foundIndex]));

    if (monthFailed)
        cout << "\n[Warning] Some months not entered due to invalid readings.";
    else
        cout << "\n[Success] Readings recorded and bills updated correctly!";

    cout << "\n\nPress any key to return...";
    getch();
}

// ============================================================
//         4) UPDATE MONTHLY READING
// ============================================================

void updateMonthlyReading()
{
    system("cls");
    int searchId;
    cout << "--- Update / Correct Monthly Readings ---\n";
    cout << "Enter Consumer ID: ";
    cin >> searchId;

    int foundIndex = findConsumer(searchId);

    if (foundIndex == -1)
    {
        cout << "\n[!] Consumer ID not found.";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    int monthChoice;
    cout << "Consumer Found: " << Consumers_nameArray[foundIndex] << endl;
    cout << "Enter Month Number to Correct (1-6): ";
    cin >> monthChoice;

    if (monthChoice < 1 || monthChoice > 6)
    {
        cout << "\n[Error] Invalid Month!";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    bool exists = false;
    if (monthChoice == 1 && curr1[foundIndex] != 0)
        exists = true;
    else if (monthChoice == 2 && curr2[foundIndex] != 0)
        exists = true;
    else if (monthChoice == 3 && curr3[foundIndex] != 0)
        exists = true;
    else if (monthChoice == 4 && curr4[foundIndex] != 0)
        exists = true;
    else if (monthChoice == 5 && curr5[foundIndex] != 0)
        exists = true;
    else if (monthChoice == 6 && curr6[foundIndex] != 0)
        exists = true;

    if (!exists)
    {
        cout << "\n[!] Error: Record for Month " << monthChoice << " has not been entered yet.";
        cout << "\nPlease use Option 3 to enter a new record.";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    cout << "Current saved reading for Month " << monthChoice << " is being updated.\n";
    if (monthChoice == 1)
        cout << "Previous Current reading is :" << curr1[foundIndex] << endl;
    else if (monthChoice == 2)
        cout << "Previous Current reading is :" << curr2[foundIndex] << endl;
    else if (monthChoice == 3)
        cout << "Previous Current reading is :" << curr3[foundIndex] << endl;
    else if (monthChoice == 4)
        cout << "Previous Current reading is :" << curr4[foundIndex] << endl;
    else if (monthChoice == 5)
        cout << "Previous Current reading is :" << curr5[foundIndex] << endl;
    else
        cout << "Previous Current reading is :" << curr6[foundIndex] << endl;

    int correctedReading;
    cout << "Enter Corrected Reading: ";
    cin >> correctedReading;

    if (correctedReading < 0)
    {
        cout << "\n[Error] Invalid input!";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    if (monthChoice == 1)
    {
        curr1[foundIndex] = correctedReading;
        prev2[foundIndex] = curr1[foundIndex];
        if (curr2[foundIndex] != 0)
            prev3[foundIndex] = curr2[foundIndex];
        if (curr3[foundIndex] != 0)
            prev4[foundIndex] = curr3[foundIndex];
        if (curr4[foundIndex] != 0)
            prev5[foundIndex] = curr4[foundIndex];
        if (curr5[foundIndex] != 0)
            prev6[foundIndex] = curr5[foundIndex];
    }
    else if (monthChoice == 2)
    {
        curr2[foundIndex] = correctedReading;
        prev3[foundIndex] = curr2[foundIndex];
        if (curr3[foundIndex] != 0)
            prev4[foundIndex] = curr3[foundIndex];
        if (curr4[foundIndex] != 0)
            prev5[foundIndex] = curr4[foundIndex];
        if (curr5[foundIndex] != 0)
            prev6[foundIndex] = curr5[foundIndex];
    }
    else if (monthChoice == 3)
    {
        curr3[foundIndex] = correctedReading;
        prev4[foundIndex] = curr3[foundIndex];
        if (curr4[foundIndex] != 0)
            prev5[foundIndex] = curr4[foundIndex];
        if (curr5[foundIndex] != 0)
            prev6[foundIndex] = curr5[foundIndex];
    }
    else if (monthChoice == 4)
    {
        curr4[foundIndex] = correctedReading;
        prev5[foundIndex] = curr4[foundIndex];
        if (curr5[foundIndex] != 0)
            prev6[foundIndex] = curr5[foundIndex];
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

    recalculateBills(foundIndex);

    // FILE HANDLING: Auto-save after updating
    saveAllDataToFile();
    appendLogEntry("Reading corrected for Consumer ID: " + to_string(Consumers_IdArray[foundIndex]) + " Month: " + to_string(monthChoice));

    cout << "\n[Success] Record corrected and all dependent bills updated!";
    cout << "\n\nPress any key to return...";
    getch();
}

// ============================================================
//         5) MARK BILL PAID / UNPAID
// ============================================================

void markBillPaidUnpaid()
{
    system("cls");
    int searchId;
    cout << "====================================================\n";
    cout << "--- Mark Bill Paid / Unpaid (Cascading System) ---\n";
    cout << "====================================================\n";
    cout << "Enter Consumer ID: ";
    cin >> searchId;

    int foundIndex = findConsumer(searchId);

    if (foundIndex == -1)
    {
        cout << "\n[!] Consumer ID not found.";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    int monthChoice;
    cout << "\nConsumer Found: " << Consumers_nameArray[foundIndex] << endl;
    cout << "Enter Month Number (1-6) to update payment: ";
    cin >> monthChoice;

    if (monthChoice < 1 || monthChoice > 6)
    {
        cout << "\n[Error] Invalid Month! Please enter a value between 1 and 6.";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    bool hasReading = false;
    if (monthChoice == 1 && curr1[foundIndex] != 0)
        hasReading = true;
    else if (monthChoice == 2 && curr2[foundIndex] != 0)
        hasReading = true;
    else if (monthChoice == 3 && curr3[foundIndex] != 0)
        hasReading = true;
    else if (monthChoice == 4 && curr4[foundIndex] != 0)
        hasReading = true;
    else if (monthChoice == 5 && curr5[foundIndex] != 0)
        hasReading = true;
    else if (monthChoice == 6 && curr6[foundIndex] != 0)
        hasReading = true;

    if (!hasReading)
    {
        cout << "\n[Error] Month " << monthChoice << " has no readings entered yet. Cannot mark payment status.";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    int newStatus;
    cout << "Enter New Status (1 for PAID, 0 for UNPAID): ";
    cin >> newStatus;

    if (newStatus != 1 && newStatus != 0)
    {
        cout << "\n[Error] Invalid Status!";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    if (monthChoice == 1)
        pay_stat1[foundIndex] = newStatus;
    else if (monthChoice == 2)
        pay_stat2[foundIndex] = newStatus;
    else if (monthChoice == 3)
        pay_stat3[foundIndex] = newStatus;
    else if (monthChoice == 4)
        pay_stat4[foundIndex] = newStatus;
    else if (monthChoice == 5)
        pay_stat5[foundIndex] = newStatus;
    else if (monthChoice == 6)
        pay_stat6[foundIndex] = newStatus;

    if (newStatus == 1)
    {
        if (monthChoice >= 2)
            pay_stat1[foundIndex] = 1;
        if (monthChoice >= 3)
            pay_stat2[foundIndex] = 1;
        if (monthChoice >= 4)
            pay_stat3[foundIndex] = 1;
        if (monthChoice >= 5)
            pay_stat4[foundIndex] = 1;
        if (monthChoice >= 6)
            pay_stat5[foundIndex] = 1;
        cout << "\n[System Notice] All previous months marked as PAID automatically.";
    }

    recalculateBills(foundIndex);

    // FILE HANDLING: Auto-save after payment status change
    saveAllDataToFile();
    appendLogEntry("Payment status updated for Consumer ID: " + to_string(Consumers_IdArray[foundIndex]) + " Month: " + to_string(monthChoice) + " Status: " + to_string(newStatus));

    cout << "\n[Success] Status updated and all arrears recalculated!";
    cout << "\n\nPress any key to return...";
    getch();
}

// ============================================================
//         6) DISPLAY BILLING HISTORY (MANAGER)
// ============================================================

void displayBillingHistory()
{
    system("cls");
    int searchId;
    cout << "--- View Consumer Billing History ---\n";
    cout << "Enter Consumer ID: ";
    cin >> searchId;

    int foundIndex = findConsumer(searchId);

    if (foundIndex == -1)
    {
        cout << "\n[!] Error: Consumer ID " << searchId << " not found.";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    cout << "\nBilling History for: " << Consumers_nameArray[foundIndex] << " (ID: " << searchId << ")\n";
    cout << "-----------------------------------------------------------------------------\n";
    cout << "Month\tPrev Units\tCurr Units\tUnits Used\tBill Amount\tStatus\n";
    cout << "-----------------------------------------------------------------------------\n";

    int prevArr[6] = {prev1[foundIndex], prev2[foundIndex], prev3[foundIndex], prev4[foundIndex], prev5[foundIndex], prev6[foundIndex]};
    int currArr[6] = {curr1[foundIndex], curr2[foundIndex], curr3[foundIndex], curr4[foundIndex], curr5[foundIndex], curr6[foundIndex]};
    int usedArr[6] = {used_units1[foundIndex], used_units2[foundIndex], used_units3[foundIndex], used_units4[foundIndex], used_units5[foundIndex], used_units6[foundIndex]};
    float billArr[6] = {bill_m1[foundIndex], bill_m2[foundIndex], bill_m3[foundIndex], bill_m4[foundIndex], bill_m5[foundIndex], bill_m6[foundIndex]};
    int statArr[6] = {pay_stat1[foundIndex], pay_stat2[foundIndex], pay_stat3[foundIndex], pay_stat4[foundIndex], pay_stat5[foundIndex], pay_stat6[foundIndex]};

    for (int m = 0; m < 6; m++)
    {
        cout << "M" << m + 1 << "\t" << prevArr[m] << "\t\t" << currArr[m] << "\t\t"
             << usedArr[m] << "\t\t" << billArr[m] << "\t\t";
        if (statArr[m] == 1)
            cout << "Paid";
        else
            cout << "Unpaid";
        cout << endl;
    }
    cout << "-----------------------------------------------------------------------------\n";

    // FILE HANDLING: Export this consumer's billing history to a txt file
    exportBillingHistoryToFile(foundIndex);

    cout << "\n\nPress any key to return...";
    getch();
}

// ============================================================
//         7) SEARCH AND LISTINGS
// ============================================================

void searchAndListings()
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
        cout << "Enter Consumer ID: ";
        cin >> sid;
        int idx = findConsumer(sid);
        if (idx == -1)
        {
            cout << "\n[!] Error: Consumer ID " << sid << " not found.";
        }
        else
        {
            cout << "\n--- Full Consumer Record ---\n";
            cout << "Name: " << Consumers_nameArray[idx] << " | Meter #: " << meterNumber_Array[idx] << endl;
            cout << "Address: " << adress_Array[idx] << endl;

            if (connection_TypeArray[idx] == 1)
                cout << "Type: Domestic" << endl;
            else
                cout << "Type: Commercial" << endl;

            if (active_StatusArray[idx] == 1)
                cout << "Account Status: Active" << endl;
            else
                cout << "Account Status: Inactive" << endl;

            int lastMonth = getLastEnteredMonth(idx);
            if (lastMonth == 0)
            {
                cout << "--- Billing Summary ---\nNo readings entered yet.\n";
            }
            else
            {
                float lastBillArr[7] = {0, bill_m1[idx], bill_m2[idx], bill_m3[idx], bill_m4[idx], bill_m5[idx], bill_m6[idx]};
                int lastUnitsArr[7] = {0, used_units1[idx], used_units2[idx], used_units3[idx], used_units4[idx], used_units5[idx], used_units6[idx]};
                int lastStatArr[7] = {1, pay_stat1[idx], pay_stat2[idx], pay_stat3[idx], pay_stat4[idx], pay_stat5[idx], pay_stat6[idx]};

                cout << "--- Billing Summary (Month " << lastMonth << ") ---\n";
                cout << "Units Used: " << lastUnitsArr[lastMonth] << " | Total Bill: " << lastBillArr[lastMonth] << " PKR\n";

                if (lastStatArr[lastMonth] == 1)
                    cout << "Payment: Paid" << endl;
                else
                    cout << "Payment: UNPAID" << endl;
            }
        }
    }
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
            if (Consumers_IdArray[i] == 0)
                continue;
            bool isUnpaid = false;
            float amt = 0;
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
            if (isUnpaid)
            {
                cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i] << "\t\t" << amt << endl;
                found = true;
            }
        }
        if (!found)
            cout << "No unpaid bills found for this month.\n";
    }
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
            if (Consumers_IdArray[i] == 0)
                continue;
            float bill = 0;
            bool hasReading = false;
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
            if (hasReading && bill > threshold)
            {
                cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i] << "\tBill: " << bill << endl;
                found = true;
            }
        }
        if (!found)
            cout << "No records found above this threshold.\n";
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
            if (Consumers_IdArray[i] == 0)
                continue;
            int units = -1;
            if (m == 1 && curr1[i] != 0)
                units = used_units1[i];
            else if (m == 2 && curr2[i] != 0)
                units = used_units2[i];
            else if (m == 3 && curr3[i] != 0)
                units = used_units3[i];
            else if (m == 4 && curr4[i] != 0)
                units = used_units4[i];
            else if (m == 5 && curr5[i] != 0)
                units = used_units5[i];
            else if (m == 6 && curr6[i] != 0)
                units = used_units6[i];
            if (units == 0)
            {
                cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i] << endl;
                found = true;
            }
        }
        if (!found)
            cout << "No users found with zero consumption.\n";
    }

    cout << "\nPress any key to return...";
    getch();
}

// ============================================================
//         8) VALIDATE RECORDS
// ============================================================

void validateRecords()
{
    system("cls");
    int issuesFound = 0;
    cout << "====================================================\n";
    cout << "          SYSTEM DATA VALIDATION REPORT             \n";
    cout << "====================================================\n\n";

    for (int i = 0; i < Total_Consumers; i++)
    {
        if (Consumers_IdArray[i] == 0)
            continue;
        for (int j = i + 1; j < Total_Consumers; j++)
        {
            if (Consumers_IdArray[i] == Consumers_IdArray[j])
            {
                cout << "[!] CONFLICT: Duplicate ID " << Consumers_IdArray[i] << " at index " << i << " and " << j << endl;
                issuesFound++;
            }
        }
    }

    for (int i = 0; i < Total_Consumers; i++)
    {
        if (Consumers_IdArray[i] == 0)
            continue;
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
            cout << "[!] POLICY: Inactive consumer ID " << Consumers_IdArray[i] << " has usage.\n";
            issuesFound++;
        }

        if (curr6[i] != 0)
        {
            float expectedBill = (used_units6[i] * getRate(i)) * (1 + tax) + fixed_charges;
            if (pay_stat5[i] == 0)
                expectedBill += bill_m5[i];
            float diff = bill_m6[i] - expectedBill;
            if (diff > 0.1 || diff < -0.1)
            {
                cout << "[!] MISMATCH: Bill error for ID " << Consumers_IdArray[i] << " Stored: " << bill_m6[i] << " | Expected: " << expectedBill << endl;
                issuesFound++;
            }
        }
    }

    if (issuesFound == 0)
        cout << ">>> All checks passed! No data conflicts found.\n";
    else
        cout << "\n----------------------------------------------------\nTOTAL ISSUES DETECTED: " << issuesFound << endl;

    // FILE HANDLING: Log validation result
    appendLogEntry("Validation run. Issues found: " + to_string(issuesFound));

    cout << "\nPress any key to return to Manager Menu...";
    getch();
}

// ============================================================
//         9) GENERATE REPORTS
// ============================================================

void generateReports()
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
        cout << "\nMonth\tTotal Revenue\tUnpaid Amount\n";
        cout << "--------------------------------------\n";
        for (int m = 1; m <= 6; m++)
        {
            float totalRev = 0, totalUnpaid = 0;
            for (int i = 0; i < Total_Consumers; i++)
            {
                if (Consumers_IdArray[i] == 0)
                    continue;
                float currentBill = 0;
                int currentStat = 1;
                bool hasReading = false;
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
                if (hasReading)
                {
                    totalRev += currentBill;
                    if (currentStat == 0)
                        totalUnpaid += currentBill;
                }
            }
            cout << "M" << m << "\t" << totalRev << "\t\t" << totalUnpaid << endl;
        }

        // FILE HANDLING: Auto-export report after viewing
        exportReportToFile();
    }
    else if (rChoice == "2")
    {
        int m;
        cout << "Enter Month (1-6): ";
        cin >> m;
        float highestBill = -1, lowestBill = -1;
        int highID = 0, lowID = 0;
        bool firstFound = false;

        for (int i = 0; i < Total_Consumers; i++)
        {
            if (Consumers_IdArray[i] == 0)
                continue;
            float b = 0;
            bool hasReading = false;
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
            if (hasReading)
            {
                if (!firstFound)
                {
                    highestBill = lowestBill = b;
                    highID = lowID = Consumers_IdArray[i];
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
                }
            }
        }
        cout << "\n--- Month " << m << " Report ---\n";
        if (!firstFound)
            cout << "No readings found for this month.\n";
        else
        {
            cout << "Highest Bill: " << highestBill << " PKR (Consumer ID: " << highID << ")\n";
            cout << "Lowest Bill: " << lowestBill << " PKR (Consumer ID: " << lowID << ")\n";
        }
    }
    else if (rChoice == "3")
    {
        cout << "\nID\tName\t\tTotal Units\tTotal Billed\n";
        cout << "----------------------------------------------------\n";
        for (int i = 0; i < Total_Consumers; i++)
        {
            if (Consumers_IdArray[i] == 0)
                continue;
            int totalU = used_units1[i] + used_units2[i] + used_units3[i] + used_units4[i] + used_units5[i] + used_units6[i];
            float totalB = bill_m1[i] + bill_m2[i] + bill_m3[i] + bill_m4[i] + bill_m5[i] + bill_m6[i];
            cout << Consumers_IdArray[i] << "\t" << Consumers_nameArray[i];
            if (Consumers_nameArray[i].length() < 8)
                cout << "\t\t";
            else
                cout << "\t";
            cout << totalU << "\t\t" << totalB << endl;
        }
    }
    else if (rChoice == "4")
    {
        int m;
        cout << "Enter Month (1-6): ";
        cin >> m;
        int lowCount = 0, highCount = 0;
        for (int i = 0; i < Total_Consumers; i++)
        {
            if (Consumers_IdArray[i] == 0)
                continue;
            int u = -1;
            if (m == 1 && curr1[i] != 0)
                u = used_units1[i];
            else if (m == 2 && curr2[i] != 0)
                u = used_units2[i];
            else if (m == 3 && curr3[i] != 0)
                u = used_units3[i];
            else if (m == 4 && curr4[i] != 0)
                u = used_units4[i];
            else if (m == 5 && curr5[i] != 0)
                u = used_units5[i];
            else if (m == 6 && curr6[i] != 0)
                u = used_units6[i];
            if (u >= 0)
            {
                if (u <= 200)
                    lowCount++;
                else
                    highCount++;
            }
        }
        cout << "\n--- Slab Category Count (Month " << m << ") ---\n";
        cout << "Slab 1 (Units <= 200): " << lowCount << " Consumers\n";
        cout << "Slab 2 (Units > 200):  " << highCount << " Consumers\n";
    }

    cout << "\nPress any key to return to Manager Menu...";
    getch();
}

// ============================================================
//         10) CHANGE ACCOUNT STATUS
// ============================================================

void changeAccountStatus()
{
    system("cls");
    int searchId;
    cout << "====================================================\n";
    cout << "--- Change Consumer Account Status (Active/In) ---\n";
    cout << "====================================================\n";
    cout << "Enter Consumer ID: ";
    cin >> searchId;

    int foundIndex = findConsumer(searchId);

    if (foundIndex == -1)
    {
        cout << "\n[!] Error: Consumer ID " << searchId << " not found.";
        cout << "\n\nPress any key to return...";
        getch();
        return;
    }

    cout << "\nConsumer: " << Consumers_nameArray[foundIndex] << endl;
    if (active_StatusArray[foundIndex] == 1)
        cout << "Current Status: ACTIVE" << endl;
    else
        cout << "Current Status: INACTIVE" << endl;

    int newStat;
    cout << "\nEnter New Status (1 for ACTIVE, 0 for INACTIVE): ";
    cin >> newStat;

    if (newStat == 1 || newStat == 0)
    {
        active_StatusArray[foundIndex] = newStat;
        if (newStat == 1)
            cout << "\n[Success] Account status updated to ACTIVE.";
        else
            cout << "\n[Success] Account status updated to INACTIVE.";

        // FILE HANDLING: Auto-save after status change
        saveAllDataToFile();
        appendLogEntry("Account status changed for Consumer ID: " + to_string(Consumers_IdArray[foundIndex]) + " New Status: " + to_string(newStat));
    }
    else
    {
        cout << "\n[Error] Invalid Input! Use 1 or 0.";
    }

    cout << "\n\nPress any key to return...";
    getch();
}

// ============================================================
//              CONSUMER PORTAL
// ============================================================

void consumerPortal()
{
    system("cls");
    int id;
    cout << "\n====================================\n";
    cout << "          CONSUMER PORTAL           \n";
    cout << "====================================\n";
    cout << "Enter your Consumer ID to login: ";
    cin >> id;

    int foundIndex = findConsumer(id);

    if (foundIndex == -1)
    {
        cout << "\n[!] Error: Consumer ID " << id << " not found in our records.\n";
        cout << "Press Any key to continue...";
        getch();
        return;
    }

    // FILE HANDLING: Log consumer login
    appendLogEntry("Consumer logged in. ID: " + to_string(id));

    string consumerChoice;
    while (true)
    {
        system("cls");
        cout << "\n--- Welcome, " << Consumers_nameArray[foundIndex] << " ---\n";
        cout << "1. View Current Bill (Latest Month)\n";
        cout << "2. View 6-Month Billing History\n";
        cout << "3. View My Account Details\n";
        cout << "4. Go Back To Main Menu\n";
        cout << "5. Logout\n";
        cout << "Choose option: ";
        cin >> consumerChoice;

        if (consumerChoice == "1")
            viewCurrentBill(foundIndex);
        else if (consumerChoice == "2")
            viewBillingHistory(foundIndex);
        else if (consumerChoice == "3")
            viewAccountDetails(foundIndex);
        else if (consumerChoice == "4" || consumerChoice == "5")
        {
            appendLogEntry("Consumer logged out. ID: " + to_string(id));
            cout << "Logging out...\n";
            break;
        }
        else
            cout << "Invalid Option! Try again.\n";
    }
}

// --- Consumer: View Latest Bill ---
void viewCurrentBill(int foundIndex)
{
    system("cls");
    int lastMonth = getLastEnteredMonth(foundIndex);

    if (lastMonth == 0)
    {
        cout << "\n>>> LATEST BILL <<<\n";
        cout << "No readings have been entered for your account yet.\n";
    }
    else
    {
        float lastBillArr[7] = {0, bill_m1[foundIndex], bill_m2[foundIndex], bill_m3[foundIndex], bill_m4[foundIndex], bill_m5[foundIndex], bill_m6[foundIndex]};
        int lastUnitsArr[7] = {0, used_units1[foundIndex], used_units2[foundIndex], used_units3[foundIndex], used_units4[foundIndex], used_units5[foundIndex], used_units6[foundIndex]};
        int lastStatArr[7] = {1, pay_stat1[foundIndex], pay_stat2[foundIndex], pay_stat3[foundIndex], pay_stat4[foundIndex], pay_stat5[foundIndex], pay_stat6[foundIndex]};

        cout << "\n>>> LATEST BILL (MONTH " << lastMonth << ") <<<\n";
        cout << "Units Consumed: " << lastUnitsArr[lastMonth] << endl;
        cout << "Total Amount (Inc. Taxes & Arrears): " << lastBillArr[lastMonth] << " PKR\n";

        if (lastStatArr[lastMonth] == 1)
            cout << "Status: PAID" << endl;
        else
            cout << "Status: UNPAID" << endl;

        // FILE HANDLING: Export bill receipt when consumer views bill
        exportBillReceiptToFile(foundIndex);
    }

    cout << "\nPress Any key to go back...";
    getch();
}

// --- Consumer: View 6-Month History ---
void viewBillingHistory(int foundIndex)
{
    system("cls");
    cout << "\n>>> 6-MONTH BILLING HISTORY <<<\n";
    cout << "Month\tBill Amount\tStatus\n";
    cout << "--------------------------------\n";

    float billArr[6] = {bill_m1[foundIndex], bill_m2[foundIndex], bill_m3[foundIndex], bill_m4[foundIndex], bill_m5[foundIndex], bill_m6[foundIndex]};
    int statArr[6] = {pay_stat1[foundIndex], pay_stat2[foundIndex], pay_stat3[foundIndex], pay_stat4[foundIndex], pay_stat5[foundIndex], pay_stat6[foundIndex]};

    for (int m = 0; m < 6; m++)
    {
        cout << "M" << m + 1 << "\t" << billArr[m] << " PKR\t";
        if (statArr[m] == 1)
            cout << "Paid";
        else
            cout << "Unpaid";
        cout << endl;
    }

    cout << "\nPress Any key to go back...";
    getch();
}

// --- Consumer: View Account Details ---
void viewAccountDetails(int foundIndex)
{
    system("cls");
    cout << "\n>>> ACCOUNT DETAILS <<<\n";
    cout << "Consumer ID: " << Consumers_IdArray[foundIndex] << endl;
    cout << "Meter Number: " << meterNumber_Array[foundIndex] << endl;
    cout << "Address: " << adress_Array[foundIndex] << endl;

    if (connection_TypeArray[foundIndex] == 1)
        cout << "Connection: Domestic" << endl;
    else
        cout << "Connection: Commercial" << endl;

    if (active_StatusArray[foundIndex] == 1)
        cout << "Account Status: Active" << endl;
    else
        cout << "Account Status: Inactive" << endl;

    cout << "\nPress Any key to go back...";
    getch();
}