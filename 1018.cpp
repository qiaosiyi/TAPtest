#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int shenfu(char a, char b){// a win return 1; equo return 2; lose return 3;
	int jia,yi;
	if(a == 'C'){
		jia = 3;
	}else if(a == 'J'){
		jia = 2;
	}else{
		jia = 1;
	}

	if(b == 'C'){
		yi = 3;
	}else if(b == 'J'){
		yi = 2;
	}else{
		yi = 1;
	}
	if(jia - yi == 1 || jia - yi == -2){
		return 1;
	}else if(jia - yi == 2 || jia - yi == -1){
		return 3;
	}else{
		return 2;
	}
	
}


int main(){
	int jiaC = 0,jiaJ = 0,jiaB = 0,yiC = 0,yiJ = 0,yiB = 0;
	int N,i,sheng1 = 0,ping1 = 0,result,jiashengduoping = 0,yishengduoping = 0,big;
	cin >> N;
	char jia,yi;
	for(i = 0; i < N; i++){
		cin >> jia >> yi;
		result = shenfu(jia,yi);
		if(result == 1){
			sheng1++;
			if(jia == 'C') jiaC++;
			if(jia == 'J') jiaJ++;
			if(jia == 'B') jiaB++;
		}else if(result == 2){
			ping1++;
		}else{
			if(yi == 'C') yiC++;
			if(yi == 'J') yiJ++;
			if(yi == 'B') yiB++;
		}

	}
	cout << sheng1 << " " << ping1 << " " << N - sheng1 - ping1 << endl;
	cout << N - sheng1 - ping1 << " " << ping1 << " " << sheng1 << endl;
	if(jiaC > jiaJ){
		big = jiaC;
	}else{
		big = jiaJ;
	}
	if(big > jiaB){

	}else{
		big = jiaB;
	}

	if(jiaC == big)
		jiashengduoping++;
	if(jiaJ == big)
		jiashengduoping++;
	if(jiaB == big)
		jiashengduoping++;

	if(jiashengduoping == 3){
		cout << "B" << " ";
	}if(jiashengduoping == 2){
		if(jiaC == jiaB && jiaC == big)
			cout << "B" << " ";
		if(jiaC == jiaJ && jiaC == big)
			cout << "C" << " ";
		if(jiaB == jiaJ && jiaB == big)
			cout << "B" << " ";
	}
	if(jiashengduoping == 1){
		if(jiaC == big)
			cout << "C" << " ";
		if(jiaB == big)
			cout << "B" << " ";
		if(jiaJ == big)
			cout << "J" << " ";
	}
	

	if(yiC > yiJ){
		big = yiC;
	}else{
		big = yiJ;
	}
	if(big > yiB){

	}else{
		big = yiB;
	}

	if(yiC == big)
		yishengduoping++;
	if(yiJ == big)
		yishengduoping++;
	if(yiB == big)
		yishengduoping++;


	if(yishengduoping == 3){
		cout << "B" << " ";
	}if(yishengduoping == 2){
		if(yiC == yiB && yiC == big)
			cout << "B" << endl;
		if(yiC == yiJ && yiC == big)
			cout << "C" << endl;
		if(yiB == yiJ && yiB == big)
			cout << "B" << endl;
	}
	if(yishengduoping == 1){
		if(yiC == big)
			cout << "C" << endl;
		if(yiB == big)
			cout << "B" << endl;
		if(yiJ == big)
			cout << "J" << endl;
	}





	return 0;
}