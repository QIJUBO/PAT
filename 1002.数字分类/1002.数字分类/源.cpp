#include <iostream> 
#include <iomanip> 
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>a;//c++�в��ܶ�������a[n]  n������δ֪��������vector<int>a
	int b;
	int d = 0;
	double c[5];
	int k = 0;
	for (int i = 0;i <= 4;i++)
	{
		c[i] = 0;
	}
	for (int i = 1;i <= n;i++)
	{
		cin >> b;
		a.push_back(b);
	}
	for (int j = 0;j < n;j++)
	{
		//A1 = �ܱ�5����������������ż���ĺͣ�
		if (a[j] % 5 == 0 && a[j] % 2 == 0)
		{
			c[0] = c[0] + a[j];
		}
		//A2 = ����5������1�����ְ�����˳����н�����ͣ�������n1-n2+n3-n4...��
		if (a[j] % 5 == 1)
		{

				if (k % 2 == 0)
				{
					c[1] = c[1] + a[j];
					k++;
				}
				else
				{
					c[1] = c[1] - a[j];
					k++;
				}
			}
			//A3 = ��5������2�����ֵĸ�����
		if (a[j] % 5 == 2)
		{
			c[2]++;
		}
		//A4 = ��5������3�����ֵ�ƽ��������ȷ��С�����1λ��
		if (a[j] % 5 == 3)
		{
			d++;
			c[3] += a[j];
		}
		//A5 = ��5������4��������������֡�
	if (a[j] % 5 == 4)
		{
			if (c[4] < a[j])
			{
				c[4] = a[j];
			}
		}
	}
	for (int i = 0;i < 5;i++)
	{
		switch (i)
		{
		case 0:
			if(c[0]!=0)
			cout << c[0] << " ";
			else
			{
				cout << "N" << " ";
			}
			break;
		case 1:
			if (c[1] != 0)
				cout << c[1] << " ";
			else
			{
				cout << "N" << " ";
			}
			break;
		case 2:
			if (c[2] != 0)
				cout << c[2] <<" ";
			else
			{
				cout << "N" << " ";
			}
			break;
		case 3:
			if (c[3] != 0)
				cout << fixed << setprecision(1) << c[3] / d << " ";//��setprecision(n)���þ��ȣ�����n��ʾ��ȷ��С�����nλ  ���ͷ�ļ�#include <iomanip> 
			else
			{
				cout << "N" << " ";
			}	
			break;
		default:
			if (c[4] != 0)
				cout << fixed << setprecision(0) << c[4];
			else
			{
				cout << "N";
			}
			break;
		}
	}
	system("pause");
}