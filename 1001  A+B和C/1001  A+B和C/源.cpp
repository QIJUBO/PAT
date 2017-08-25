#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	long a[5][4];
	for (int i = 1;i <= 4;i++)
	{
		for (int j = 1;j <= 3;j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1;i <= 4;i++)
	{
		if (a[i][1] + a[i][2]>a[i][3])
		{
			cout << "Case #" << i << ": true" << endl;
		}
		else
		{
			cout << "Case #" << i << ": false" << endl;
		}
	}
	system("pause");
}