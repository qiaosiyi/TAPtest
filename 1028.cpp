#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
struct pp
{
	char name[20];
	int yyyy;
	int mm;
	int dd;
} tmp,old,yong;

int main()
{
	int N,i,j,hege = 0;
	cin >> N; 
	old.yyyy = 2014; old.mm = 9; old.dd = 6;
	yong.yyyy = 1814; yong.mm = 9; yong.dd = 7;
	
	for(i = 0; i < N; i++){
		scanf("%s %d/%d/%d", tmp.name, &tmp.yyyy, &tmp.mm, &tmp.dd);
		if(tmp.yyyy < 1814 ||tmp.yyyy == 1814 && tmp.mm < 9 || tmp.yyyy == 1814 && tmp.mm == 9 && tmp.dd < 6
			|| tmp.yyyy > 2014 || tmp.yyyy == 2014 && tmp.mm > 9 || tmp.yyyy == 2014 && tmp.mm == 9 && tmp.dd > 6){
			continue;
		}else{
			hege ++;
			if(tmp.yyyy < old.yyyy || tmp.yyyy == old.yyyy && tmp.mm < old.mm || tmp.yyyy == old.yyyy && tmp.mm == old.mm && tmp.dd < old.dd){
				
				for(j = 0; j < 20; j++){old.name[j] = tmp.name[j];}
				old.yyyy = tmp.yyyy; old.mm = tmp.mm; old.dd = tmp.dd;
			}
			if(tmp.yyyy > yong.yyyy || tmp.yyyy == yong.yyyy && tmp.mm > yong.mm || tmp.yyyy == yong.yyyy && tmp.mm == yong.mm && tmp.dd > yong.dd){
				for(j = 0; j < 20; j++){yong.name[j] = tmp.name[j];} 
				yong.yyyy = tmp.yyyy; yong.mm = tmp.mm; yong.dd = tmp.dd;
			}
		}
	}





	if(hege)
		cout << hege << " " << old.name << " " << yong.name << endl;
	else
		cout << "0" << endl;
	return 0;
}