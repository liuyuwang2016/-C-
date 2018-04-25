#include<iostream>  
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		if (n % 3 == 0) {//先把能被3整除的都分别讨论了  
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
		if (n % 5 == 0 && n % 3 != 0) {//因为能被3整除的已经讨论过了，所以这里只讨论能被5整除，不能被3整除的  
			if (n % 7 == 0)
				cout << "5 7" << endl;
			else
				cout << '5' << endl;
		}
		if (n % 7 == 0 && n % 3 != 0 && n % 5 != 0)//同理  
			cout << '7' << endl;
		if (n % 7 != 0 && n % 3 != 0 && n % 5 != 0)//啥也不能的  
			cout << 'n' << endl;
	}
	return 0;
}