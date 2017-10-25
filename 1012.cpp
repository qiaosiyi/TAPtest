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
	int N,i,num,a1=0,a2=0,a3=0,a4=0,a5=0,flag1=0,flag4=0;
	int count1=0,count2=0,count3=0,count4=0,count5=0;
	cin >> N;
	vector<int> nn;
	for(i = 0; i < N; i++){
		cin >> num;
		if(num % 10 == 0){
			a1 += num;
			count1++;
		}
		if(num % 5 == 1){
			if(flag1 % 2 == 0){
				a2 += num;
				flag1++;
			}else{
				a2 -= num;
				flag1++;
			}
			count2++;
		}
		if(num % 5 == 2){
			a3++;
			count3++;
		}
		if(num % 5 == 3){
			a4 += num;
			flag4++;
			count4++;
		}
		if(num % 5 == 4){
			if(num > a5){
				a5 = num;
			}
			count5++;
		}
	}
	if(count1) cout << a1 << " "; else cout << "N ";
	if(count2) cout << a2 << " "; else cout << "N ";
	if(count3) cout << a3 << " "; else cout << "N ";
	if(count4) printf("%0.1f ",a4 *1.0 / flag4 ); else cout << "N ";
	if(count5) cout << a5 << " "; else cout << "N";
	cout << endl;

	// if(count2) cout << 
	// cout << a1 << " " << a2 << " " << a3 << " ";
	// printf("%0.1f ",a4 *1.0 / flag4 );
	// cout << a5 << endl;
	return 0;
}