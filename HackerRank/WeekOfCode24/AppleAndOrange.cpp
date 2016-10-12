#include <bits/stdc++.h>

using namespace std;

int det(vector<int> distances, int a, int s, int t, int m){
  int i = 0, d_a, falls = 0;
  while(i < m){
    d_a = a + distances[i];
    if(d_a >= s && d_a <= t)
      falls++;
    i++;
  }
  return falls;
}

int main(){
  int i, s, t, a, b, m, n;
  cin >> s >> t >> a >> b >> m >> n;
  vector<int> apple(m);
  vector<int> orange(n);
  for(i = 0; i < m; i++)
    cin >> apple[i];
  for(i = 0; i < n; i++){
    cin >> orange[i];
  }
  int a_falls = det(apple,a,s,t,m);
  int b_falls = det(orange,b,s,t,n);
  cout << a_falls << endl;
  cout << b_falls << endl;
}
