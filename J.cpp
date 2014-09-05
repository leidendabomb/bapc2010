#include <iostream>
#include <list>

using namespace std;

struct word
{
	int x;
	int y;
	int length;
	string word;

	list<word*> conflicts;
};

int main()
{
	int numEntries = 0;
	cin >> numEntries;
	cin.ignore();
	
	while (numEntries--)
	{
		int H, V;
		cin >> H >> V;

		map<int, word> horizontal;
		map<int, word> vertical;

		for (int i = 0; i < H; i++)
		{
			int x, y;
			cin >> x >> y;
			horizontal[y].x = x;
			horizontal[y].y = y;
			cin >> horizontal[y].word;
			horizontal[y].length = horizontal[y].word.size();
		}

		for (int i = 0; i < V; i++)
		{
			int x, y;
			cin >> x >> y;
			vertical[x].x = x;
			vertical[x].y = y;
			cin >> vertical[x].word;
			vertical[x].length = vertical[x].word.size();

			for (int y = y; y < vertical[x].y + vertical[x].length; y++)
			{
				if (horizontal.count(y))
				{

				}
			}
		}
	}
	return 0;
}
