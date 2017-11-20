#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
	int c1,c2;
	int tim;
	cin >> c1 >> c2;
	tim = c2 - c1;
	int hh,mm,ss;

	hh = tim / 360000;
	tim = tim - hh * 360000;
	mm = tim / 6000;
	tim = tim - mm * 6000;
	ss = tim / 100;
	if(tim - ss*100 >= 50){
		ss++;
		if(ss == 60){
			mm++;
			ss = 0;
			if(mm == 60){
				hh++;
				mm = 0;
			}
		}
	}
	if(hh == 0){
		cout << "00:";
	}else if(hh != 0 && hh < 10){
		cout << "0";
		cout << hh;
		cout << ":";
	}else {
		cout << hh << ":";
	}
	if(mm == 0){
		cout << "00:";
	}else if(mm != 0 && mm < 10){
		cout << "0";
		cout << mm;
		cout << ":";
	}else {
		cout << mm << ":";
	}
	if(ss == 0){
		cout << "00" << endl;
	}else if(ss != 0 && ss < 10){
		cout << "0";
		cout << ss;
		cout << endl;
	}else {
		cout << ss << endl;
	}
	

	return 0;
}