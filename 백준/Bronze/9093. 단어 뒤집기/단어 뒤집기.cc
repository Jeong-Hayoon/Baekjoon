#include <iostream>
using namespace std;
#include<string>

int main()
{
	int T;
	cin >> T;
	cin.ignore();

	string Sentence;

	for(int i= 0; i<T; i++)
	{
		getline(cin, Sentence, '\n');

		int Emptyidx = 0;
		int Prevemptyidx = 0;

		for (int x = 0; x <= Sentence.size(); x++)
		{
			Prevemptyidx = Emptyidx;

			if (Sentence[x] == ' ' || x == Sentence.size())
			{
				Emptyidx = x;

				for (int y = x - 1; y > Prevemptyidx - 1; y--)
				{
					if (y < 0)
						break;

					if (y == Prevemptyidx && Prevemptyidx != 0)
						break;

					cout << Sentence[y];
				}
				cout << " ";

			}
			else
				continue;
		}
		cout << endl;
	}

	return 0;
}