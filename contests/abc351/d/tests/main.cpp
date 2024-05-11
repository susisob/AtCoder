#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int N;
	cin >> N;
	vector<int> xA;
	vector<int> yA;
	vector<int> xB;
	vector<int> yB;
	int i, j, a, b;
	for (i=0;i<N;i++){
		cin >> a >> b;
		if(a + b % 2 == 0)
		{
			xA.push_back(a);
			yA.push_back(b);
		}
		else
		{
			xB.push_back(a);
			yB.push_back(b);
		}
	}
	int dist;
	int As = xA.size();
	int Bs = xB.size();
	for (i =0;i<As-2;i++){
		for(j=i + 1;j<As-1;j++)
		{
			xl = xA.at(i)
		}
	}

}