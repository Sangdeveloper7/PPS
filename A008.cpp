#include <iostream>

using namespace std;

int main() {
    int f = 0;
    cin >> f;

    for (int i = 0; i < f; i++) {
        int number;
        int up_avg = 0;
        int total = 0;
        
        cin >> number;
        int student[number];
        for (int j = 0; j < number; j++) {
            cin >> student[j];
            total += student[j];
        }
        float avg = (float)total / (float)number;
        for (int j = 0; j < number; j++) {
            if (avg < (float)student[j]) {
                up_avg++;
            }
        }

        float result = (float)up_avg / (float)number * 100;

        cout.precision(3);
        cout << fixed << result << "%" << endl;
    }

    return 0;
}
