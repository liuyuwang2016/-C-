#include <iostream>
using namespace std;

int main()
{
	int n=0, x=0, y=0;
	int eat = 0, rest = 0;//����Ե��ĺ�ʣ���
	cin >> n >> x >> y;
	if (y%x == 0)
	{
		eat = y / x;
	}
	else
	{
		eat = y / x + 1;
	}
	//��ʣ����������
	if (n > eat)
	{
		rest = n - eat;
	}
	else
	{
		rest = 0;
	}
	cout << rest << endl;
	return 0;
}