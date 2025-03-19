#include <iostream> 
using namespace std;

int main()
{
	int A[5] = { 56,89,10,25,93 };
	int gecici;
	bool degisim = true;
	while (degisim)
	{
		degisim = false;
		for (int i = 0; i < 4; i++)
		{
			if (A[i] > A[i + 1])
			{
				gecici = A[i];
				A[i] = A[i + 1];
				A[i + 1] = gecici;
				degisim = true;
			}
		}
		if (!degisim)
		{
			break;
		}
		degisim = false;
		for (int i = 3; i >= 0; i--)
		{
			if (A[i] > A[i + 1])
			{
				gecici = A[i];
				A[i] = A[i + 1];
				A[i + 1] = gecici;
				degisim = true;
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
