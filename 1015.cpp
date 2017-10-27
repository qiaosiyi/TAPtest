#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

struct stu{
	unsigned int str;
	int de;
	int cai;
	int zong;
	int leibie;
} tmp;
vector<stu> ans;
int cmp(struct stu a, struct stu b){//a first b second return 1
	if(a.leibie < b.leibie){
		return 1;
	}else if(a.leibie == b.leibie){
		if(a.zong > b.zong){
			return 1;
		}else if(a.zong == b.zong){
			if(a.de > b.de){
				return 1;
			}else if(a.de == b.de){
				if(a.str < b.str){
					return 1;
				}
			}
		}
	}
	return 0;
}
void revers(struct stu *a, struct stu *b){
	tmp = *a;
	*a = *b;
	*b = tmp;
}



int main(){
	int i,j;
	int N,L,H;
	unsigned int str;
	int de,cai,zong,hege;

	cin >> N >> L >> H;
	for(i = 0; i < N; i++){
		cin >> str >> de >> cai;
		tmp.str = str;
		tmp.de = de;
		tmp.cai = cai;
		tmp.zong = de + cai;
		if(de < L || cai < L){
			continue;
		}
		else if(de >= H && cai >= H)
		{
			tmp.leibie = 1;
			ans.push_back(tmp);
			// cout << "add" << str << " "  << de << " "  << cai << " "  << tmp.zong << " "  << tmp.leibie << " "  << endl; 

		}else if(de >= H && cai < H)
		{
			tmp.leibie = 2;
			ans.push_back(tmp);
			// cout << "add" << str << " "  << de << " "  << cai << " "  << tmp.zong << " "  << tmp.leibie << " "  << endl; 
		}else if(de >= cai && de < H && cai < H)
		{
			tmp.leibie = 3;
			ans.push_back(tmp);
			// cout << "add" << str << " "  << de << " "  << cai << " "  << tmp.zong << " "  << tmp.leibie << " "  << endl;  

		}else
		{
			tmp.leibie = 4;
			ans.push_back(tmp);
			// cout << "add" << str << " "  << de << " "  << cai << " "  << tmp.zong << " "  << tmp.leibie << " "  << endl;  
		}
	}

	hege = ans.size();
	cout << hege << endl;

	for(i = 0; i < hege - 1; i++){
		for(j = 0; j < hege - i - 1; j++){
			if(!cmp(ans[j],ans[j + 1])){
				revers(&ans[j],&ans[j + 1]);
			}
		}
	}
	


	for(i = 0; i < hege; i++){
	//	cout << "i=" <<  i << endl;
		cout << ans[i].str << " " << ans[i].de << " " << ans[i].cai << endl;
	}

	return 0;
}