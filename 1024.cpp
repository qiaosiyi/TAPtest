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
	string kexueA;
	int youxiaoE,i,zhishuchangdu;
	int zhishuzhi = 0,j;

	cin >> kexueA;


	for(i = 0; kexueA[i] != 'E'; i++){
		youxiaoE = i + 1;
	}
	// cout << "youxiaoE " << youxiaoE << endl;
	zhishuchangdu = kexueA.size() - youxiaoE - 2;
	// cout << "zhishuchangdu " << zhishuchangdu << endl;


	if(zhishuchangdu == 4){
		zhishuzhi = (kexueA[youxiaoE + 2] - '0' ) * 1000 + (kexueA[youxiaoE + 3] - '0' ) * 100 + (kexueA[youxiaoE + 4] - '0' ) * 10 + (kexueA[youxiaoE + 5] - '0' );
	}else if(zhishuchangdu == 3){
		zhishuzhi = (kexueA[youxiaoE + 2] - '0' ) * 100 + (kexueA[youxiaoE + 3] - '0' ) * 10 + (kexueA[youxiaoE + 4] - '0' );
	}else if(zhishuchangdu == 2){
		zhishuzhi = (kexueA[youxiaoE + 2] - '0' ) * 10 + (kexueA[youxiaoE + 3] - '0' );
	}else if(zhishuchangdu == 1){
		zhishuzhi = kexueA[youxiaoE + 2] - '0' ;
	}
	// cout << "zhishuzhi " << zhishuzhi <<endl;
	if(zhishuzhi == 0){
		for(i = 0; i < youxiaoE; i++){
			cout << kexueA[i];
		}
		cout << endl;

		return 0;
	} 



// cout << zhishuzhi - youxiaoE + 3 << endl;
	if(kexueA[0] == '-') cout << "-";
	if(kexueA[youxiaoE + 1] == '-'){
		// cout << "a" << endl;
		cout << "0.";
		for(i = 0;i < zhishuzhi - 1; i++){
			cout << "0";
		}
		cout << kexueA[1] ;
		for(i = 3; i < youxiaoE; i++){
			cout << kexueA[i];
		}
		cout << endl;
	}else if(kexueA[youxiaoE + 1] == '+'){
		if(zhishuzhi < youxiaoE - 3){//have '.' and no '0'
			// cout << "b" << endl;
			cout << kexueA[1];
			j = zhishuzhi;
			while(j--){
				cout << kexueA[2+zhishuzhi-j];
			}
			cout << ".";
			for(i = 3 + zhishuzhi; i < youxiaoE; i++){
				cout << kexueA[i];
			}
			cout << endl;
		}else if(zhishuzhi == youxiaoE - 3){
			// cout << "c" << endl;
			cout << kexueA[1];
			for(i = 3; i < youxiaoE; i++){
				cout << kexueA[i];
			}
			cout << endl;
		}else {
			// cout << "d" << endl;
			cout << kexueA[1];
			for(i = 3;i < youxiaoE; i++){
				cout << kexueA[i];
			}

			for(i = 0;i < zhishuzhi - youxiaoE + 3;i++){
				cout << "0";
			}
			cout << endl;
		}
	}



	return 0;
}