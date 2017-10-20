#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	char c;
	int temp=0,out=0;
	vector <string> py;
	string num[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int sum = 0;
	while((c = getchar()) != '\n'){
		sum += c - '0';
	}
//	cout << sum << endl;
	if(!sum) py.push_back(num[0]);
	while(sum){
		py.push_back(num[sum % 10]);
//		cout << "add" << num[sum % 10]<< endl;
		sum /= 10;
	}
	cout << py[py.size() -1];
	for(int i = py.size() -2;i >= 0; i-- )
		cout << " " << py[i];
	cout << endl;

	return 0;
}
