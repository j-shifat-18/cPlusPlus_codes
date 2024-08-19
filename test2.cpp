#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n = 0;
    int z = 0;
    int length;
    cin >> length;

    char chars[length + 1];
    cin >> chars;

    for (int i = 0; i < length; i++) {
        if (chars[i] == 'n') {
            n++;
        }
        if (chars[i] == 'z') {
            z++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "1 ";
    }
    for (int i = 0; i < z; i++) {
        cout << "0 ";
    }

    return 0;
}
