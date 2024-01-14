#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
    freopen("test_cases_Q1.txt","r",stdin);
    freopen("output_Q1.txt","w",stdout);
    int n; cin>>n; 
    int a,first_mx=INT_MIN,second_mx=INT_MIN;
    rep(i,0,n){
      cin>>a; 
      second_mx=min(first_mx,max(second_mx,a));
      first_mx=max(first_mx,a);
    } 
    cout<<first_mx+second_mx<<"\n";
}