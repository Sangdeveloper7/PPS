#include <iostream>

using namespace std;

int main(){
    int time;
    int y = 0;
    int m = 0;

    cin >> time;
    
    int time_arr[time];
    
    for(int i=0; i<time; i++){
         cin >> time_arr[i];
    }
    


    for(int i=0; i<time; i++){
        bool flagy = true;
        bool flagm = true;
        y += 10;
        m += 15;
        y += (time_arr[i]/30) * 10;
        if((time_arr[i]/30) > 0){
            flagy = false;

        }
        if((time_arr[i]/60) > 0){
            flagm = false;
            
        }
        if(time_arr[i] % 30 == 0 && flagy){
            y = y-10;
        }

        m += (time_arr[i]/60) * 15;
        if(time_arr[i] % 60 == 0 && flagm){
            m = m-15;
        }
    }

    if(y > m){
        cout << "M " << m;
        
    }else if(y < m){
        cout << "Y " << y;
    }else{
        cout << "Y " << "M " << m;
    }



    return 0; 
}