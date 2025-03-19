#include<iostream>
using namespace std;
int main()
{
	int A[5] = { 4,7,2,9,5, };
	int j, gecici;
	for (int i = 1; i < 5; i++)
	{
		j = i - 1;
		gecici = A[i];
		while ((j >= 0) && (gecici < A[j]))
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = gecici;
	}
	cout << " siralanmis dizi " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " A[" << i << "] = " << A[i] << endl;
	}
	return 0;
}
