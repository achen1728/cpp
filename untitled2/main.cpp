#include <iostream>

using namespace std;
int main()

{

    int m;

    cin >> m;

    if (m >= 90) {
        cout << "A" << endl;
    }
    else if (m >= 80) {
        if (m < 90){
            cout << "B" <<endl;
        }
    }
    else if (m >= 70){
        if (m < 80){
            cout << "C" << endl;
        }
    }
    else if (m >= 60){
        if (m < 70){
            cout << "D" << endl;
        }
    }
    else{
        cout << "F" << endl;
    }
    return 0;
}

