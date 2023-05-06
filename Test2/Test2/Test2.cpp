#include <math.h>
#include <iostream>
#define MAX 100
#include <random>
#include <ctime> 
#include<algorithm>
#include<vector>
#include <string>
#include <unordered_set>
using namespace std;









int searchCircularArray(int nums[], int n, int target)
{
    // search space is nums[low…high]
    int low = 0, high = n - 1;

    // loop till the search space is exhausted
    while (low <= high)
    {
        // find the mid-value in the search space and
        // compares it with the target
        int mid = (low + high) / 2;

        // if the target is found, return its index
        if (target == nums[mid]) {
            return mid;
        }

        // if right half nums[mid…high] is sorted and `mid` is not
        // the target element
        if (nums[mid] <= nums[high])
        {
            // compare target with nums[mid] and nums[high]to know
            // if it lies in nums[mid…high] or not
            if (target > nums[mid] && target <= nums[high]) {
                low = mid + 1;      // go searching in the right sorted half
            }
            else {
                high = mid - 1;     // go searching left
            }
        }

        // if left half nums[low…mid] is sorted, and `mid` is not
        // the target element
        else {
            // compare target with nums[low] and nums[mid] to know
            // if it lies in nums[low…mid] or not
            if (target >= nums[low] && target < nums[mid]) {
                high = mid - 1;     // go searching in the left sorted half
            }
            else {
                low = mid + 1;      // go searching right
            }
        }
    }

    // target not found or invalid input
    return -1;
}
int findfirst(int arr[], int n, int x)
{
    int dau = -1;
    
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            dau = mid;
            right = mid - 1;

        }
        else if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }

    }
    return dau;
}
int ceil(int arr[], int n, int x)
{
    
    int result = -1;
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
            result = x;
        else if (arr[mid] < x)
        {
            left = mid + 1;
            
        }
        else
        {
            right = right - 1;
            result = arr[mid];
        }

    }
    return result;
}
int floor(int arr[], int n, int x)
{

    int result = -1;
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
            result = x;
        else if (arr[mid] < x)
        {
            left = mid + 1;
            result = arr[mid];
        }
        else
        {
            right = right - 1;
            
        }

    }
    return result;
}
int peak(int arr[], int n)
{

    int result = -1;
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[0] >= arr[1])
            result = arr[0];
        else if (arr[n - 1] >= arr[n - 2])
            result = arr[n - 1];
        else if ( arr[mid >= arr[mid + 1] && arr[mid] >= arr[mid - 1]])
            result = arr[mid];
        if (arr[mid] < arr[mid + 1])
        {
            left = mid + 1;
           
        }
        else if (arr[mid] < arr[mid - 1])
        {
            right = mid - 1;
           
        }

    }
    return result;
}
void generatePermutations(int arr[], int n) {
    sort(arr, arr + n); // Sắp xếp lại mảng theo thứ tự tăng dần ban đầu
    do {
        // In ra hoán vị hiện tại
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } while (next_permutation(arr, arr + n)); // Tạo ra hoán vị tiếp theo của mảng
}




void generateSubsets(vector<int>& subset, int index, int arr[], int n) {
   
    for (int i = 0; i < subset.size(); i++) {
        cout << subset[i] << " ";
    }
    cout << endl;

    
    for (int i = index; i < n; i++) {
        subset.push_back(arr[i]); 
        generateSubsets(subset, i + 1, arr, n);
        subset.pop_back();
        
    }
}

int main()
{
    string str;
    vector< string > words;
    unordered_set< string > wordSet;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        words.push_back(str);
    }
    for (int i = 0; i != n; i++)
    {
        reverse(words[i].begin(), words[i].end());
        cout << words[i] << endl;
    }
    
        


    return 0;
    system("pause");
}