#include<iostream>
using namespace std;
int sub(int a,int b)
{
	return a-b;
}
int main()
{
	int num1,num2,diff;
	cout<<"Enter two numbers:";
	cin>>num1>>num2;
	diff=sub(num1,num2);
	cout<<"Diff of"<<num1<<"and"<<num2<<"is:"<<diff<<endl;
	return 0;
}
