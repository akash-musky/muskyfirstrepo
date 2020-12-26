#include<bits/stdc++.h>
#include<iostream>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<bitset>
#include<set>
#define ll long long 
#define vi vector<ll>
#define vvi vector<vi>
#define ii pair<ll,ll>
#define vii vector<ii>
#define vvii vector<vii>
#define uset unordered_set
#define umap unordered_map
#define setbit(s,j)(s|=(1<<j)) // this will set the jth bit of s to 1.
#define togglebit(s,j) (s^=(1<<j)) //this will flip the jth bit.
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for( long long i=a;i<b;i++)
using namespace std;
ll gcd(ll a,ll b) // for the greatest common divisor
	{
	  ll temp;
	  while(b>0)
	  {
		  temp=a%b;
		  a=b;
		  b=temp;
	  }
	  return a;
	}
ll lcm(ll a,ll b) // for the lowest common multiple
{
  return ((a*b)/gcd(a,b));
}
ll fpow(ll b, ll exp, ll mod)// for fast exponentation
{
	if(exp==0)
		return 1;
	ll t=fpow(b,exp/2,mod);
	if(exp &1)
		return t*t%mod*b%mod;
	return t*t%mod;
	
}
 
int main()
{  
   

cout<<"for loop"<<endl;
cout<<"first git"<<endl;
cout<<"updated wowww!!!!!"<<endl;
   
 

	return 0;
}
