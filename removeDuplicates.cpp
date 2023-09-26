class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last_occurrence(26, -1);
        vector<bool> in_stack(26, false);
        stack<char> stk;

        for (int i = 0; i < s.size(); i++) {
            last_occurrence[s[i] - 'a'] = i;
        }

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (!in_stack[c - 'a']) {
                while (!stk.empty() && c < stk.top() && last_occurrence[stk.top() - 'a'] > i) {
                    in_stack[stk.top() - 'a'] = false;
                    stk.pop();
                }

                stk.push(c);
                in_stack[c - 'a'] = true;
            }
        }

        string result = "";
        while (!stk.empty()) {
            result = stk.top() + result;
            stk.pop();
        }

        return result;
    }
};
