#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
	int numEntries = 0;
	cin >> numEntries;
	cin.ignore();
	
	while (numEntries--)
	{
		int n;
		cin >> n;
		vector<bool> ropes(n+1);
		ropes[1] = true;
		int ropeCount = n / 2 + n % 2;
		
		for (int i = 1; i <= n; i++) {
			if (i % 2) {
				if (3 * i + 1 > n) {
					ropeCount++;
				}
			}
		}
		cout << ropeCount << endl;

	}
	return 0;
}
