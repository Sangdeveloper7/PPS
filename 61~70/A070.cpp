#include <iostream>
#include <queue>

using namespace std;
queue <int> q;

int main(){
    int i;
    int n, k;
    cin >> n >> k;
    for (i = 1; i <= n; i++)
        q.push(i);
    while(q.size() > 1){
        q.pop();
        int inst = q.front();
        q.push(inst);
        q.pop();
    }
    cout << q.front();
    return 0;
}