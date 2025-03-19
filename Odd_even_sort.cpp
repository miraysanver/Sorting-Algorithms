#include<iostream>
using namespace std;
int main()
{
	int A[5] = { 7,9,4,6,3 };
	int gecici;
	bool degisim = false;
	while (!degisim)
	{
		degisim = true;
		for (int i = 0; i < 4; i += 2)
		{
			if (A[i] > A[i + 1])
			{
				gecici = A[i];
				A[i] = A[i + 1];
				A[i + 1] = gecici;
				degisim = false;
			}
		}

		for (int i = 1; i < 4; i += 2)
		{

			if (A[i] > A[i + 1])
			{
				gecici = A[i];
				A[i] = A[i + 1];
				A[i + 1] = gecici;
				degisim = false;
			}
		}

	}
	cout << " siralanmis dizi " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " A[" << i << "] = " << A[i] << endl;
	}
	return 0;
}
