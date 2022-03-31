#include<iostream>
using namespace std;

void swap(int arr[],int x,int y){
  int temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
}

void bubble(int arr[],int n){
  for (int i=n-1; i>0;i--){
    if (arr[i] < arr[i-1]){
      swap(arr,i,i-1);
    }
  }
}

void bubbleSort (int arr[],int n){
  for (int i=0;i<n;i++){
    bubble(arr,n);
  }
}

void display(int arr[],int n){

  for (int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  int arr[] = {2,10,12,4,1,18,1};
  int n = sizeof(arr)/sizeof(int);  
  display(arr,n);
  bubbleSort(arr,n);
  display(arr,n);
  return 0;
}

// time complexity O(N^2) && space complexity O(1)