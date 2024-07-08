#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;

    int arr[10] = {0};

    for (char c : str) {
        arr[c - '0']++;
    }

    int maxCount = 0;

    for (int i = 0; i < 10; i++) {
        if (i != 6 && i != 9) {
            maxCount = max(maxCount, arr[i]);
        }
    }

    int result = max(maxCount, (arr[6] + arr[9] + 1) / 2);

    cout << result;

    return 0;
}