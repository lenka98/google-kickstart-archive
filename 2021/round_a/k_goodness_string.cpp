#include <iostream>
#include <string>
using namespace std;

int getGoodnessScore(string ip, int n);
int getOpsToGetKGoodnessString(string ip, int n, int k);

int main() {

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, k;
		string ip;
		cin >> n >> k >> ip;
		cout << "Case #" << i + 1 << ": "
			<< getOpsToGetKGoodnessString(ip, n, k) << endl;

	}
	return 0;
}

int getOpsToGetKGoodnessString(string ip, int n, int k) {

	int g = getGoodnessScore(ip, n);
	if (g == k) {
		return 0;
	}

	else if (g < k) {
		return k - g;
	}

	else {
		return g - k;
	}
}

int getGoodnessScore(string ip, int n) {

	int goodness = 0;
	for (int i = 0; i < n / 2; i++) {
		if (ip[i] != ip[n - i - 1]) {
			goodness++;
		}
	}

	return goodness;
}
