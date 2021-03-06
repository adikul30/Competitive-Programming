/*
 *	adikul30
 *	Aditya Kulkarni <aditya.kulkarni15@siesgst.ac.in>
 */
#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define REPR(i, a, b) for(int i = a; i >= b; --i)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define what_is(x) cerr << #x << " is " << x << endl;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

int main()
{
	// freopen("in", "r", stdin);
	// freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--) {
		ll a,b;
		cin >> a >> b;
		ll n;
		cin >> n;
		ll q = (a+b) / 2;
		while(n--) {
			cout << q << endl;
			string response;
			cin >> response;
			if (response == "CORRECT") break;
			else if (response == "TOO_SMALL"){
				a = q + 1;
			}
			else if (response == "TOO_BIG"){
				b = q - 1;
			}
			if (a == 0 && b == 1) q = 1;
			else q = (a+b) / 2;
		}
	}
	
	return 0;
}