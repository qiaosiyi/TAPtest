#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
/*
3862767 6 13530293 3

3862767 1 13530293 8
*/
long px(int a){
	int num = 0,num2 = 1;
	int i,j;
	for(i = 0; i < a; i++){
		num2 = 1;
		for(j = 0; j < i; j++){
			num2 *= 10;
		}
		num += num2;
	}
	return num;
}

int main(){
	string 	sA,sB;
	char sDA,sDB;
	long A,B,pa=0,pb=0;
	int i,na = 0,nb = 0,DA,DB;
	cin >> sA >> sDA >> sB >> sDB;
	
	for(i = 0; i < sA.size(); i++){
		if(sA[i] == sDA)
			na++;
	}
	for(i = 0; i < sB.size(); i++){
		if(sB[i] == sDB)
			nb++;
	}
	DA = sDA - '0';
	DB = sDB - '0';

	cout << DA*px(na) + DB*px(nb) << endl;


	return 0;
}