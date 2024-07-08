#include <iostream>
using namespace std;

int main(){
    int total = 0;
    int in = 0;
    int out = 0;
    int max = 0;

    for(int i=0; i<4; i++){
        cin >> out >> in;
        total = total + in;
        total = total - out;
        if(total > max){
            max = total;
        }
        in = 0;
        out = 0;
    }

    cout << max;


    return 0; 
}