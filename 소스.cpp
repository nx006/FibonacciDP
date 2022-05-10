#include <iostream>
using namespace std;

int Fibonacci(int n, int* dp)
{
	if (n == 0) return dp[0];
	else if (n == 1) return dp[1];
	else if (dp[n] != -1) return dp[n]; //계산 한 적이 있다면
	dp[n] = Fibonacci(n - 1, dp) + Fibonacci(n - 2, dp);
	return dp[n];
}

void initializeDP(int* dp, int size)
{
	for (int i = 0; i < size; i++) {
		dp[i] = -1;
	}
	dp[0] = 0, dp[1] = 1;
}

int main(void)
{
	int userInput = 0;
	cin >> userInput;
	int* dp = new int[userInput + 1];
	initializeDP(dp, userInput+1);

	Fibonacci(userInput, dp);


	int result = Fibonacci(userInput, dp);
	cout << result;
	delete[] dp;
	return 0;
}