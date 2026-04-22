#include <iostream>
#include <string>

using namespace std;

string calculatePoolState(int V, int P1, int P2, float H) {
    float totalWater = (P1 + P2) * H;

    if (totalWater <= V) {
        int poolPercent = (totalWater / V) * 100;
        int pipe1Percent = ((P1 * H) / totalWater) * 100;
        int pipe2Percent = ((P2 * H) / totalWater) * 100;

        return "The pool is " + to_string(poolPercent) + "% full. Pipe 1: " + 
               to_string(pipe1Percent) + "%. Pipe 2: " + to_string(pipe2Percent) + "%.";
    } else {
        float overflow = totalWater - V;
        
        string hStr = to_string(H);
        hStr = hStr.substr(0, hStr.find(".") + 2);
        
        return "For " + hStr + " hours the pool overflows with " + 
               to_string((int)overflow) + " liters.";
    }
}

int main() {
    int volume, p1, p2;
    float hours;

    cout << "Enter volume of the pool in liters: ";
    cin >> volume;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> p1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> p2;
    cout << "Enter hours that the worker is absent: ";
    cin >> hours;

    cout << calculatePoolState(volume, p1, p2, hours) << endl;

    return 0;
}