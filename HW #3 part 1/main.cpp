#include <iostream>

using namespace std;

int main() {

    int n, rN = 0, rE;

    cout << "Enter an integer: ";

    cin >> n;

    while (n != 0){
        rE = n%10;
        rN = rN*10 + rE;
        n /=10;
    }

    cout << "Reversed Number = " << rN;

    return 0;
}