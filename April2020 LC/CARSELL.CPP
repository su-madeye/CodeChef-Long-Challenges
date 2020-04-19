/*
	Problem:	Sell All the Cars
	Code: 		CARSELL
	Link:		https://www.codechef.com/APRIL20B/problems/CARSELL
	Language:	C++
	Author:		Prakhar Tibrewal
	Score: 		100pts
*/

// Solution: 

#include <bits/stdc++.h>

#define ll long long int 
#define afor(i,a,b) for(ll i=a;i<b;i++)
#define tc ll t; cin >> t; while(t--)

using namespace std;

int main() {
    tc{
        ll mod = 1000000007;
        ll n;
        cin >> n;
        ll A[n];
        afor(i,0,n)
            cin >> A[i];
        sort(A,A+n);
        ll yr = 0;
        ll sum = 0;
        for(ll i = n-1; i >= 0; i--){
            ll a = A[i] - yr;
            if(a > 0)
                sum += a;
            yr++;
        }
        cout << sum % mod << endl;
    }
}