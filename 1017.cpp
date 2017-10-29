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
	string A;
	char B;
	vector<char> Q;
	int wei,aa,b,i,qianwei = 0,qianweiyu = 0,R;
	cin >> A >> B;
	wei = A.size();
	b = B - '0';
	if(A == "0"){
		cout << "0" << " " << "0" << endl;
		return 0;
	}
	for(i = 0; i < wei; i++){
		aa = A[i] - '0' + 10 * qianwei + 10 * qianweiyu;
		if(aa / b > 0){
			Q.push_back('0'+aa/b);
			qianweiyu = aa % b;
			qianwei = 0;
		}else {
			qianwei = aa;
			if(i > 0){
				Q.push_back('0');
			}
		}
		if(i == wei - 1){
			R = aa % b;
		}
	}

	for(i = 0; i < Q.size(); i++){
		cout << Q[i];
	}
	cout << " " << R << endl;

	return 0;
}