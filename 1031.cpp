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
	int N, i, j,k;
	int qzh[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char dzh[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
	cin >> N;
	char s[17];
	char c;
	int sum=0;
	int error = 0;
	for (i = 0; i < N; ++i){
		sum = 0;
		scanf("%17s%c", s, &c);
		for(j = 0; j < 17; j++){
			if(s[j] <= '9' && s[j] >= '0'){
				sum = sum + (s[j]-'0')*qzh[j];
			}else{
				error++;
				cout << s << c << endl;
				break;
			}
			
		}
		sum %= 11;
		//cout << "duizhao=" << dzh[sum] << " sum=" << sum << endl;
		if(c != dzh[sum]){
			error++;
			cout << s << c << endl;
		}
	
	}
	if(error == 0){
		cout << "All passed" << endl;
	}
	return 0;
}