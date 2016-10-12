#include <bits/stdc++.h>
using namespace std;

vector<int> duplicate(vector<int> a, int n){
  int i, j = n;
  for(i = 0; i < n; i++){
    a[j] = a[i];
    j++;
  }
  return a;
}

int main(){
    int n, k, i, j;
    cin >> n >> k;
    vector<int> a(n+n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> outputOne = duplicate(a,n);
    int rot = k % n;
    if(k < n)
        j = k;
    else
        j = rot;
    for(i = 0; i < n; i++,j++)
        cout << outputOne[j] << " ";
    cout << endl;
    return 0;
}
