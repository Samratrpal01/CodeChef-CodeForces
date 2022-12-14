Description:-
 Let's call a positive integer extremely round if it has only one non-zero digit. For example, 5000, 4, 1, 10, 200 are extremely round integers; 42, 13, 666, 77, 101 are not.

You are given an integer 𝑛. You have to calculate the number of extremely round integers 𝑥 such that 1≤𝑥≤𝑛.

Input
The first line contains one integer 𝑡 (1≤𝑡≤104) — the number of test cases.

Then, 𝑡 lines follow. The 𝑖-th of them contains one integer 𝑛 (1≤𝑛≤999999) — the description of the 𝑖-th test case.

Output
For each test case, print one integer — the number of extremely round integers 𝑥 such that 1≤𝑥≤𝑛.

Example
inputCopy
5
9
42
13
100
111
outputCopy
9
13
10
19
19
Codes Are:-
#include <bits/stdc++.h>
using nam1space std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define M1 1000000007
#define M2 998244353
#define ll long long
#define ld long double
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
#define pll pair<ll,ll>
#define REP(i,a,b) for(ll i=a;i<b;i++)
#define REPI(i,a,b) for(ll i=b-1;i>=a;i--)
#define F first
#define S second
#define PB push_back
#define DB pop_back
#define MP make_pair
#define MT make_tuple
#define G(a,b) get<a>(b)
#define V(a) vector<a>
#define Mapi map<int,int>
#define UMap unordered_map<int,int>
#define tolower(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define pn cout<<"NO\n";
#define py cout<<"YES\n";
void rotate(vector<vector<int>>&v,int n)
{
    for(int i=0;i<n/2;i++)
    {
        for(int j=i;j<n-i-1;j++)
        {
            int temp=v[i][j];
            v[i][j]=v[n-1-j][i];
            v[n-1-j][i]=v[n-1-i][n-1-j];
            v[n-1-i][n-1-j]=v[j][n-1-i];
            v[j][n-1-i]=temp;
        }
    }
}
vector<int>v={5,15,30,50,75,105,140,180,225,475};

bool fun(vector<ll>v,ll n)
{
    vector<ll>s;
    s=v;
    sort(s.begin(),s.end());
    REP(i,0,n)
    {
        if(s[i]!=v[i])
        {
            return false;
        }
    }
    return true;
}

void solve(ll i,ll j,ll &temp,string a[2],bool v[][200001],ll n)
{
    temp++;
    v[i][j]=true;
    
    if(i==0)
    {
        if(v[1][j]==false and a[1][j]=='B')
        solve(1,j,temp,a,v,n);
        else if(j<n and v[i][j+1]==false and a[i][j+1]=='B')
        solve(i,j+1,temp,a,v,n);
    }
    else
    {
         if(a[0][j]=='B' && v[0][j]==false){
            solve(0, j,temp, a, v,n);
        }else if(j+1<n){
            if(a[1][j+1]=='B'){
                solve(1, j+1, temp, a, v, n);
            }
        }
    }
    
}
void fun()
{
    ll n;
    cin>>n;
    int count=0;
    
    ll temp=n;
    while(n)
    {   count++;
        n/=10;
    }
    
    
    
    cout<<9*(count-1)+int(temp/(pow(10,count-1)))<<endl;
}


int32_t main()
{ 
       ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
  t=1;
  cin>>t;
   while(t--)
    fun();
//fun();
return 0;
}
