#include"stack.h"

int main() {
	Stack<int> stack;
	stack.push(5);
	stack.push(10);
	stack.push(7);
	cout << stack.TOP() << endl;
	stack.pop();
	cout << stack.TOP() << endl;
}