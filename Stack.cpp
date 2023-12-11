#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Stack {
    private: 
        vector<float> stack;
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
                cout << "Stack is Full." << endl;
            }
            else{
           return stack.push_back(value); 
            }
        }

        void pop() {
            if(isEmpty()) {
            cout << "Stack is Empty." << endl;
        }
        else{
            int topval = stack.back();
            stack.pop_back();
            cout << "Value Popped: " << topval << endl;
            }
        }

        void display(){
            for (int i : stack){
                cout << i << endl;
            }
        }
};

int main() {
    int maxSize = 0;
    int option = 0;

    cout << "What is the max stack size?" << endl;
    cin >> maxSize;

    Stack myStack(maxSize);

    cout << "Stack Options: " << endl;
    cout << "0: Exit\n1: Push\n2: Pop\n3: Display\n" << endl;
    cin >> option;

    do {
        switch(option){
            case 0: 
                 cout << "Exiting the program. Goodbye." << endl;
                 break;
            
            case 1: {
                int inVal;
                cout << "What value do you want to push?" << endl;
                cin >> inVal;

                myStack.push(inVal);
                break;
            }
            case 2: 
                myStack.pop();
                break;
            
            case 3: 
                cout << "Here are the stack elements: " << endl;
                myStack.display();
                break;

            default:
                cout << "Invalid choice...";
                break;
            
        }

    }while(option !=0);

}

/*
//class for the stack to funciton off of

class Stack {

//private stack variables to allow security
private:
    vector<int> stack;
    int maxSize;

public:
    Stack(int size) : maxSize(size) {}

    bool isEmpty() const {
        return stack.empty();
    }

    // function to tell me if stack is full. Returns true or false
    bool isFull() const {
        return stack.size() == static_cast<size_t>(maxSize);
    }

    // function to push value onto stack
    void push(int value) {
        if(isFull()){
            cout<<"Stack is Full.\n";
        }
        else{
            stack.push_back(value);
            cout << "Pushed Value: " << value << endl;
        }
    }

    // function to pop value off top of stack
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

    // function to print out stack when requested
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

    // create instance of stack to use
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

    // switch case function to decipher inputted request
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
                myStack.push(pushval); //push value onto stack
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

    }while (option != 0); // keep looking for input until 'option' variable is not 0-3
}
        */