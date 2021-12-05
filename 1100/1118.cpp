//삼각형의 넓이 구하기
#include <iostream>
using namespace std;
int main(void) {
	float a, b;	//a(밑변), b(높이)
	cin >> a >> b;
	cout.precision(1);
	cout << fixed << a * b * 0.5 << endl;
}