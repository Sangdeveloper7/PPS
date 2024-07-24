class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> points;
        for (auto& op : ops) {
            if (op.compare("+") == 0) {
                int a = points[points.size()-1];
                int b = points[points.size()-2];
                points.push_back(a+b);
            }
            else if (op.compare("D") == 0) {
                points.push_back(points.back() * 2);
            }
            else if (op.compare("C") == 0) {
                points.pop_back();
            }
            else {
                points.push_back(stoi(op));
            }
        }
        return reduce(points.begin(), points.end());
    }
};