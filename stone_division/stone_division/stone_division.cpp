#include <math.h>
#include <iostream>
#define MAX 100
#include <random>
#include <ctime> 
#include<algorithm>
#include<vector>
#include <string>
#include <stack>
#include <map>


using namespace std;
int arr[100];
int x, y;
map<long, long>dp;
map<long, bool>done;
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int sd(int n)
{
    if (done[n] == 1)
        return dp[n];
    int res = 0;
    for (int i = 0; i < y; i++)
    {
        if (n % arr[i] == 0 && n / arr[i] > 1)
        {
            res = max(res, 1 + (n / arr[i]) * sd(arr[i]));
        }
    }
    done[n] = 1;
    return dp[n] = res;
	
}

int main()
{
    int a, b;
    cin >> x;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        cin >> arr[i];
    }
    cout << sd(x);



    system("pause");
    return 0;
}