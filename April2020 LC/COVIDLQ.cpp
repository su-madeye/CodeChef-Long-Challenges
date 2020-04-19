/*
	Problem:	COVID Pandemic and Long Queue
	Code: 		COVIDLQ
	Link:		https://www.codechef.com/APRIL20B/problems/COVIDLQ
	Language:	C++
	Author:		Prakhar Tibrewal
	Score: 		100pts
*/

// Solution: 

#include <bits/stdc++.h>

#define ll long long int 
#define afor(i,a,b) for(ll i = a; i < b; i++)
#define tc() ll t; cin>>t; while(t--)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    tc(){
        ll n;
        cin >> n;
        ll A[n];
        ll flag = 1;
        vector <int> v;
        afor(i,0,n)
        {    
            cin >> A[i];
            if(A[i] == 1)
                v.push_back(i);
        }
        flag = 1;
        afor(i,1,v.size()){
            if(v[i]-v[i-1] < 6)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }    
}
