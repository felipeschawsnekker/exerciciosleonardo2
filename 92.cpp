#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c;

    cout << "Os 10 primeiros números de Fibonacci:" << endl;
    cout << a << " " << b << " ";

    for (int i = 2; i < 10; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}
