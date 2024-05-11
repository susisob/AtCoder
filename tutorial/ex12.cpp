#include <bits/stdc++.h>
#include <numeric>

using namespace std;
 
int main() {
  int N, i;
  cin >> N;
  vector<int> points(N);
  for (i = 0; i < N; i++){
    cin >> points.at(i);
  }
  int ave;
  ave = accumulate(points.begin(), points.end(), 0) / points.size();
  for (i = 0; i < N; i++){
    cout << abs(points.at(i) - ave) << endl;
  }
}