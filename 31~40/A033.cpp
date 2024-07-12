#include <iostream>

using namespace std;

int main(){
    int arr[5][4];
    
    for(int i =0; i<5; i++){
        for(int j = 0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    int max = 0;
    int line = 0;
    for(int i =0; i<5; i++){
        int total = 0;
        for(int j = 0; j<4; j++){
            total += arr[i][j];
        }
        if(max < total){
            max = total;
            line = i;
        }
        total = 0;
    }
    line = line + 1;
    cout << line << " " << max;
    return 0;
}