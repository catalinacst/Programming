#include <bits/stdc++.h>

using namespace std;

/* Concatenated Prime Numbers */

const int n = 10000000;
vector<int> criba (n, 0);

int f_criba(){
	criba[0] = 1;
	criba[1] = 1;
	for(int i = 2; i <= n; i++)
		if (criba[i] == 0)
			for(int j = i + i; j <= n; j = j + i)
				if (criba[j] == 0)
					criba[j] = 1;
	return 0;	
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	f_criba();
	int k, flat;
	string num;
	while(cin >> k){
		flat = 0;
		cin >> num;
		int length = num.size();
		for(int min = 0, max = k - 1; max < length; min = min + k, max = max + k){
			string subnum (num, min, k);
			int digito = atoi(subnum.c_str());
			if (criba[digito] == 0)
				flat = 1;
			else{
				flat = 0;
				break;
			}
		}
		if (flat == 0)
			cout << ":(" << endl;
		else if(flat == 1)
			cout << ":)" << endl;
	}
	return 0;
}