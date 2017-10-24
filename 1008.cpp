#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
void rever(int * a, int start, int end){
	int i , tmp;
	for(i = 0; i <= ((end - start)/2); i++){
		tmp = a[start + i];
		a[start + i] = a[end - i];
		a[end - i] = tmp;
	}
}

void move(int * a, int n, int dis){
	
	dis = dis % n;
	rever(a, 0, n - dis -1);
	
	rever(a, n - dis, n - 1);
	
	rever(a, 0, n - 1);
	
}

int main(){
	int n,dis,i;
	int a[100];
	cin >> n >> dis;
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	move(a, n, dis);
	cout << a[0];
	for(i = 1; i < n; i++){
		cout << " " << a[i] ;
	}
	cout << endl;

	return 0;
}