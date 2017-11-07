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
	string N;
	cin >> N;
	int i;
	int n = N.size();
	int num[10];
	for(i = 0; i < 10; i++){
		num[i] = 0;
	}
	for(i = 0; i < n; i++){
		num[N[i] - '0']++;
	}
	for(i = 0; i < 10; i ++){
		if(num[i] > 0)
			cout << i << ":" << num[i] << endl;
	}
	return 0;
}