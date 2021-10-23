#include <bits/stdc++.h>
using namespace std;

// Function to find nth magic number
int nthMagicNo(int n)
{
	int pow = 1, answer = 0;

	while (n)
	{
	pow = pow*5;

	if (n & 1)
		answer += pow;

	n >>= 1; // or n = n/2
	}
	return answer;
}

int main()
{
	int n = 5;
	cout <<nthMagicNo(n) << endl;
	return 0;
}
