//섭씨 온도를 화씨 온도로 변환
#include <iostream>
using namespace std;
int main(void) {
	int c;
	cin >> c;
	cout.precision(3);
	cout << fixed << c * 1.8 + 32 << endl;
}