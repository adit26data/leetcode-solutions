int speed_up = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) 
    {
        int max_length = 0;
    vector<int> max_subsequence;
    for (int i = 0; i < n; ++i) {
        vector<int> subsequence = {i};
        for (int j = i + 1; j < n; ++j) {
            if (groups[j] != groups[subsequence.back()]) {
                subsequence.push_back(j);
            }
        }
        if (subsequence.size() > max_length) {
            max_length = subsequence.size();
            max_subsequence = subsequence;
        }
    }
    vector<string> result;
    for (int i : max_subsequence) {
        result.push_back(words[i]);
    }
    
    return result;
        
    }
};
