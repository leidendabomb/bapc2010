#include <iostream>
#include <list>

using namespace std;

int main()
{
	int numEntries = 0;
	cin >> numEntries;
	cin.ignore();
	
	while (numEntries--)
	{
		list<char> password;
		auto cursor = password.end();

		string entry;
		getline(cin, entry);

		for (char &c : entry)
		{
			switch (c)
			{
			case '<':
				if (cursor != password.begin())
					cursor--;
				break;

			case '>':
				if (cursor != password.end())
					cursor++;
				break;

			case '-':
				if (cursor != password.begin())
				{
					auto previous = cursor;
					password.erase(--previous);
				}

				break;

			default:
				password.insert(cursor, c);
				break;

			}
		}

		for (char &c : password)
			cout << c;
		cout << endl;
	}
	return 0;
}
