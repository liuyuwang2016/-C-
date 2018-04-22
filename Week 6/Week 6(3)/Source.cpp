#include <iostream>
using namespace std;

const float Pi = 3.14159;
double V(int _h, int _r)
{
	return Pi*_r*_r*_h;
}


int main() {
	int h, r;
	cin >> h >> r;
	cout << static_cast<int>(20000 / V(h, r)) + 1;
	return 0;
}