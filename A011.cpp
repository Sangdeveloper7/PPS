#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int i, n;
bool compare(vector<double>a, vector<double>b) {
    if(a[1] == b[1]) {
        return a[0] < b[0];
    }
    return a[1] > b[1];
}
vector<int> solution(int N, vector<int> stages) {
    n = N;
    vector<int> answer;
    vector<vector<double>> failed;
    for(i=1; i<=N; i++) {
        double count = i;
        double failed_player = count_if(stages.begin(), stages.end(), [](int e){return e==i;});
        double clear_player = count_if(stages.begin(), stages.end(), [](int e){return e>=i;});
        vector<double> temp;
        temp.push_back(count);
        temp.push_back(clear_player != 0 ? failed_player/clear_player : 0);
        failed.push_back(temp);
    }
    sort(failed.begin(), failed.end(), compare);
    for(auto & u: failed) {
        answer.push_back(u[0]);
    }
    return answer;
}