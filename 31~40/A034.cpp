#include <iostream>

using namespace std;

int main(){
    int a[10];
    int k[42] = {0};
    for(int i = 0; i<10; i++)
    {
        cin >> a[i];
        k[a[i] % 42]++;
    }
    int count = 0;
    for(int j = 0; j<42; j++){
        if(k[j] > 0){
            count++;
        }
    }
    cout << count;
    return 0;
}