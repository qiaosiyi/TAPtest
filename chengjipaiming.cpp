#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
struct stu
{
	string name;
	int grade;
	string course;
	void setStu(string Name, int Grade, string Course){
		name = Name;
		grade = Grade;
		course = Course;
	}
	
}high,low,tmp;
int main(){
	int n,i;
	cin >> n;
	high.setStu("",-1,"");
	low.setStu("",101,"");
	while(n--){
		cin >> tmp.name >> tmp.course >> tmp.grade;
		if(tmp.grade > high.grade)
			high.setStu(tmp.name,tmp.grade,tmp.course);	
		if(tmp.grade < low.grade)
			low.setStu(tmp.name,tmp.grade,tmp.course);
	}
	cout << high.name << " " << high.course << endl;
	cout << low.name << " " << low.course << endl; 
	return 0;
}