#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int num,i;
	cin >> num;
	int B = num / 100;
	int S = num / 10 % 10;
	int G = num % 10;
	while(B--){
		cout << "B";
	}
	while(S--){
		cout << "S";
	}
	for(i = 0; i < G; i++){
		cout << i+1;
	}
	cout << endl;
	return 0;
}