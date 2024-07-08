#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    int total = 0;

    for(int i = 0; i < a; i++){
        int k = 0;
        cin >> k;
        total += k;
    }
    total = total - a;
    total = total + 1;

    cout << total;


    return 0; 
}