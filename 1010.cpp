#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	vector<int> n;
	int num,i;
	do{
		cin >> num;
		n.push_back(num);
	}while(cin.get() != '\n');

	if(n[1] != 0){
		cout << n[0] * n[1] << " " << n[1] - 1;
	}else{
		cout << 0;
	}

	for(i = 2; i < n.size(); i = i + 2){
		if(n[i + 1] != 0){
			cout << " " << n[i] * n[i + 1] << " " << n[i + 1] - 1;
		}else{
			//cout << " " << 0 << " " << 0;
		}
	}
	cout << endl;

	return 0;
}