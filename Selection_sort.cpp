#include<iostream>
using namespace std;
int main()
{
	int gecici;
	cout << " dizi elemanlari " << endl;
	int dizi[5] = { 5,8,2,9,1 };
	for (int i = 0; i < 5; i++)
	{
		cout << " A(" << i << ") = " << dizi[i] << endl;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (dizi[i] > dizi[j])
			{
				gecici = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = gecici;
			}
		}
	}
	cout << " siralanmis dizi " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " A(" << i << ") = " << dizi[i] << endl;
	}

	return 0;
}
