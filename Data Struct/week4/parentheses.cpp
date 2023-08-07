#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalancedParentheses(const string &input) {
    stack<char> s;
    for (char c : input) {
        if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            if (s.empty()) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string input;

    getline(cin, input);

    bool check = isBalancedParentheses(input);
    string ans = "NO";

    if(check) {
        ans = "YES";
    } 
    cout << ans;
}
