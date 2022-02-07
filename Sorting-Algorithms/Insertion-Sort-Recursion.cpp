#include<iostream>
using namespace std;

void display(int arr[], int n){
    cout << "\nArray = ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void insertion_sort(int arr[], int n, int i){
    if(i==n){
        return;
    }   
    int key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1] = arr[j];
        j=j-1;
    }
    arr[j+1] = key;
    display(arr,n);
    return insertion_sort(arr, n, i+1);
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
    insertion_sort(arr,n,1);
    return 0;
}