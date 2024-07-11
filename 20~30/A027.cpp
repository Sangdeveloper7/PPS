#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(string number, int k) {
    vector<char> stack;
    int n = number.size();
    
    for(int i = 0; i < n; ++i) {
        while(!stack.empty() && stack.back() < number[i] && k > 0) {
            stack.pop_back();
            --k;
        }
        stack.push_back(number[i]);
    }
    
    while(k > 0) {
        stack.pop_back();
        --k;
    }
    
    string answer(stack.begin(), stack.end());
    return answer;
}
