#include<iostream>  
#include<cmath>  
#include <iomanip>  
using namespace std;
int main() {
	int n;
	cin >> n;
	double x[100];
	double y[100];
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	double longest = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			double dis = sqrt(((x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j])));//求三角形斜边  
			if (dis > longest)
				longest = dis;//找出最大  
		}
	}
	cout << fixed << setprecision(4) << longest << endl;
	return 0;
}