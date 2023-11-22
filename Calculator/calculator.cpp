#include <iostream>
#include <string>
using namespace std;

int main() {

    float frstn, scndn, set;
    char oprtr;
    string npt;
    
    cout << "" << endl;
    cout << "BASIC CALCULATOR" << endl;
    cout << " _______________" << endl;
    cout << "| > ";
    getline(cin, npt);


    if (sscanf(npt.c_str(), "%f %c %f", &frstn, &oprtr, &scndn) != 3) {

        cout << "| Oops! Something went wrong." << endl;

    }

    if (npt.empty()) {

        cout << "| Oops! Input is empty. |" << endl;

    }

    else {
        switch (oprtr) {

        case '+':

            set = frstn + scndn;
            break;

        case '-':
            set = frstn - scndn;
            break;

        case '*':
            set = frstn * scndn;
            break;

        case '/':
            if (scndn == 0) {

                cout << "| Dividend cannot divide by zero!" << endl;

            }
            else {

                set = frstn / scndn;

            }
            break;

        default:

            cout << "| Invalid operator! e.g (+, -, *, /)." << endl;

        }
    }
    
    cout << "| = " << set << "          |" << endl;
    cout << "|               |" << endl;
    cout << "_________________" << endl;
    cout << "| 7 | 8 | 9 | + |" << endl;
    cout << "|---|---|---|---|" << endl;
    cout << "| 4 | 5 | 6 | - |" << endl;
    cout << "|---|---|---|---|" << endl;
    cout << "| 1 | 2 | 3 | * |" << endl;
    cout << "|---|---|---|---|" << endl;
    cout << "| 0 | . | = | / |" << endl;
    cout << "-———————————————— " << endl;
    return 0;
}
