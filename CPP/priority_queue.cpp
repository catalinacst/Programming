#include <bits/stdc++.h>
using namespace std;

struct Event {
	string name;
	int freq, next, id;
	Event() {}
	Event(string _name, int _freq, int _next, int _id) {
		name = _name;
		freq = _freq;
		next = _next;
		id = _id;
	}

	bool operator < (const Event other) const {
		if (next != other.next) {
			return next > other.next;
		}
		return id > other.id;
	}

};

int main() {
	priority_queue<Event> pq;
	int n, k; cin >> n >> k;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		int f; cin >> f;
		pq.push(Event(s, f, f, i));
	}
	for (int i = 0; i < k; i++) {
		Event curr = pq.top(); pq.pop();
		cout << curr.name << " " << curr.next << endl;
		curr.next += curr.freq;
		pq.push(curr);
	}
	return 0;
}