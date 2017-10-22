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
	vector <string> py;//容器对象，内容可以装载字符串
	string num[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int sum = 0;
	while((c = getchar()) != '\n'){//c语言里的stido，可以将一行输入中的每个字符读出。
		sum += c - '0';
	}
//	cout << sum << endl;
	if(!sum) py.push_back(num[0]);//容器对象的末尾加一个数组
	while(sum){
		py.push_back(num[sum % 10]);
//		cout << "add" << num[sum % 10]<< endl;
		sum /= 10;
	}
	cout << py[py.size() -1];//容器对象的大小，返回容器内数组的个数
	for(int i = py.size() -2;i >= 0; i-- )
		cout << " " << py[i];
	cout << endl;

	return 0;
}
