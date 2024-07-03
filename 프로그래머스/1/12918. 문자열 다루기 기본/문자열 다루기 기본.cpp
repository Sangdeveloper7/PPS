#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    bool length = false;
    bool number = true;
    
    if(s.length() == 4 || s.length() == 6){
        length = true;
    }
    
    for(int i = 0; i<s.length(); i++){
        if(isdigit(s[i]) == 0){
            number = false;
        }
    }
    
    if(length == true && number == true){
        answer = true;
    }else{
        answer = false;
    }
    return answer;
}