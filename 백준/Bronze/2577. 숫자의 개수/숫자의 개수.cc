#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int result[10];

    for(int i =0; i<10; i++){
        result[i] = 0;
    }
    cin >> a;
    cin >> b;
    cin >> c;

    int total = a * b * c;

    while(total > 10){
        int k = total % 10;
        result[k]++;
        total /= 10;
    }
    result[total]++;

    for(int i=0; i<10; i++){
        cout << result[i] << "\n";
    }
    return 0; 
}