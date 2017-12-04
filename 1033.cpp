#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	char mm[256];
	string s,s2;
	cin >> s;
	char c;
	int i;

	for(i = 0; i < 256; i++){
		mm[i] = 0;
	}
	for(i = 0; i < s.size(); i++){
		mm[s[i]]++;
		if(s[i]>='A' && s[i] <= 'Z'){
			mm['a' + s[i] - 'A']++;
		}
	}



	cin >> s2;
	if(mm['+'] == 1){
		cout << "(mm['+'] == 1)" << endl;
	}
	for(i = 0; i < s2.size(); i++){
		if(mm['+']){
			if(mm[s2[i]]){
				continue;
			}else{
				if(s2[i]>='A' && s2[i]<='Z'){
					continue;
				}else{
					cout << s2[i];
				}
			}
		}else{
			if(mm[s2[i]]){
				continue;
			}else{
				cout << s2[i];
			}
		}
	}
	cout << endl;
	return 0;
}