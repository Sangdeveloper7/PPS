#include <iostream>

using namespace std;

int main(){
    int arr[5];
    int total = 0;
    
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    for(int i=0; i<5; i++){
        total += arr[i]*arr[i];
    }
    total = total % 10;
    
    cout << total;
    return 0;
}