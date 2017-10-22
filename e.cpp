#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main(){

	int n;
	cin >> n;
	while(n--){
		string str;
		int p = 0, t = 0;
		cin >> str;
		int len = str.size();
		int ok = 1, i, post, posp;
		for(i = 0; i < len; i++){
			if(!(str[i] == 'P' || str[i] == 'A' || str[i] == 'T')){
				ok = 0;
			}
			if(str[i] == 'P'){
				p++;
				posp = i;
				if(p > 1){
					ok = 0;
				}
			}
			if(str[i] == 'T'){
				t++;
				post = i;
				if(p > 1){
					ok = 0;
				}
			}
		}
		if(!ok) cout << "NO" << endl;
		else{
			int a = posp - 0;
			int c = len - post -1;
			int b = post - posp -1;
			if(a == 0 && b >= 1 && c == 0){
				cout << "YES" << endl;
			}
			else if(c && c == a * b){
				cout << "YES" << endl;
				cout << "a" << a << "b" << b << "c" << c << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		return 0;
	}
}
