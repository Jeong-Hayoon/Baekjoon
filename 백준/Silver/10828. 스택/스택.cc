#include <iostream>
using namespace std;
#include<stack>

int main()
{
	stack<int> stack;

	int n = 0;
	cin >> n;

	int X = 0;

	string str;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		if (str == "push")
		{
			cin >> X;
			stack.push(X);
		}
		else if (str == "pop")
		{
			if(!stack.empty())
			{
				int num = stack.top();
				stack.pop();
				cout << num << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else if (str == "size")
		{
			cout << stack.size() << endl;
		}
		else if (str == "empty")
		{
			if (stack.empty())
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else if (str == "top")
		{
			if (!stack.empty())
			{
				cout << stack.top() << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
	}

	return 0;
}