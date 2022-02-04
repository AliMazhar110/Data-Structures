#include <iostream>
using namespace std;

void insertion_sort(int *arr, int n){
    
}

void display(int arr[], int n){
    cout << "\nArray = ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
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