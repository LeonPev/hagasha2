#include<iostream>

using namespace std;

#define N 8
#define M 8

int main()
{
	int i, nArrIndex, mArrIndex;
	int arrN[N] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arrM[M] = { 9, 10, 11, 12, 13, 14, 15, 16 };
	nArrIndex = mArrIndex = N / 2;

	for (i = N/2; i > 1; i/=2)
	{
		if (arrN[nArrIndex] < arrM[mArrIndex])
		{
			nArrIndex += i/2;
			mArrIndex -= i/2;
		}
		else
		{
			nArrIndex += i/2;
			mArrIndex -= i/2;
		}
	}
	if (arrN[nArrIndex] < arrM[mArrIndex])
	{
		cout << "index: " << mArrIndex - 1 << "result : " << arrM[mArrIndex - 1] << endl;
	}
	else
	{
		cout << "index: " << nArrIndex - 1 << "result : " << arrN[nArrIndex - 1] << endl;
	}
	cin >> i;
	return 0;
}