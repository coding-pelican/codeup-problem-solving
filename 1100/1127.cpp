//성적 계산
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	vector<float> ratio(3);
	vector<int> score(3);
	for (int i = 0; i < 3; i++) {
		cin >> ratio[i] >> score[i];
	}
	cout.precision(1);
	cout << fixed << ratio[0] * score[0] + ratio[1] * score[1] + ratio[2] * score[2] << endl;
}