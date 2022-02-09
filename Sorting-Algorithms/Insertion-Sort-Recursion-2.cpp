#include<iostream>
using namespace std;

void display(int arr[], int n){
    cout << "\nArray = ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void insertion_sort(int arr[], int n){
    if(n<=1){                 // O(1) ... (i)
        return;
    }
    insertion_sort(arr,n-1);  // O(n) WORST/BEST/AVERAGE ... (ii)
    int k = arr[n-1];         // O(1) ... (iii)
    int j = n-2;              // O(1) ... (iv)
    while(j>=0 && arr[j]>k){  // O(n) WORST / O(1) BEST ... (v)
        arr[j+1] = arr[j];    // O(1) ... (vi)
        j-=1;                 // O(1) ... (vii)
    }
    arr[j+1] = k;             // O(1) ... (viii)
}

void get_element(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << "Enter A Number = ";
        cin >> arr[i];
    }
}

int main(void){
    int n;
    cout << "Total number of elements = ";
    cin >> n;
    int arr[n];
    cout << endl;
    get_element(arr,n);
    display(arr,n);
    insertion_sort(arr,n);
    display(arr,n);
    return 0;
}