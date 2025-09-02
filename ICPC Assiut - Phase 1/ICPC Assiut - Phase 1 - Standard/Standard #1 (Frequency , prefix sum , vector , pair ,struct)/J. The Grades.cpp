#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student {
	string name;
	int a, b, c, d, total;
};

bool c(student a, student b) {
	if (a.total != b.total) return a.total > b.total;
	else return a.name < b.name;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	vector<student>v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].name >> v[i].a >> v[i].b >> v[i].c >> v[i].d;
		v[i].total = v[i].a + v[i].b + v[i].c + v[i].d;
	}

	sort(v.begin(), v.end(), c);

	for (auto e : v) {
		cout << e.name << " " << e.total << " " << e.a << " " << e.b << " " << e.c << " " << e.d << endl;
	}

	return 0;
}