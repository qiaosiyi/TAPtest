#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
struct list{
	string add;
	int data;
	string next;
};
void revers(list *a, list *b){
	list tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void revser(list *a,int N,int K){
	int i,k,j ; 
	for(i = 0; i < N / K; i++)
	{	
		k = 0;
		for(j = i*K; j < K/2 + i*K; j++)
		{
			revers(&a[j],&a[i*K + K -1 -k]);
			// cout << j << " " << i*K + K -1 -k<< endl;
			k++;
		}
	}
}

int main(){
	string add1;
	int i,j, N, K;
	cin >> add1 >> N >> K;

	list a[N];
	list tmp;

	for(i = 0; i < N; i++)
	{
		cin >> a[i].add >> a[i].data >> a[i].next;
	}
	// cout << endl;
	// cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	// for(i = 0; i < N; i++)
	// {
	// 	cout << a[i].add << " " << a[i].data << " " << a[i].next << endl;
	// }
	// cout << endl;
	i = 0;
	if(a[i].add.compare(add1))
	{
		for(i = 0; i < N; i++)
		{
			if(a[i].add == add1)
			{
				revers(&a[i], &a[0]);
				break;
			}
		}
	}
	for(i = 1; i < N; i++)
	{
		if(a[i-1].next.compare(a[i].add) != 0)
		{
			for(j = i; j < N; j++)
			{
				if(a[j].add.compare(a[i-1].next) == 0)
				{
					revers(&a[j],&a[i]);
					break;
				}
			}
		}
	}

	// for(i = 0; i < N; i++)
	// {
	// 	cout << a[i].add << " " << a[i].data << " " << a[i].next << endl;
	// }
	// cout << endl;
	revser(a,N,K);

	for(i = 0; i < N - 1; i++){
		a[i].next = a[i+1].add;
	}
	for(i = 0; i < N; i++)
	{
		cout << a[i].add << " " << a[i].data << " " << a[i].next << endl;
	}
	// cout << endl;

	return 0;
}