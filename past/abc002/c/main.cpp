#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	vector<pair<int, int>> coordinate(3);
	for (int i = 0; i < 3; i++){
		cin >> coordinate.at(i).first >> coordinate.at(i).second;
	}
	coordinate.at(1).first -= coordinate.at(0).first;
	coordinate.at(1).second -= coordinate.at(0).second;
	coordinate.at(2).first -= coordinate.at(0).first;
	coordinate.at(2).second -= coordinate.at(0).second;
	cout << fixed << setprecision(1) << (abs(coordinate.at(1).first * coordinate.at(2).second - coordinate.at(1).second * coordinate.at(2).first)) / 2.0 << endl;
}
