#include<iostream>  
using namespace std;
int main() {
	int input;
	cin >> input;
	char output = 'N';
	if (input % 4 == 0 && input % 100 == 0) {//�ܱ�4��100�������п��������꣬����Ҫ���������  
		if (input % 400 == 0 && input % 3200 == 0)
			output = 'N';
		if (input % 400 != 0)
			output = 'N';
		if (input % 400 == 0 && input % 3200 != 0)
			output = 'Y';
	}
	if (input % 4 == 0 && input % 100 != 0) {//�ܱ�4�������ܱ�100�����Ŀ϶�������  
		output = 'Y';
	}
	cout << output << endl;
	return 0;
}