#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> stack;
    int maxSize;

public:
    Stack(int size) : maxSize(size) {}

    bool isEmpty() const {
        return stack.empty();
    }

    bool isFull() const {
        return stack.size() == static_cast<size_t>(maxSize);
    }

    void push(int value) {
        if(isFull()){
            cout<<"Stack is Full.\n";
        }
        else{
            stack.push_back(value);
            cout << "Pushed Value: " << value << endl;
        }
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is Empty!!" << endl;
        }
        else{
            int topval = stack.back();
            stack.pop_back();
            cout << "Value Popped: " << topval << endl;
        }
    }

    void printOut(){
        if(isEmpty()){
            cout << "Stack is Empty!" << endl;
        }
        else{
            cout << "Stack Elements: ";
            for(int i : stack)
                cout << i << endl;
        }
    }
}

int main() {
    int maxSize;
    cout << "How big is the stack?";
    cin >> maxSize;

    Stack myStack(maxSize);
    
}
        