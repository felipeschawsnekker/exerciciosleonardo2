#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    string a = "Try again";
    string b = "The lower number is: ";
    string c = "The greater number is: ";
    string d = " ,therefore, the square is: ";
    string e = " ,therefore, the sqrt is: ";

    cout << "Number one: ";
    if (!(cin >> num1)) {
        cout << a;
        return 0;
    }

    cout << "Number two: ";
    if (!(cin >> num2)) {
        cout << a;
        return 0;
    }

    int i;
    if (num1 > num2) {
        i = 1;
    }
    else if (num1 < num2) {
        i = 0;
    }
    else {
        cout << num1 << " and " << num2 << " are equal.\n";
        return 0;
    }

    double greater, lower;
    if (i == 1) {
        greater = num1;
        lower = num2;
        double two2 = pow(lower, 2);

        if (greater > 0) {
            double two1 = sqrt(greater);
            cout << c << greater << e << two1 << endl;
        }
        else {
            cout << "Impossible to do that (sqrt of a non-positive number)" << endl;
        }

        cout << b << lower << d << two2 << endl;
    }
    else {
        greater = num2;
        lower = num1;
        double two2 = pow(lower, 2);

        if (greater > 0) {
            double two1 = sqrt(greater);
            cout << c << greater << e << two1 << endl;
        }
        else {
            cout << "Impossible to do that (sqrt of a non-positive number)" << endl;
        }

        cout << b << lower << d << two2 << endl;
    }

    return 0;
}
