#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
struct yuebing{
	double kucun;
	double shoujia;
	double danjia;
};
bool cmpdanjia(yuebing a, yuebing b){
	return a.danjia > b.danjia;
}


int main(){
	int i, N, D;
	double total,zongjia = 0;
	cin >> N >> D;
	yuebing yb[N];
	for(i = 0; i < N; i++){
		cin >> yb[i].kucun;
	}
	for(i = 0; i < N; i++){
		cin >> yb[i].shoujia;
	}
	for(i = 0; i < N; i++){
		yb[i].danjia = yb[i].shoujia / yb[i].kucun;
	}
	sort(yb, yb + N, cmpdanjia);
	total = D;
	i = 0;
	// cout << total << " " << zongjia << endl;
	while(total > 0){
		if(total >= yb[i].kucun){
			total -= yb[i].kucun;
			zongjia += yb[i].shoujia;
			// cout << total << " " << zongjia << endl;
		}else{
			zongjia += total * yb[i].danjia;
			total = 0;
			// cout << total << " " << zongjia << endl;
		}
		i++;
	}
	printf("%0.2lf\n",zongjia );

	return 0;
}