#include <iostream>
using namespace std;
void letter_check(char letter);
int main()
{
    char letter;
    cout << "Enter  a character (A/a) :";
    cin >> letter;
    letter_check(letter);

    return 0;
}
void letter_check(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
    {
        cout << "You have entered Capital " << letter;
    }
    else
    {
        cout << "You have entered Small " << letter;
    }
}