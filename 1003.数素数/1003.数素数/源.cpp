#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	cin >> M >> N;
	int a = 0;
	int b = 0;
	for (int i = 2;i <= 104729;i++)
	{
		for (int j = 2;j <i;j++)
		{
			if (i%j == 0)
			{
				a++;
				break;
			}
		}
		if (a==0)
		{
			b++;
			if (b >= M&&b <= N)
			{
				if ((b - M + 1) % 10 == 0)
				{
					cout << i << endl;
				}
				else {
					cout << i << " ";
				}

			}
		}
		else
		{
			a = 0;
		}
		
	}
	system("pause");
}

    //ËØÊý
	/*int a = 0;
	for (int i =2;i <101;i++)
	{
		for (int j = 2;j < i;j++)
		{
			if (i%j == 0)
			{
				a++;
				break;
			}
			//cout << j;
		}
		if (a == 0)
		{
			cout << i << " ";
		}
		else
		{
			a = 0;
		}
	
	}*/
