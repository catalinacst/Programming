#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int a, b, element, answer;
	vector<int> A, B;
	cin >> a >> b;
	while(a--){
		cin >> element;
		A.push_back(element);
	}
	while(b--){
		cin >> element;
		B.push_back(element);		
	}
	sort(A.begin(), A.end());
	for(int i = 0; i < B.size(); i++){
		answer = upper_bound(A.begin(), A.end(), B[i]) - A.begin();
			cout << answer << " ";
	}
	return 0;
}
