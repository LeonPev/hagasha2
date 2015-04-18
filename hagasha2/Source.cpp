#include<iostream>

using namespace std;

#define N 8
#define M 16

int main()
{
	int i, j, nArrIndex, mArrIndex, maxSize;
	int arrN[N] = { 1, 2, 3, 4, 5, 6, 7, 16 };
	int arrM[M] = { 9, 10, 11, 12, 13, 14, 15, 17 };
	mArrIndex = M / 2;
	if (N > M)
		maxSize = N;
	else
		maxSize = M;


	for (i = N / 2, j = M / 2, maxSize = maxSize/2; maxSize>1; i /= 2, j /= 2, maxSize /= 2)
	{
		if (arrN[nArrIndex] < arrM[mArrIndex])
		{
			if (nArrIndex + i / 2 < N)
				nArrIndex += i / 2;
			if (mArrIndex - j / 2 > 0)
				mArrIndex -= j / 2;
		}
		else
		{
			if (nArrIndex - i / 2 > 0)
				nArrIndex -= i / 2;
			if (mArrIndex + j / 2 < M)
				mArrIndex += j / 2;
		}
	}
	if (arrN[nArrIndex] > arrM[mArrIndex])
	{
		cout << "found in M index: " << mArrIndex - 1 << " result : " << arrM[mArrIndex - 1] << endl;
	}
	else
	{
		cout << "found in N index: " << nArrIndex - 1 << " result : " << arrN[nArrIndex - 1] << endl;
	}
	cin >> i;
	return 0;
}