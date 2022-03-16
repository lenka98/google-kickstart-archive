#include<iostream>
#include<string>
#include<vector>
using namespace std;

void outputVector(vector<int>, string);
vector<int> getIncreasingStringSolution(string, int);

int main() {

	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {

		int ip_lenght;
		string ip;
		cin >> ip_lenght >> ip;
		cout << "Case #" << i + 1 << ": ";
		outputVector(getIncreasingStringSolution(ip, ip_lenght), " ");
		cout << endl;
	}
}

void outputVector(vector<int> ip, string del) {

	for (auto itr : ip) {
		cout << itr << del;
	}
}

vector<int> getIncreasingStringSolution(string ip, int len) {

	int count = 1;
	vector<int> sol;
	sol.push_back(count);
	for (int i = 1; i < len; i++) {
		if (ip[i - 1] < ip[i]) {
			count++;
		}
		else {
			count = 1;
		}
		sol.push_back(count);
	}

	return sol;
}