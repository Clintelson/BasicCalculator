#include <iostream>
#include <string>
using namespace std;

int main() {

    int n1, n2, sum;
    string arth;
    string arth;

    cout << ": ";
    cin >> n1 >> arth >> n2;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n')
    }

    if (arth == "+") {

        sum = n1 + n2;
        cout << "= " << sum;

    }
    else if (arth == "-") {

        sum = n1 - n2;
        cout << "=" << sum << endl;

    }
    else if (arth == "×") {

        sum = n1 * n2;
        cout << "=" << sum << endl;

    }
    else if (arth == "÷") {
        if (n2 == 0) {
            cout << "" << endl;
        }

        sum = n1 / n2;
        cout << "=" << sum << endl;
    }

    return 0;
}