#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	int m;
	cin >> m;
	int vv;
	if (m < 100){
		vv = 0;
	}
	else if (100 <= m && m <= 5000){
		vv = m * 10;
	}
	else if (6000 <= m && m <= 30000){
		vv = m + 50000;
	}
	else if (35000 <= m && m <= 70000){
		vv = (m - 30000) / 5 + 80000;
	}
	else if (m > 70000){
		vv = 89000;
	}
	vv  /= 1000;
	cout << setw(2) << setfill('0') << vv << endl;
}