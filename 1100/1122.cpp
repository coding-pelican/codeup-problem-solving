//초를 분/초로 변환
#include <iostream>
using namespace std;
int main(void) {
	int s;
	cin >> s;
	cout << s / 60 << ' ' << s % 60 << endl;
}