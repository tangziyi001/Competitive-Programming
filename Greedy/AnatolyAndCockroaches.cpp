/*
 *	Codeforces 719B
 *	Created by Ziyi Tang
 *
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
const int INF = 0x3f3f3f;
const ll INFL = (ll)1E18;
const int dir[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
#define REP(i,s,t) for(int i=(s);i<(t);i++)
#define FILL(x,v) memset(x,v,sizeof(x))
#define MAXN 1000
#define MOD 1000000007

int main(){
	int n;
	string line;
	cin >> n >> line;
	int minp = INF;

	// brbrbr...
	int cont = 0;
	int wB = 0, wR = 0;
	REP(i,0,n){
		// 0,2,4...
		if((i&1) == 0){
			if(line[i] == 'r'){
				if(wB > 0){
					wB--;
				} else {
					cont++;
					wR++;
				}
			}
		} else {
			if(line[i] == 'b'){
				if(wR > 0){
					wR--;
				} else {
					cont++;
					wB++;
				}
			}
		}
	}
	minp = min(minp, cont);
	// rbrbrb...
	cont = 0;
	wB = 0;
	wR = 0;
	REP(i,0,n){
		// 0,2,4...
		if((i&1) == 1){
			if(line[i] == 'r'){
				if(wB > 0){
					wB--;
				} else {
					cont++;
					wR++;
				}
			}
		} else {
			if(line[i] == 'b'){
				if(wR > 0){
					wR--;
				} else {
					cont++;
					wB++;
				}
			}
		}
	}
	minp = min(minp, cont);

	cout << minp << endl;
	return 0;
}