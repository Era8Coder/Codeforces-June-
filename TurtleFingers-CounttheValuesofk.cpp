// TiMe DoEsN't HeAl AnYtHiNg; It JuSt TeAcHeS HoW tO lIvE wItH pAiN -> World Asks me why I love Her ?
/*
    Basically the Approach is to check all the cases -> Why ??
        2 < a < 100
        1 < l < 10^6 }-> We can use this much of small test cases to check all the cases possible :_
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef priority_queue <int, vector<int>, greater<int>> minheap;
typedef priority_queue <int> maxheap;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=a; i<b; i++)
const int N=1e9+7;
const int M=1e8+7;
 
int gcd(int a, int b){
    if(a > b){
        swap(a,b);
    }
    int dividend = b;
    int divisor = a;
    int remainder = b%a;
    while(remainder != 0){
        dividend = divisor;
        divisor = remainder;
        remainder = dividend%divisor;
    }
    return divisor;
}
 
    int mypow(int x, int n) {
        if (n == 0) return 1.0;
        if (n == 1) return x;

        double half = mypow(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half*x;
        }
    }

void solve(){
    int a,b,l;  cin >> a >> b >> l;
    set<int> best;
    int x = 0;
    while(l >= mypow(a,x)){               // TILL THE TIME IT IS BIGGER THAN IT
        int y = 0;
        while(l >= mypow(a,x)*mypow(b,y)){
            int k = mypow(a,x)*mypow(b,y);
            if(l%k == 0){
                best.insert(l/k);               // Inserting the different value in the set 
            }
            y++;
        }
        x++;
    }
    cout << best.size() << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;  
}