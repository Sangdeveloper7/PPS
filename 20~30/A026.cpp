#include <string>

using namespace std;

bool solution(int x) {
    int sum = 0;
    int num = x;
    
    while(num>0){
        sum += num%10;
        num = num/10;
    }
    if(x%sum == 0){
        return true;
    }else{
        return false;
    }    
}