#include<bits/stdc++.h>
using namespace std;
void fun(int a,int b,int c)
{

	if(c>b)
	{	
		return;
	}
	cout<<a<<"x"<<c<<"="<<a*c<<endl;
	fun(a,b,c+1);
}
int main()
{
	int a,b,c;
	cin>>a;
	cin>>b;
	c=1;
	fun(a,b,c);
}
