#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
using namespace __gnu_pbds;
using namespace std;
#define  FIFO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
#define  inf 2e18
#define  mod 1000000007
#define  bg begin()
#define  en end()
#define  ll long long int
#define  pb push_back
#define  mp make_pair
#define  pii pair<int,int>
#define  pll pair<ll,ll>
#define  vi vector<int>
#define  vll vector<long long int>
#define  vpll vector<pair<long long int,long long int> >
#define  vpii vector<pair<int,int> >
#define  vstr vector<string>
#define  mpii map<int ,int>
#define  mpll map<long long int,long long int >
#define  max3(a,b,ser) max(a,max(b,ser))
#define  min3(a,b,ser) min(a,min(b,ser))
#define  setbits(x)  __builtin_popcountll(x)
#define  zerobits(x) __builtin_ctzll(x) //zeros after rightmost set bit
#define  w(t) ll t; cin>>t; while(t--)
#define  vin(v,m) for(int i=0;i<m;i++){ll x;cin>>x; v.pb(x);}
#define  for0(i,m) for(int i=0;i<m;i++)
#define  for1(i,m) for(int i=1;i<=m;i++)
#define  forn(i,a,b) for(int i=a;i<=b;i++)
#define  forv(it,v) for(auto it=v.begin();it!=v.end();it++)
#define  mem(a,val) memset(a,val,sizeof(a))
#define  Sort(vec) sort(vec.begin(),vec.end())
#define  RSort(vec) sort(vec.rbegin(),vec.rend())
#define  eb emplace_back
#define  bs binary_search
#define  lb(v,a) lower_bound(v.begin(),v.end(),a)
#define  ub(v,a) upper_bound(v.begin(),v.end(),a)
#define  deb1(x) cerr<<#x<<": "<<x<<" "<<endl
#define  deb2(x, y) cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define  deb3(x, y, z) cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define  deb4(a, b, ser, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#ser<<": "<<ser<<" | "<<#d<<": "<<d<<endl
#define  FF first
#define  SS second
#define  yes "YES"
#define  no "NO"
#define  PI 3.141592653589793238462643383279502884L
#define  printv(v) for(auto it=v.bg;it!=v.en;it++) cout<<*it<<" ";

int main()
{
   int t;
   cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        int a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;
        stack<char> st;
        bool p = 1;
        for0(i, s.length())
        {
            if (s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                if (s[i] == ')')
                {
                    if (st.empty() || st.top() != '(')
                    {
                        p = 0;
                        cout << "NO" << endl;
                        break;
                    }
                    else st.pop();
                }
                else if (s[i] == ']') {
                    if (st.empty() || st.top() != '[')
                    {
                        p = 0;
                        cout << "NO" << endl;
                      
                        break;
                    }
                    else st.pop();

                }
                else if (s[i] == '}')
                {
                    if (st.empty() || st.top() != '{')
                    {
                        p = 0;
                        cout << "NO" << endl;
                        break;
                    }
                    else st.pop();
                }
            }
            else st.push(s[i]);
        }
        if (p == 0)
            continue;
        if (st.empty())
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
