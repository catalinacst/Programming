#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int N, box;
	int small = 1000000010, big = 0;
	cin >> N;
	while(N--){
		cin >> box;
		if(box < small)
			small = box;
		if(box > big)
			big = box;
		cout << small + big << endl;
	}
	return 0;
}
