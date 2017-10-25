#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int is_p(int num){
	int i;
	if(num == 1 || num <= 0 ){
		return 0;
	}
	if(num == 2){
		return 1;
	}
	for(i = 2; i * i <= num; i++){
		if( num % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int M,N;
	int i,lines,j = 0;
	vector<int> ans;
	cin >> M >> N;
	for(i = 0; i < N; ){
		if(is_p(j)){
			i++;
			if(i >= M){
				// cout << j << endl;
				ans.push_back(j);
			}
		}
		j++;
	}

	lines = ans.size() / 10 + 1;

	for(i = 0; i < lines; i++){
		if(i == lines -1){//last line
			cout << ans[ans.size() - ans.size() % 10];
			for(j = ans.size() - ans.size() % 10 +1; j < ans.size(); j++){
				cout << " " << ans[j];
			}
			cout << endl;
		}else{
			cout << ans[i*10];
			for(j = i*10 + 1; j < i*10 +10; j++){
				cout << " " << ans[j];
			}
			cout << endl;

		}


	}
	return 0;
}