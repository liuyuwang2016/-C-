#include<iostream>  
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		if (n % 3 == 0) {//�Ȱ��ܱ�3�����Ķ��ֱ�������  
			if (n % 5 == 0) {
				if (n % 7 == 0)
					cout << "3 5 7" << endl;
				else
					cout << "3 5" << endl;
			}
			if (n % 7 == 0 && n % 5 != 0)
				cout << "3 7" << endl;
			if (n % 7 != 0 && n % 5 != 0)
				cout << '3' << endl;
		}
		if (n % 5 == 0 && n % 3 != 0) {//��Ϊ�ܱ�3�������Ѿ����۹��ˣ���������ֻ�����ܱ�5���������ܱ�3������  
			if (n % 7 == 0)
				cout << "5 7" << endl;
			else
				cout << '5' << endl;
		}
		if (n % 7 == 0 && n % 3 != 0 && n % 5 != 0)//ͬ��  
			cout << '7' << endl;
		if (n % 7 != 0 && n % 3 != 0 && n % 5 != 0)//ɶҲ���ܵ�  
			cout << 'n' << endl;
	}
	return 0;
}