#include<iostream>
using namespace std;
int main()
{
	int A[5] = { 5,9,6,2,4 };
	int gap, degisim = 1, gecici;
	gap = 5;
	while ((gap != 1) || (degisim == 1))
	{
		gap = (int)gap / 1.3;
		if (gap < 1)
		{
			gap = 1;
			degisim = 0;
		}
		for (int i = 0; i < 5 - gap; i++)
		{
			if (A[i] > A[i + gap])
			{
				gecici = A[i];
				A[i] = A[i + gap];
				A[i + gap] = gecici;
				degisim = 1;
			}
		}
	}
	cout << " siralanmis dizi " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " A[" << i << "] = " << A[i] << endl;

	}
}
