#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"

            
#include <iostream>

// Function to partition the array and return the pivot index
int partition(int arr[], int arr2[], int low, int high, int& cnt) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
            swap(arr2[i], arr2[j]);
            cnt++; // Increment the swap count
        }
    }

    std::swap(arr[i + 1], arr[high]);
    swap(arr2[i+1], arr2[high]);
    cnt++; // Increment the swap count for the pivot

    return i + 1;
}

// Function to perform the Quick Sort
void quickSort(int arr[],int arr2[], int low, int high, int& cnt) {
    if (low < high) {
        int pivotIndex = partition(arr,arr2, low, high, cnt);

        // Recursive calls for the two partitions
        quickSort(arr,arr2, low, pivotIndex - 1, cnt);
        quickSort(arr,arr2, pivotIndex + 1, high, cnt);
    }
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
   // std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n], arr2[n], arr3[n], arr4[n];
  //  std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        arr3[i] = arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin>>arr2[i];
        arr4[i] = arr2[i];
    }
    int cnt1 = 0, cnt2 = 0; // Initialize swap count

    // Perform Quick Sort and count swaps
    quickSort(arr,arr4, 0, n - 1, cnt1);
    quickSort(arr2,arr3, 0, n - 1, cnt2);
    if(cnt1>=cnt2)
    {
        for(int i= 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<nl;
        for(int i= 0; i<n; i++)
        {
            cout<<arr4[i]<<" ";
        }
    }
    else
    {
        for(int i= 0; i<n; i++)
        {
            cout<<arr3[i]<<" ";
        }
        cout<<nl;
        for(int i= 0; i<n; i++)
        {
            cout<<arr2[i]<<" ";
        }
    }

    cout<<nl;

   // std::cout << "swaps: " << cnt1 <<" " <<cnt2<<std::endl;
    }
    
    
    
    return 0;
}
