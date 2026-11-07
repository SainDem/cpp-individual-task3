#include <iostream>
using namespace std;

int main() {
	double a[10][10];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	for (int i = 0; i < n; i++) {
		bool hasNegative = false;

		for (int j = 0; j < n; j++)
			if (a[i][j] < 0) {
				hasNegative = true;
				break;
			}
		if (hasNegative)
			for (int j = 0; j < n; j++)
				a[i][j] = 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
}
