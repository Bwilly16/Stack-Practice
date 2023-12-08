#include <iostream>
#include <vector>
#include <cstdlib>

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

    void printOut() const{
        if(isEmpty()){
            cout << "Stack is Empty!" << endl;
        }
        else{
            cout << "Stack Elements: ";
           for(int i : stack)
                cout << i << " ";
        }
        cout << "\n";
    }
};

int main() {
    int maxSize;
    cout << "How big is the stack?";
    cin >> maxSize;

    Stack myStack(maxSize);

    int option;
    //do while loop while options != 0;
    do {
        cout << "Here are your stack options: \n";
        cout << "0: Exit\n";
        cout << "1: Push\n";
        cout << "2: Pop\n";
        cout << "3: Display\n";
        cout << "Enter what you wanna do: \n";
        cin >> option;

        switch(option) {
            case 0: {
                cout << "Exiting the program!";
                break;
            }
            case 1: {
                int pushval = 0;
                cout << "What value do you want to push?: ";
                cin >> pushval;
                //if pushval is not a #
                myStack.push(pushval);
                cout << "Pushed value: " << pushval;
                break;
            }
            case 2: 
                cout << "Popping da value.";
                myStack.pop();
                break;
            
            case 3: 
                //cout << "Current Stack: ";
                myStack.printOut();
                break;
            
            default:
                cout << "Invalid choice. Pick from the list given.";
                break;
        }

    }while (option != 0);
}
        