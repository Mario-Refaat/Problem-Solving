#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

struct var {
	string name, value, leftvalue, rightvale, op;
};

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<var> vr;
	unordered_map<string, string> mp;

	for (int i = 0; i < n; ++i) {
		var v;
		string val;
		cin >> v.name >> val >> val;

		if (val[0] == '0' || val[0] == '1') {
			v.value = val;
			mp[v.name] = v.value;
		}
		else {
			v.leftvalue = val;
			cin >> v.op >> v.rightvale;
			v.value = "";
		}
		vr.push_back(v);
	}

	vector<int> mn(m), mx(m);
	for (int i = 0; i < m; i++) {
		int res0 = 0, res1 = 0;

		unordered_map<string, bool> b0;
		for (auto& e : vr) {
			if (!e.value.empty()) {
				bool val = (e.value[m - 1 - i] == '1');
				b0[e.name] = val;
				res0 += val;
			}
			else {
				bool l, r;
				if (e.leftvalue == "?") l = false;
				else l = b0[e.leftvalue];
				if (e.rightvale == "?") r = false;
				else r = b0[e.rightvale];

				bool res;
				if (e.op == "OR") res = l || r;
				else if (e.op == "XOR") res = (l != r);
				else res = l && r;

				b0[e.name] = res;
				res0 += res;
			}
		}

		unordered_map<string, bool> b1;
		for (auto& e : vr) {
			if (!e.value.empty()) {
				bool val = (e.value[m - 1 - i] == '1');
				b1[e.name] = val;
				res1 += val;
			}
			else {
				bool l, r;
				if (e.leftvalue == "?") l = true;
				else l = b1[e.leftvalue];
				if (e.rightvale == "?") r = true;
				else r = b1[e.rightvale];

				bool result;
				if (e.op == "OR") result = l || r;
				else if (e.op == "XOR") result = (l != r);
				else result = l && r;

				b1[e.name] = result;
				res1 += result;
			}
		}

		if (res0 < res1) mn[i] = 0, mx[i] = 1;
		else if (res0 > res1) mn[i] = 1, mx[i] = 0;
		else mn[i] = 0, mx[i] = 0;
	}

	string mnres(m, '0'), mxres(m, '0');
	for (int i = 0; i < m; i++) {
		mnres[i] = mn[m - 1 - i] ? '1' : '0';
		mxres[i] = mx[m - 1 - i] ? '1' : '0';
	}

	cout << mnres << '\n' << mxres << endl;

	return 0;
}