#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	int deg, dis;
	cin >> deg >> dis;
	string dir;
	vector<string> dirList = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};
	dir = "N";
	deg *= 10;
	for (int i=0; i < 16; i++){
		if (2250 * i - 1125 <= deg && deg < 2250 * i + 1125){
			dir = dirList.at(i);
		}
	}
	int W;
	int v = round(dis / 6.0);
	if (0 <= v && v <= 2){
		W = 0;
	}
	else if (3 <= v && v <= 15){
		W = 1;
	}
	else if (16 <= v && v <= 33){
		W = 2;
	}
	else if (34 <= v && v <= 54){
		W = 3;
	}
	else if (55 <= v && v <= 79){
		W = 4;
	}
	else if (80 <= v && v <= 107){
		W = 5;
	}
	else if (108 <= v && v <= 138){
		W = 6;
	}
	else if (139 <= v && v <= 171){
		W = 7;
	}
	else if (172 <= v && v <= 207){
		W = 8;
	}
	else if (208 <= v && v <= 244){
		W = 9;
	}
	else if (245 <= v && v <= 284){
		W = 10;
	}
	else if (285 <= v && v <= 326){
		W = 11;
	}
	else if (327 <= v){
		W = 12;
	}
	if (W == 0){
		dir = "C";
	}
	cout << dir << " " << W << endl;
}