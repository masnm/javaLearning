#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

#define chmax(a,b) if ( a < b ) a = b
#define chmin(a,b) if ( a > b ) a = b

void prepare_lookup_table ()
{
}

void do_task ()
{
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(-100, 100);
	uniform_int_distribution<int> gn(1, 10);
	ll n; n = gn(mt);
	cout << n << endl;
	for ( int i = 0 ; i < n ; ++i ) {
		for ( int j = 0 ; j < i+1 ; ++j ) {
			cout << dist(mt) << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	prepare_lookup_table();

	ll t = 1;
//	cin >> t;
	while ( t-- ) {
		do_task();
	}


	return 0;
}
