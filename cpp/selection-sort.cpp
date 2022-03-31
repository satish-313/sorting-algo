#include<iostream>
using namespace std;

void swap(int arr[],int x, int y){
  int temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
}

int locOfSmallest(int arr[],int s, int e){
  int i = s;
  int j = i;
  while(i <= e){
    if (arr[i] < arr[j]){
      j = i;
    }
    i++;
  }

  return j;
}

void selSort(int arr[],int n){
  int i=0;
  while(i<n-1){
    int j = locOfSmallest(arr,i,n-1);
    swap(arr,i,j);
    i++;
  }
}

void display(int arr[],int n){
  int i = 0;
  while(i<n){
    cout << arr[i] << " ";
    i++;
  }

  cout << endl;
}

int main(){
  int arr[] = {2,10,12,4,1,18,1};
  int n = sizeof(arr)/sizeof(int); //size
  display(arr,n);
  selSort(arr,n);
  display(arr,n);
  return 0;
}

// time complexity O(N^2) && space complexiyt O(1)