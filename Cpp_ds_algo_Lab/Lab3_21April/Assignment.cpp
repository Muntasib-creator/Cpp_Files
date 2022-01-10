#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n){
	int i, j, min_idx;
	for (i = 0; i < n-1; i++){
		min_idx = i;
		for (j = i+1; j < n; j++)
		    if (arr[j] < arr[min_idx])
			    min_idx = j;
	swap(&arr[min_idx], &arr[i]);
	}
}
void printArray(int arr[], int size){
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}
int main(){
	// int arr[] = {64, 25, 12, 22, 11};
	// int n = sizeof(arr)/sizeof(arr[0]);
    int arr[100], n;
    cout<<"Enter Size: ";
    cin>>n;
    cout<<"Enter Array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout << "Given array: ";
	printArray(arr, n);
    cout<<"Press 1 or Bubble sort\npress 2 or Selection sort\n";
    int i;
    cin>>i;
    if(i==1){
        bubbleSort(arr,n);
        cout << "Sorted array after Bubble sort: ";
	    printArray(arr, n);
    } 
    else if(i==2){
        selectionSort(arr, n);
        cout << "Sorted array after Selection sort: ";
	    printArray(arr, n);
    }
    else cout<<"Invalid input\n";
	return 0;
}