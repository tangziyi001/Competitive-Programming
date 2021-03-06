/*
 *	USACO 2015 February Contest, Bronze 3
 *	Coded by Ziyi Tang
 *	DP
 */

//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
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

int n,m;
char all[20][20];
int dp[20][20];
int main(){
	freopen("hopscotch.in", "r", stdin);
  	freopen("hopscotch.out", "w", stdout);
	cin >> n >> m;
	REP(i,0,n){
		string line;
		cin >> line;
		REP(j,0,m){
			all[i][j] = line[j];
		}
	}
	dp[0][0] = 1;
	REP(i,0,n) REP(j,0,m){
		REP(k,0,i) REP(l,0,j){
			if(all[i][j] != all[k][l])
				dp[i][j] += dp[k][l];
		}
	}
	cout << dp[n-1][m-1] << endl;
	return 0;
}