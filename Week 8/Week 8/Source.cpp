#include<iostream>
using namespace std;
int main(){
	// ��bestö����õĳ�
	int best;
	for (best = 1; best <= 4; best++){
		// a b c d��¼��λר�ҵĻ�
		bool a = (best == 2);
		bool b = (best == 4);
		bool c = !(best == 3);
		bool d = !b;
		if (a + b + c + d != 1)
			continue; // ������ֻ��1λר��˵�Ե�����
		// �����ѵĳ�
		cout << best << endl;
		// ����ж���ȷ��ר��
		if (a == 1)
			cout << "A" << endl;
		else if (b == 1)
			cout << "B" << endl;
		else  if (c == 1)
			cout << "C" << endl;
		else
			cout << "D" << endl;
	}
	return 0;
}