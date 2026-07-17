class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> stringStack;

        string curr = "";
        int num = 0;

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            else if (s[i] == '[') {
                countStack.push(num);
                stringStack.push(curr);

                num = 0;
                curr = "";
            }

            else if (isalpha(s[i])) {
                curr += s[i];
            }

            else if (s[i] == ']') {

                int repeat = countStack.top();
                countStack.pop();

                string prev = stringStack.top();
                stringStack.pop();

                string temp = "";

                while (repeat--) {
                    temp += curr;
                }

                curr = prev + temp;
            }
        }

        return curr;
    }
};