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
vector<int> orders(vector<vector<int>> order_prep)
{
    vector< pair<int, int> > result;
    vector<int> index;

    for (int i = 0; i < order_prep.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < order_prep[i].size(); j++)
        {
            sum += order_prep[i][j];
        }
        result.push_back(make_pair(sum, i + 1));

    }
    sort(result.begin(), result.end());
    for (int i = 0; i < order_prep.size(); i++)
    {
        index.push_back(result[i].second);
    }
    return index;
}

void Collection(int a, int b, int c, int d)
{
    int sum = 0;
    if (c > b)
        cout << "SAD";
    else
        
        if (a % c != 0)
        
            cout << "SAD";
        else
        {
            for (int i = 0; i < c; i++)
            {
                sum = sum + b * c;
                b--;

            }
            cout << sum;
        }
        
}

bool comparePairs(const pair<int, int>& p1, const pair<int, int>& p2)
{
    if (p1.first > p2.first)
        return true;
    
    else
        return false;
}
int sum_array_elements(int arr[], int n)
{
    if (n < 0) {
        return 0;
    }
    else {
        return arr[n] + sum_array_elements(arr, n - 1);
    }
}
int Walking_Master(int a, int b, int c, int d)
{
    if (a == c && b == d)
        return 0;
    else
    {
        if (d - b + a < c)
            return -1;
        else if (d - b + a == c)
            return abs(d - b);
        else
            return abs(d-b) + abs(c-(d-b+a));

    }
}
int min(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int max_arr(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
bool comp(const int a, const int b) 
{
    return a > b;
}
int frequent(int arr[], int n)
{
    int dem = 0;
    int m = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < m; i++)
    {
        if (arr[i] == n)
            dem++;
    }
    return dem;
}

int equal_stack(int x1[], int x2[], int x3[], int n1, int n2, int n3)
{
    
    stack<int> h1, h2, h3;
    int a,b,c;
    a = b = c = 0;
    for (int i = n1 - 1; i >= 0; i--)
    {
        a += x1[i];
        h1.push(a);
    }
    for (int i = n2 - 1; i >= 0; i--)
    {
        b += x2[i];
        h2.push(b);
    }
    for (int i = n3 - 1; i >= 0; i--)
    {
        c += x3[i];
        h3.push(c);
    }
    while (true)
    {
        
        if (h1.top() == h2.top() && h2.top() == h3.top())
            return h1.top();
        else if (h1.top() > h2.top() && h1.top() > h3.top())
        {
            h1.pop();
        }
        
        
        else if (h2.top() > h1.top() && h2.top() > h3.top())
        {
            h2.pop();
        }
        else if (h3.top() > h2.top() && h3.top() > h1.top())
        {
            h3.pop();
        }
    }



}
int two_game_stack(int x, int a[], int b[], int na, int nb)
{
    int maxnum, total, i, j;
    maxnum = total = i = j = 0;
    while (i < na && total + a[i] <= x)
    {
        total += a[i];
        i++;
        maxnum++;
    }
    while (j < nb && i >= 0)
    {
        total += b[j];
        j++;
        while (i > 0 && total > x)
        {
            total -= a[i];
            i--;
        }
        if (total <= x && maxnum < i + j)
            maxnum = i + j;
    }
    return maxnum;
}
int tong_chu_so(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int super_digit(int n, int k)
{
    int temp = tong_chu_so(n) * k;
    while (temp >= 10)
    {
        temp = tong_chu_so(temp);
    }
    return temp;
}

void pass_crack(string a[], string b, int n)
{
    int l = b.length();
    string temp;
    int begin = 0;
    for (int i = begin; i < l; i++)
    {
        temp += b[i];
        for (int j = 0; j < n; j++)
        {
            if (temp == a[j])
            {
                cout << temp << " ";
                begin = i + 1;
            }
            break;
        }
    }
    pass_crack(a, b.substr(begin + 1, l - 1), n);
}











int main()
{
    string arr[100], la;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> la;
    pass_crack(arr, la, n);


    system("pause");
    return 0;






}
