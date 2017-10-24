#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	vector<string> n;
	string str = "";
	int i = 0;
	
	do{
		cin >> str;
		n.push_back(str);
	}while(cin.get() != '\n');
	cout << n[n.size() - 1];
	for(i = n.size() -2; i >= 0; i--){
		cout << " " << n[i];
	}
	cout << endl;
	return 0;
}