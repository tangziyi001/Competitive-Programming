/*
 *	UVA 11264
 *	Created by Ziyi Tang
 *	Greedy Algorithm: S[i-1] < c[i] && S[i] < c[i+1]
 */

//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <list>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <bitset>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<vpi> vvpi;
const int INF = (int)1E9;
const long INFL = (long)1E18;
const int dir[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
#define REP(i,s,t) for(int i=(s);i<(t);i++)
#define FILL(x,v) memset(x,v,sizeof(x))
#define MAXN 1000

vector<ll> all;
int main(){
	int test;
	cin >> test;
	while(test--){
		all.clear();
		int num;
		cin >> num;
		REP(i,0,num){
			ll tmp;
			cin >> tmp;
			all.push_back(tmp);
		}
		ll sum = all[0];
		if(num == 1){
			cout << 1 << endl;
			continue;
		}
		int re = 2;
		REP(i,1,num-1){
			if(sum < all[i] && sum+all[i] < all[i+1]){
				sum += all[i];
				re++;
			}
		}
		cout << re << endl;
	}
	return 0;
}
