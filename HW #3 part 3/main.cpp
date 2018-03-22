#include <iostream>

using namespace std;

bool isPal (const string &str, int start, int end){

    if (start >= end)
        return true;
    if (str[start] != str[end])
        return false;
    return isPal (str, ++start, --end);
}
int main() {

    isPal (str, 0, str.length()-1);

    return 0;
}