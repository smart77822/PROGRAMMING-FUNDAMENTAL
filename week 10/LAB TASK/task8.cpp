#include <iostream>
#include <cmath>
using namespace std;

void solveQuadratic(double a, double b, double c);
int main()

{
    double a, b, c;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "Not a quadratic equation." << endl;
    }
    else
    {
        solveQuadratic(a, b, c);
    }

    return 0;
}
void solveQuadratic(double a, double b, double c)
{
    double discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant > 0)
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two real and distinct roots:\n";
        cout << "x1 = " << root1 << ", x2 = " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);
        cout << "One real root (repeated):\n";
        cout << "x = " << root << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Complex roots:\n";
        cout << "x1 = " << realPart << " + " << imagPart << "i\n";
        cout << "x2 = " << realPart << " - " << imagPart << "i\n";
    }
}
    