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
	while(sum > 0){
		temp = (sum % 10);
		sum = sum - temp;
		sum = sum /10;
		out = out + temp;
	}	
	cout << out <<endl;
	if(!out) py.push_back(num[0]);
	while(out){
		py.push_back(num[out % 10]);
		cout << "add" << num[out % 10]<< endl;
		out /= 10;
	}
	cout << py[py.size() -1];
	for(int i = py.size() -2;i >= 0; i-- )
		cout << " " << py[i];
	cout << endl;

	return 0;
}
