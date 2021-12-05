//세 수의 평균
#include <iostream>
using namespace std;
int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	cout.precision(2);
	cout << fixed << float(a + b + c) / 3 << endl;
}