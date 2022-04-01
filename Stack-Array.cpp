#include <iostream>

#define VAL 100

class Stack {
	public:
		int stack[VAL];
		int topStack = -1;
		
		void push(int data) {
			if(topStack >= VAL - 1) {
				return;
			} else {
				stack[++topStack] = data;
			}
		}
		
		void pop() {
			if(topStack <= -1) {
				return;
			} else {
				topStack--;
			}
		}
		
		int top() {
			if(topStack == -1) {
				return topStack;
			} else {
				return stack[topStack];
			}
		}
		
		void display() {
			if(topStack >= 0) {
				std::cout << "Stack : \n";
				
				for(int i = topStack; i >= 0; i--)
					std::cout << stack[i] << std::endl;
				
				std::cout << "\n";
			} else {
				std::cout << "Stack is empty" << std::endl;
			}
		}
};

int main() {
	Stack stackFunct;
	
	stackFunct.push(1);
	stackFunct.push(2);
	stackFunct.push(3);
	stackFunct.push(4);
	stackFunct.push(5);
	
	stackFunct.display();
	
	stackFunct.pop();
	
	stackFunct.display();
	
	std::cout << "The top of the stack : " << std::endl;
	std::cout << stackFunct.top() << std::endl;
}
