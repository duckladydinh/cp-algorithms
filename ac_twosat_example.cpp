#include <bits/stdc++.h>
#include <atcoder/twosat>

using namespace std;

int main() {
	cout << "Hello: atcoder/twosat!" << "\n";
	atcoder::two_sat ts(10);

	ts.add_clause(0, false, 1, false);
	ts.add_clause(1, true, 2, true);
	ts.add_clause(0, true, 0, true);
	cout << "ts.satisfiable = " << ts.satisfiable() << "\n";

	const vector<bool> ans = ts.answer();
	for (int i = 0; i < ans.size(); ++i) {
		cout << "ans[" << i << "] = " << ans[i] << "\n";
	}

	return 0;
}
