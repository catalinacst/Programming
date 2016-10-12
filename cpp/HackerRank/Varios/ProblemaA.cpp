#include <bits/stdc++.h>

using namespace std;

int main(){
  char cadena[30];
  cin >> cadena;
  int length = strlen(cadena);
  for(int i = 0; i < length; i++){
      if(cadena[i] == 'i'){
        cout << "N";
        return 1;
      }
  }
  cout << "S";
  return 1;
}
