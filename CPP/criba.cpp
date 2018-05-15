#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n; cin >> n;
	vector<int> criba (n, 0);
	for(int i = 2; i <= n; i++)
		if (criba[i] == 0)
			for(int j = i + i; j <= n; j = j + i)
				if (criba[j] == 0)
					criba[j] = 1;

	for(int i = 2; i < criba.size(); i++)
		if(criba[i] == 0)
			cout << i << endl;
	return 0;
}
