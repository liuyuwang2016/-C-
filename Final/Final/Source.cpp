#include<iostream>  
using namespace std;
int main() {
	int input;
	cin >> input;
	char output = 'N';
	if (input % 4 == 0 && input % 100 == 0) {//能被4跟100整除的有可能是闰年，所以要分情况讨论  
		if (input % 400 == 0 && input % 3200 == 0)
			output = 'N';
		if (input % 400 != 0)
			output = 'N';
		if (input % 400 == 0 && input % 3200 != 0)
			output = 'Y';
	}
	if (input % 4 == 0 && input % 100 != 0) {//能被4整除不能被100整除的肯定是闰年  
		output = 'Y';
	}
	cout << output << endl;
	return 0;
}