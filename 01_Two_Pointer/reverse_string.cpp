#include <iostream>
#include <string>
using namespace std;

string reverseString(string s) {
    int i = 0, j = s.length() - 1;

    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

int main() {
    string str = "Mayank";
    cout << "Reverse: " << reverseString(str) << endl;
    return 0;
}