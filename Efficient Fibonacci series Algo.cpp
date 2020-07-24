#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<long long> fib(int n)
{
	int f=0;
	int s=1;
vector<long long> v;
v.push_back(f);
v.push_back(s);
	for(int i=2;i<=n;i++)
	{
		v.push_back(v[i-1]+v[i-2]);
	}
	return v;
}
int main()
{
	cout<<"enter the number for calc Fibonacci series :"<<endl;
	int n;
	cin>>n;
	vector<long long> v=fib(n);
	cout<<"Fib series is :"<<endl;
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";

	return 0;
}
