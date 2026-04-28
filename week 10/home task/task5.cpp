#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience) {
    float bonusPercentage = 0;

    if (score >= 90) {
        bonusPercentage = 20;
    } else if (score >= 75) {
        bonusPercentage = 10;
    } else {
        bonusPercentage = 5;
    }

    if (experience >= 5) {
        bonusPercentage += 5;
    }

    float totalBonus = (bonusPercentage / 100) * base;
    return base + totalBonus;
}

int main() {
    float base;
    int score, experience;

    cout << "Enter base, score and experience in years: " << endl;
    cin >> base >> score >> experience;

    float finalSalary = calculateSalary(base, score, experience);

    cout << "Final Salary: " << finalSalary << endl;

    return 0;
}