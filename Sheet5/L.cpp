#include <iostream>
#define ll long long int
using namespace std;

void ar2(ll n, ll ara2[])
{
	for(ll i=0; i<n; i++)
	{
		cout<<ara2[i]<<" ";
	}
}

void ar1(ll n, ll ara1[])
{
	for(ll i=0; i<n; i++)
	{
		cout<<ara1[i]<<" ";
	}
}

int main() {
	ll n;
	cin>>n;
	ll ara1[n+1],ara2[n+2];
	for(ll i=0; i<n; i++)
	{
		cin>>ara1[i];
	}
	for(ll i=0; i<n; i++)
	{
		cin>>ara2[i];
	}
	ar2(n, ara2);
	ar1(n, ara1);
	return 0;
}
