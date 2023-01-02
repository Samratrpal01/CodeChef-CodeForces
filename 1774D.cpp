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
// assert(q==0); is usally used to terminate whole when certain codition not follow true.

using namespace std;
#define ll long long 
int main()
{
    ll t, n, m, ans, i, j, one, sum, avg, k;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>m;
        ll count[n];
        
        for(i=0;i<n;i++){
            count[i]=0;
        }
        
        one=0;
        ans=0;
        
        ll a[n][m];
        
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1){
                    one++;
                    count[i]++;
                }
            }
        }
        
        if((one%n)!=0){
            cout<<"-1\n";
            continue;
        }
        avg=(one/n);
        for(i=0; i<n; i++)
        {
            sum=0;
            for(j=0; j<m; j++)
            {
                if(a[i][j]==1){
                    sum++;
                }
            }
            ans=ans+abs(sum-avg);
        }
        
        cout<<ans/2<<"\n";
        
        
        for(i=0; i<m; i++){
            
            j=0;k=0;
            
            for(;j<n && k<n;){
                while(j<n && (count[j]<=avg || a[j][i]==0)){
                    j++;
                }
                
                while(k<n && (count[k]>=avg || a[k][i]==1)){
                    k++;
                }
                
                if(j<n && k<n){
                    count[j]--;
                    count[k]++;
                    swap(a[j][i], a[k][i]);
                    cout<<k+1<<" "<<j+1<<" "<<i+1<<"\n";
                }
            }
        }
        
        
        
    }
}