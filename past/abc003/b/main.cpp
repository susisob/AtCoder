#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

bool check(char c){
	bool f = false;
	vector<char> char_list = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
	for (char a: char_list){
		if (c == a){
			f = true;
		}
	}
	return f;
}

int main(){
	string S, T;
	cin >> S >> T;
	bool ok = true;
	for (int i = 0; i < S.length(); i++){
		if (S[i] == T[i]){
		}
		else if (S[i] == '@' && check(T[i])){
		}
		else if (T[i] == '@' && check(S[i])){
		}
		else {
			ok = false;
		}
	}
	if (ok) {
		cout << "You can win" << endl;
	}
	else {
		cout << "You will lose" << endl;
	}

}
