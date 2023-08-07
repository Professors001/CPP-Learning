#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class DynamicQueue {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* front;
    Node* rear;

public:
    DynamicQueue() : front(nullptr), rear(nullptr) {}

    void enqueue(const T& value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (!isEmpty()) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    const T& frontValue() const {
        if (!isEmpty()) {
            return front->data;
        }
        throw runtime_error("EMPTY");
    }

    bool isEmpty() const {
        return front == nullptr;
    }

    size_t size() const {
        size_t count = 0;
        Node* current = front;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }

    ~DynamicQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    DynamicQueue<int> queue;

    int n, temp;
    cin >> n;

    vector<string> output;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp == 1) {
            cin >> temp;
            queue.enqueue(temp);
        } else if (temp == 2) {
            queue.dequeue();
        } else if (temp == 3) {
            if (!queue.isEmpty()) {
                output.push_back(to_string(queue.frontValue()));
            } else {
                output.push_back("EMPTY");
            }
        } else {
            output.push_back(to_string(queue.size()));
        }
    }

    for (const string& result : output) {
        cout << result << endl;
    }

    return 0;
}
