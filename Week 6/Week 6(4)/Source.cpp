#include <iostream>
using namespace std;

int main()
{
	int n = 0, max = 0;
	int a[100];
	//��������
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	//ȡ��߷�
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	//���
	cout << max << endl;
	return 0;
}