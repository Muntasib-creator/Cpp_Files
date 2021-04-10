#include <iostream>
using namespace std;
int binary_Search(int arr[], int low, int high, int x)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if(arr[mid] > x)
            return binary_Search(arr, low, mid - 1, x);
        else
            return binary_Search(arr, mid + 1, high, x);
    }
    else{
        return -2;
    }
}
int main()
{
    int arr[] = {2, 5, 6, 8, 10, 13};
    int x = 15;
    int length = sizeof(arr) / sizeof(arr[0]);
    int index = binary_Search(arr, 0, length-1, x);
    if(index == -2)
    {
        cout<<"Element is not found"<<endl;
    }
    else {
        cout<<"Element is found at Location: "<<index<<endl;
    }
    return 0;
}
