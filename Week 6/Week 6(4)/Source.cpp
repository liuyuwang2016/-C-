#include <iostream>
using namespace std;

int main()
{
	int n = 0, max = 0;
	int a[100];
	//输入数据
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	//取最高分
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	//输出
	cout << max << endl;
	return 0;
}