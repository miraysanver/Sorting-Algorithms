#include<iostream>
using namespace std;
int main()
{
	int A[5] = { 7,9,4,3,8 };
	cout << " siralanmamis dizi " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " A(" << i << ") = " << A[i] << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (A[j] > A[j + 1])
			{
				int gecici;
				gecici = A[j];
				A[j] = A[j + 1];
				A[j + 1] = gecici;
			}
		}
	}
	cout << " siralanmis dizi  " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << " A(" << i << ") = " << A[i] << endl;
	}
	return 0;

}
