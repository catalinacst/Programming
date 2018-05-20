#include <bits/stdc++.h>

using namespace std;

/* TGarden Set */

set <pair<int, int> > garden, flower, temp;
set <pair<int, int> >::iterator it2;
pair<int, int> pos;

bool f(){
	it2 = flower.find(pos);
	if (it2 != flower.end())
		return false; // posicion de flor inmortal
	else
		return true; // si la nueva posicion no es de una flor inmortal
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int N, M, T, x, y;
	cin >> N >> M >> T;
	while(N--){
		cin >> x >> y;
		pos = make_pair(x,y);
		garden.insert(pos);
	}
	while(M--){
		cin >> x >> y;
		pos = make_pair(x,y);
		flower.insert(pos);
	}
	int time = 0;
	while(time < T){
		int cantidad = garden.size(), i = 0;
		for (set <pair<int, int> >::iterator it = garden.begin(); i < cantidad; it++){
    		x = (*it).first; y = (*it).second;
    		pos = make_pair(x+1,y); if (f() == true) temp.insert(pos);
    		pos = make_pair(x-1,y); if (f() == true) temp.insert(pos);
    		pos = make_pair(x,y+1); if (f() == true) temp.insert(pos);
    		pos = make_pair(x,y-1); if (f() == true) temp.insert(pos);
    		i++;
		}
		time++;
		for (set <pair<int, int> >::iterator it = temp.begin(); it != temp.end(); it++){
			x = (*it).first; y = (*it).second;
			pos = make_pair(x,y); garden.insert(pos);
		}
		temp.clear();
	}
	cout << garden.size() << endl;
	return 0;
}


/*
N -> invasores
M -> flores incomibles
T -> empieza a matar la plaga
       H2
 -1	XX H1 H2 03
 H2 H1 H1 XX 13
	H2 H1 H2 23
	30 H2 32 33

*/