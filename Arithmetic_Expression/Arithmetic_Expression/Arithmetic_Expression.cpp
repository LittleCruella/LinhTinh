#include <math.h>
#include <iostream>
#define MAX 100
#include <random>
#include <ctime> 
#include<algorithm>
#include<vector>
#include <string>
#include <stack>


using namespace std;
int arr[100], f[100], n;
int solve(string expression_so_far,int result_so_far, int i)
{
	expression_so_far = "arr[0]";
	if (i > n)
	{
		if (result_so_far == 0)
		{
			cout << expression_so_far;
			return true;
		}
	}
	else

		if (solve(expression_so_far + "+" + "arr[i]", (result_so_far + arr[i]) % 101, i))
			return true;
		else if (solve(expression_so_far + "-" + "arr[i]", (result_so_far - arr[i]) % 101, i))
			return true;
		else if (solve(expression_so_far + "*" + "arr[i]", (result_so_far * arr[i]) % 101, i))
			return true;

	return false;





}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	solve("arr[0]", arr[0], n);
}