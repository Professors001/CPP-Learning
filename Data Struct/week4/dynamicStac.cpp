#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class DynamicStack {
    private:
        vector<T> stackData;

    public:
        void push(const T& value) {
            stackData.push_back(value);
        }

        void pop() {
            if (!isEmpty()) {
                stackData.pop_back();
            }
        }

        const T& top() const {
            if (!isEmpty()) {
                return stackData.back();
            }
            throw runtime_error("EMPTY");
        }

        bool isEmpty() const {
            return stackData.empty();
        }

        size_t size() const {
            return stackData.size();
        }
};

int main() {
    DynamicStack<int> stack;

    int n, temp;
    cin >> n;
    
    vector<string> output;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp == 1) {
            cin >> temp;
            stack.push(temp);
        } else if (temp == 2) {
            stack.pop();
        } else if (temp == 3) {
            if (!stack.isEmpty()) {
                output.push_back(to_string(stack.top()));
            } else {
                output.push_back("EMPTY");
            }
        } else {
            output.push_back(to_string(stack.size()));
        }
    }

    for (const string& result : output) {
        cout << result << endl;
    }
}