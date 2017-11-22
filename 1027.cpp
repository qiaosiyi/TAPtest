#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
void dayin(int n, int a, char b){
	int i = 0,j;
	for(j = 0; j < 2*n-1 - a; j++){
			cout << " ";
		}
	for(i = 0; i < a-1; i++){
		
		cout << b << " ";
	}
	cout << b << endl;
}

int main(){
	int N,i = 0,s = 0,n;
	char a;
	cin >> N >> a;
	while(2*i*i-1 <= N){
		i++;
	}
	i--;
	s = N - 2*i*i + 1;
	n = i;
	for(i = 0; i < n; i++){
		dayin(n,2*(n-i)-1,a);

	}
	for(i = 1; i < n; i++){
		dayin(n,2*(i+1)-1,a);
	}
	
	cout << s << endl;
	return 0;
}