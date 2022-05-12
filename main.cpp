#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, m;
	cin >> a >> b >> c >> m;

	auto p = int{ 0 };
	auto w = int{ 0 };
	for (int i = 0; i < 24; ++i) {
		if (p + a <= m) {
			p += a;
			w += b;
		}
		else {
			p -= c;
			if (p < 0) {
				p = 0;
			}
		}
	}

	cout << w;

	return 0;
}