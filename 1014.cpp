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
	string str1,str2,str3,str4;
	int j=0;
	string week[8] = {"","MON","TUE","WED","THU","FRI","SAT","SUN"};
	cin >> str1 >> str2 >> str3 >> str4;
	vector <char> ans1,ans2;
	vector <int> ans3;
	int i = 0;
	if(str1.size() < str2.size())
		i = str1.size();
	else
		i = str2.size();

	
	while(i--){
		
		if(str1[j] == str2[j] &&( (str1[j] >= 'A' && str1[j] <= 'N') ||(str1[j] >= '0' && str1[j] <= '9') ) ){
			ans2.push_back(str1[j]);
			

			if(str1[j] >= 'A'){
				ans1.push_back(str1[j]);
				//cout << str1[j] << endl;
			}	
			
		}
		j++;
	}


	if(str3.size() < str4.size())
		i = str3.size();
	else
		i = str4.size();

	j = 0;
	while(i--){
		if(str3[j] >= 'a' && str3[j] == str4[j]){
			ans3.push_back(j);
			
			break;
		}
		j++;
	}
	cout << week[ans1[0] - 'A' + 1];

	if(ans2[1] <= '9' && ans2[1] >= '0'){
		cout << " " << ans2[1] - '0' << ":";
	}else{
		cout << " " << ans2[1] - 'A' + 10 << ":";
	}

	if(ans3[0] < 10){
		cout << "0" << ans3[0] << endl;
	}else{
		cout << ans3[0] << endl;
	}

	return 0;
}