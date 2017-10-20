#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n,m = 0;
	cin >> n;
	while( n != 1 ){
		if(n % 2 == 0) n /= 2;
		else if(n % 2 == 1) n = (3*n + 1) / 2;
		m++;
	}
	cout << m << endl;
	return 0;
}
