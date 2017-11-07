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
	unsigned int A,B,C;
	int D;
	cin >> A >> B >> D;
	C = A + B;
	string a = "";
	while(C > 0){
		a += C % D + '0';
		C /= D;
	}
	reverse(a.begin(),a.end());
	if(a == ""){
		cout << "0" << endl;
		return 0;
	}
	cout << a << endl;
	return 0;
}