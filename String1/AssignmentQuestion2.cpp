#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter length of the string: ";
    cin >> n;

    string s;
    cout << "Enter the string: ";
    cin >> s;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
            count++;
        }
    }

    cout << "Number of consonants: " << count << endl;
    return 0;
}
