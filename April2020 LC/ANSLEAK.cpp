/*
	Problem:	Leaked Answers (Challenge) 
	Code: 		ANSLEAK 
	Link:		https://www.codechef.com/APRIL20B/problems/ANSLEAK 
	Language:	C++
	Author:		Prakhar Tibrewal
	Score: 		72.7pts
*/

// Solution: 
#include <bits/stdc++.h>

#define ll long long int 
#define ff(i,a,b) for(ll i = a; i < b; i++)
#define bf(i,b,a) for(ll i = b-1; i >= 0; i--)
#define itf(i,a) for(auto i = a.begin(); i != a.end(); i++)
#define mii(m) map<int,int> m;
#define vi(v) vector<int> v;
#define tc ll t; cin>>t; while(t--)

using namespace std;

int main(){
    tc{
        ll a,b,c;
        cin >> a >> b >> c;
        vi(ans);
        ff(i,0,a){
            ll x;
            mii(m);
            ff(j,0,c){
                cin >> x;
                m[x]++;
            }
            ll mfirst = 0;
            ll msecond = 0;
            itf(j,m){
                if(j->second > msecond){
                    msecond = j->second;
                    mfirst = j->first;
                }
            }
            ans.push_back(mfirst);
        }
        ff(i,0,a)
            cout << ans[i] << " ";
        cout << endl;
    }
}