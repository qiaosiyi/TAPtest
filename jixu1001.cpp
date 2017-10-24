#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int f[100000];
	vector<int> ee;
	vector<int> ans;
	int n,i,e;
	memset(f, 0, sizeof(f));
	cin >> n;
	while(n--){
		cin >> e;
		ee.push_back(e);
	}
	for(i = 0; i < ee.size(); i++){
		int  tmp = ee[i];
		while(tmp != 1)
		{
			if(tmp & 1)	
			{
				tmp = (3*tmp+1) >> 1;
			}
			else
			{
				tmp >>= 1;
			}
			f[tmp] = 1;
		}
	}
	for(i = 0; i < ee.size(); i++)
	{
		if(!f[ee[i]])	ans.push_back(ee[i]);
	}
	sort(ans.begin(), ans.end(), greater<int>());
	cout << ans[0];
	for(i = 1; i < ans.size(); i++)
	{
		cout << " " << ans[i];
	}	
	cout << endl;


	return 0;
}