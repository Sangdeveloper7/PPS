#include <iostream>

using namespace std;

int main(){
    int a[8];
    
    for(int i=0; i<8; i++){
            cin >> a[i];
    }
    
    int as = 0;
    int ds = 0;
    
    for(int i=0; i<7; i++){
        if(a[i] < a[i+1]){
            as = 1;
        }else if(a[i] > a[i+1]){
            ds = 1;
        }
    }
    if(as == 1 && ds == 1){
        cout << "mixed";
    }
    else if(as == 1){
        cout << "ascending";
    }else if(ds == 1){
        cout << "descending";
    }
    
    
    return 0;
}