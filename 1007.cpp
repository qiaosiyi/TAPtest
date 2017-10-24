#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int is_not_a_p(int num){//not a p return 1
	int i;
	if(num == 2) return 0;
	if(num == 1) return 0;
	if(num == 0) return 0;
	for(i = 2; i * i <= num; i++){
		if( num % i == 0){
			// cout << "not p:"<< i << endl;
			return 1;
		}
	}
	return 0;
}
vector<int> prm;
int main(){

	int N,i,out = 0;
	cin >> N;
	if (N <= 0 || N == 0 || N == 1 || N ==2){
		cout << "0" << endl;
		return 0;
	}

	for(i = 2; i < N; i++){
		if(!is_not_a_p(i)){
			prm.push_back(i);
			//cout << i<< endl;
		}
	}
	for(i = 0; i < prm.size() - 1; i++){
		if(prm[i+1] - prm[i] == 2)
			out++;
	}
	cout << out << endl;
	return 0;
}