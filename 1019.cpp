#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;


bool comparejiangxu(int a,int b){
	return a>b;
}


int main(){
	string N,jiangxu,shengxu;
	char na[4],nb[4];
	int naint,nbint;
	int result = 0;
	cin >> N;
	vector<char> nn;
	int i;
	if(N.size() == 3){
		nn.push_back('0');
	}
	if(N.size() == 2){
		nn.push_back('0');
		nn.push_back('0');
	}
	if(N.size() == 1){
		nn.push_back('0');
		nn.push_back('0');
		nn.push_back('0');
	}
	for(i = 0; i < N.size(); i++){
		nn.push_back(N[i]);
	}
	if(nn.size() > 3 && nn[0] == nn[1] && nn[1] == nn[2] && nn[2] == nn[3]){
		cout << N << " " << "-" << " " << N << " " << "=" << " " << "0000" << endl;
		return 0;
	}
	jiangxu = N;
	for(i = 0; i < 4; i++){
		na[i] = nn[i];
		nb[i] = nn[i];
	}
	sort(na,na+4,comparejiangxu);
	sort(nb,nb+4);
	while(result != 6174){
		naint = 1000*(na[0] - '0') + 100*(na[1] - '0') + 10*(na[2] - '0') + (na[3] - '0');
		nbint = 1000*(nb[0] - '0') + 100*(nb[1] - '0') + 10*(nb[2] - '0') + (nb[3] - '0');
		result = naint - nbint;
		// cout << naint << " - " << nbint << " = " << result << endl;
		if(naint < 1000) cout << "0";
		if(naint < 100) cout << "0";
		if(naint < 10) cout << "0";
		cout << naint << " - ";
		if(nbint < 1000) cout << "0";
		if(nbint < 100) cout << "0";
		if(nbint < 10) cout << "0";
		cout << nbint << " = ";
		if(result < 1000) cout << "0";
		if(result < 100) cout << "0";
		if(result < 10) cout << "0";
		cout << result << endl;

		if(result != 6174){
			nn[0] = (result / 1000) + '0';
			nn[1] = result % 1000 / 100+ '0';
			nn[2] = result % 100 /10+ '0';
			nn[3] = result % 10+ '0';
			//cout << nn[0] << nn[1] << nn[2] << nn[3] << endl;
			for(i = 0; i < 4; i++){
				na[i] = nn[i];
				nb[i] = nn[i];
			}
			sort(na,na+4,comparejiangxu);
			sort(nb,nb+4);
		}
	}

	// cout << na << endl;

	return 0;
}