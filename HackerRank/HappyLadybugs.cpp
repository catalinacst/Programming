#include <bits/stdc++.h>

using namespace std;

int main(){
  int g, n, flag = 1;
  vector <int> lady(100);
  cin >> g;
  while(g--){
    cin >> n;
    char b[n];
    cin >> b;
    int i = 0;
    int n_aux = n;
    while(n_aux > 0){
      int a = b[i];
      lady[a] = lady[a] + 1;
      i++;
      n_aux--;
    }
    if(n == lady[95]){
      cout << "YES" << endl;
      flag = 0;
    }
    else{
      if(lady[95] >= 1){
        for(int i = 65; i <= 90 && flag == 1; i++){
          if(lady[i] == 1){
            cout << "NO" << endl;
            flag = 0;
          }
        }
      }
      else{
        int cont = 0;
        for(int i = 0; i <= n - 1 && flag == 1; i++){
          if(b[i]==b[i+1])
            cont++;
          else{
            if(cont == 0){
              cout << "NO" << endl;
              flag = 0;
            }
            else
              cont = 0;
          }
        }
      }
    }
    if(flag == 1)
      cout << "YES" << endl;
      lady.assign(100, 0);
      flag = 1;
  }
  return 1;
}
