#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	string W;
	cin >> W;
	vector<char> vowel = {'a', 'i', 'u', 'e', 'o'};
	for (char c : vowel){
		while (W.find(c) != string::npos){
			W.erase(W.find(c), 1);
		}
	}
	cout << W << endl; 
}
