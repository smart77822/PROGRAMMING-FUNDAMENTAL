#include <iostream>
#include <string>

using namespace std;

void toMillimeters(float l, float w, float h);
void toCentimeters(float l, float w, float h);
void toMeters(float l, float w, float h);
void toKilometers(float l, float w, float h);

int main()
{
    float length, width, height;
    string unit;

    cout << "Enter length, width, height (in meters): ";
    cin >> length >> width >> height;

    cout << "Enter output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    if (unit == "millimeters")
    {
        toMillimeters(length, width, height);
    }
    else if (unit == "centimeters")
    {
        toCentimeters(length, width, height);
    }
    else if (unit == "meters")
    {
        toMeters(length, width, height);
    }
    else if (unit == "kilometers")
    {
        toKilometers(length, width, height);
    }
    else
    {
        cout << "Invalid unit entered." << endl;
    }

    return 0;
}

void toMillimeters(float l, float w, float h)
{
    float volume = (l * w * h) / 3.0f;
    float result = volume * 1000000000.0f;
    cout << result << " cubic millimeters" << endl;
}

void toCentimeters(float l, float w, float h)
{
    float volume = (l * w * h) / 3.0f;
    float result = volume * 1000000.0f;
    cout << result << " cubic centimeters" << endl;
}

void toMeters(float l, float w, float h)
{
    float result = (l * w * h) / 3.0f;
    cout << result << " cubic meters" << endl;
}

void toKilometers(float l, float w, float h)
{
    float volume = (l * w * h) / 3.0f;
    float result = volume / 1000000000.0f;
    cout << result << " cubic kilometers" << endl;
}