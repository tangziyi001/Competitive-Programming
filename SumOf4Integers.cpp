#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		if (n >= 37){
			cout << 0 << endl;
		}
		else{
			// 36: 1 1
			// 35: 4 2
			// 34: 8899 8989 9898 9988 4 2
			// 33: 9987 9978 9879 9897 9789 9798 9888 +4
			int count = 0;

			for (int a = 0; a <= 9; a++){
				int ab;
				for (int b = 0; b <= 9; b++){
					int bb;
					for (int c = 0; c <= 9; c++){
						int cb;
						for (int d = 0; d <= 9; d++){
							int db;
							if (a+b+c+d == n){
								count += 1;
							}
							
						}
					}
				}
			}
			cout << count << endl;

		}
	}
	return 0;
}
