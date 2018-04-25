#include<iostream>  
using namespace std;
int main() {
	int a, b;
	char c;
	while (cin >> a >> b >> c) {
		switch (c) {
		case '+':
			cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case '/'://只有除法需要特别注意  
			if (b != 0)
				cout << a / b << endl;
			else
				cout << "Divided by zero!" << endl;//除数不能为0  
			break;
		default:
			cout << "Invalid operator!" << endl;
			break;
		}
	}
	return 0;
}