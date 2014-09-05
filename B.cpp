#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int numEntries = 0;
	cin >> numEntries;
	cin.ignore();
	
	while (numEntries--)
	{
		int n, m;
		cin >> n >> m;
		int a, b;
		cin >> a >> b;
		vector<int> singles(n);
		for (int i = 0; i < n; i++) {
			cin >> singles[i];
		}
		int minutes = 0;
		int score = 0;
		for (int i = 0; i < n; i++) {
			if (minutes == m) {
				minutes = 0;
			}
			if (singles[i] + minutes < m) {
				minutes += singles[i];
			} else {
				int penaltyA = (singles[i] - (m - minutes)) * a;
				int penaltyB = (m - minutes) * b;
				if (penaltyA <= penaltyB) {
					score += penaltyA;
					minutes = 0;
				} else {
					score += penaltyB;
					minutes = singles[i];
				}
			}
		}
		if (minutes)
			score += (m - minutes) * b;
		cout << score << endl;
	}
	return 0;
}
