
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
	string a;
	string b;
	int h[26],nb[10],i,n;
	char c;
	vector<char> ans;
	string::iterator ita,itb;
	for(i = 0; i < 26; i++){
		h[i] = 0;
	}
	cin >> a >> b;
	ita = a.begin();
	itb = b.begin();
	n = a.size();

	for(i = 0; i < n; i++){
		if(a[0] == b[0]){
			a.erase(ita);
			b.erase(itb);
			ita = a.begin();
			itb = b.begin();	
		}else{
			if(a[0] <= '9'){
				if(nb[a[0] - '0'] == 0){
					ans.push_back(a[0]);
					nb[a[0] - '0']++;
				}
			}else if(a[0] <= 'Z'){
				if(h[a[0] - 'A'] == 0){
					ans.push_back(a[0]);
					h[a[0] - 'A']++;
				}
			}else{
				if(h[a[0] - 'a'] == 0){
					c = 'A' + a[0] - 'a';
					ans.push_back(c);
					h[a[0] - 'a']++;
				}
			}
			a.erase(ita);
			ita = a.begin();
		}
	}



	for(i = 0; i < ans.size(); i++){
		printf("%c", ans[i]);
	}
	printf("\n");
	return 0;
}