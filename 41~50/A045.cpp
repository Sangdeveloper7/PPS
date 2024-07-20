#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int freq[26] = {0};
    for (char c : str) 
        freq[toupper(c) - 'A']++;
    
    auto max_it = max_element(freq, freq + 26);
    int max_count = *max_it;
    int max_index = max_it - freq;
    
    cout << (count(freq, freq + 26, max_count) > 1 ? '?' : char(max_index + 'A'));
    
    return 0;
}