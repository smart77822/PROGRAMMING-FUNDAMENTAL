#include <iostream>
#include <string>
using namespace std;
void displayWorld(string blocks[5][5]);
bool setGravityStatus();
void time_ticks(string blocks[5][5]);

bool gravity;
int main()
{
    string blocks[5][5] = {
        {"-", "#", "#", "-", "#"},
        {"#", "-", "-", "#", "-"},
        {"-", "#", "-", "-", "-"},
        {"#", "-", "#", "-", "#"},
        {"#", "-", "-", "-", "-"}};
    displayWorld(blocks);
    setGravityStatus();
    time_ticks(blocks);
    displayWorld(blocks);

}
void displayWorld(string blocks[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << blocks[i][j] << " ";
        }
        cout << endl;
    }
}

bool setGravityStatus()
{

    cout << "Gravity Status : (1 / 0)";
    cin >> gravity;
    return gravity;
}

void time_ticks(string blocks[5][5])
{
    int timeticks;
    cout << "Enter timeTick start from Base (1/2/3/4/5) :";
    cin >> timeticks;
    for (int i = timeticks; i <= 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (j == (i - 1))
                {
                    blocks[timeticks][j] = "-";
                }
            }
           
        }
    }
}