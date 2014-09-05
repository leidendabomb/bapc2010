#include <iostream>
#include <vector>
#include <map>

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
		cin.ignore();

		vector<int> genome2(n);

		{
			map<int, int> mapping;
			int x;
			for (int i = 0; i < n; i++)
			{
				cin >> x;
				mapping[x] = i;
			}

			for (int i = 0; i < n; i++)
			{
				cin >> x;
				genome2[i] = mapping[x];
			}
		}

		bool space = false;
		for (int start = 0; start < n; start++)
		{
			int i = genome2[start];
			int max = i, length = 1;

			while (i != start)
			{
				++length;
				i = genome2[i];
				if (i > max)
					max = i;
			}

			if (max - start == length - 1)
			{
				cout << (space ? " " : "") << start+1 << "-" << max+1;
				space = true;
			}
		}

		cout << endl;
	}
	return 0;
}
