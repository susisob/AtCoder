#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	int N;
	cin >> N;
	vector<pair<int, int>> t_list;
	for (int i=0; i<N; i++){
		string t;
		cin >> t;
		int t_start = stoi(t.substr(0, 4));
		int t_end = stoi(t.substr(5, 4));
		while (t_start % 5 != 0){
			t_start--;
		}
		while (t_end % 5 != 0){
			t_end++;
			if (t_end % 100 == 60){
				t_end += 100;
				t_end -= 60;
			}
		}
		t_list.push_back({t_start, t_end});
	}
	sort(t_list.begin(), t_list.end());
	int ans_start, ans_end;
	for (int i=0; i<N; i++){
		if (i == 0){
			ans_start = t_list.at(i).first;
			ans_end = t_list.at(i).second;
		}
		else {
			if (t_list.at(i).first == ans_end){
				ans_end = t_list.at(i).second;
			}
			else if (t_list.at(i).first < ans_end){
				if (t_list.at(i).second > ans_end){
					ans_end = t_list.at(i).second;
				}
			}
			else{
				cout << setw(4) << setfill('0') << ans_start << "-" << setw(4) << setfill('0') << ans_end << endl;
				ans_start = t_list.at(i).first;
				ans_end = t_list.at(i).second;
			}
		}
		if (i == N-1){
			cout << setw(4) << setfill('0') << ans_start << "-" << setw(4) << setfill('0') << ans_end << endl;
		}
	}
}