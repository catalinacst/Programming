#include <bits/stdc++.h>

using namespace std;

/* TGarden - Queue and Map*/

queue<pair<int,int> > garden;
vector<pair<int,int> > flower;
pair<int,int> pos, pos_ini;
vector <pair<int,int> > ::iterator i;
map<pair<int,int>, int> visited;

int f(){
	if(visited[pos] == 1)
		return 0;
	else
		return 1;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int N, M, T, x, y;
	cin >> N >> M >> T; 
	int temp_n = N;
	while(N--){
		cin >> x >> y;
		pos = make_pair(x,y);
		garden.push(pos);
	}
	while(M--){
		cin >> x >> y;
		pos = make_pair(x,y);
		visited[pos] = 1;
	}
	int time = 0, flower_die = temp_n;
	while(time < T){
		int cantidad = garden.size();
		for (int j = 0; j < cantidad; j++){
    		pos_ini = garden.front();
    		x = pos_ini.first; y = pos_ini.second; visited[pos_ini] = 1;
    		pos = make_pair(x+1,y); if(f() == 1) {garden.push(pos); flower_die++;}visited[pos] = 1;
    		pos = make_pair(x-1,y); if(f() == 1) {garden.push(pos); flower_die++;}visited[pos] = 1;
    		pos = make_pair(x,y+1); if(f() == 1) {garden.push(pos); flower_die++;}visited[pos] = 1;
    		pos = make_pair(x,y-1); if(f() == 1) {garden.push(pos); flower_die++;}visited[pos] = 1;
    		garden.pop(); 
		}
		time++;
	}
	cout << flower_die << endl;
	return 0;
}