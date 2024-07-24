class Solution {
public:
    bool isValid(string s) {
        stack<char> q;
        for (char ch : s)
            if (ch == '(' || ch == '{' || ch == '[') q.push(ch);
            else
            {
                if (q.empty() ||
                (ch == ')' && q.top() != '(') ||
                (ch == '}' && q.top() != '{') ||
                (ch == ']' && q.top() != '['))
                {
                    return false;
                }
                q.pop();
            }
        return q.empty();
    }
};