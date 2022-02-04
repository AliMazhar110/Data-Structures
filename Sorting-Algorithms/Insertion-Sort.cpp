#include <iostream>
using namespace std;

void display(int arr[], int n){
    cout << "\nArray = ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j = j-1;       
        }
        arr[j+1] = key;
        display(arr, n);
    }
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
    return 0;
}