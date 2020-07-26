#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int digiSum(int num)
{ 
if(num==0)
return 0;
else 
return num%9==0 ? 9:num%9;	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		int res=digiSum(num);
		cout<<res;
		
	}
	return 0;
}
