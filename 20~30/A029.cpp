#include <iostream>
using namespace std;

int main(){
    int door_count = 0;
    int start = 0;

    cin >> door_count;
    cin >> start;  

    if(door_count > 6){
         cout << "Love is open door";
    }else if(door_count <=6){
        for(int i = 1; i<door_count; i++){
            if(start == 1){
                cout << "0" << "\n";
                start = 0;
            }else{
                cout << "1" << "\n";
                start = 1 ;
            }
         }
    }

    return 0;
}