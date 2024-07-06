#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int k = 0;
    cin >> k;
    int a[k];
    int b[k];
    for(int i = 0; i <k; i++){
        cin >> a[i];
    }
    for(int i = 0; i <k; i++){
        cin >> b[i];
    }
    sort(a, a+k);
    sort(b, b+k, greater<>());

    int result = 0;

    for(int i = 0; i<k; i++){
        result += a[i] * b[i];
    }

    cout << result; 

    return 0;
}