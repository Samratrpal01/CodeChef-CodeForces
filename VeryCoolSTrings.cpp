#include <bits/stdc++.h>
using namespace std;

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
#define MOD 998244353


int binarytodecimal(string s)
{	int temp = 0;
	reverse(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1')
		{
			temp += pow(2, i);
		}
	}
	return temp;
}
string tobinary(int i)
{
	string res = "";
	while (i)
	{
		res += to_string(i % 2);
		i /= 2;

	}
	reverse(res.begin(), res.end());
	return res;
}
void fun()
{
	
	string s = "";
	for (int i = 0; i < k; i++)
	{
		s += "10";
	}
	s += "1";
	int temp = binarytodecimal(s);
	int result = 0;
	for (int i = temp; i <= n; i++)
	{
		string res = tobinary(i);
		if (res.find(s) != string::npos)
		{
			result++;
		}
	}
	return result;

}



int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	t = 1;
	//cin >> t;
	while (t--)
		fun();
	return 0;
}
