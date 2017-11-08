#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
bool cmp(int a, int b){
	return a <= b;
}

int main(){
	int N;
	int n[10];
	int i, j, M = 0;
	char tmp;
	char a[60];
	for(i = 0; i < 10; i++){
		cin >> n[i];
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < n[i]; j++){
			a[M] = (i + '0');
			M++;
		}
	}
	
	sort(a, a + M, cmp);
	i = 0;
	if( a[i] != '0'){
		cout << ":";
		for(i = 0; i < M; i++){
			cout << a[i];
		}
	}else{
		while(a[i] == '0'){
			i++;
		}
		
		tmp = a[i];
		a[i] = a[0];
		a[0] = tmp;
		for(i = 0; i < M; i++){
			cout << a[i];
		}
	}
	cout << endl;
	return 0;
}