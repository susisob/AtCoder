#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	string S, number;
	int a;
	cin >> S;
	number = S.substr(3, 3);
	a = stoi(number);
	if (0 < a && a <= 349){
		if (a == 316) {
			cout << "No" << endl;
		}
		else {
			cout << "Yes" << endl;
		}
	}
	else {
	cout << "No" << endl;
	}
}