#include<iostream>
using namespace std;

void combine(int arr[],int s, int m, int e){
	int* buffer = new int[e+1]; // for the total size of the merged array coping
	
	int k = s;

	while ( k <= e){
		buffer[k] = arr[k];
		k = k + 1;
	}

	int i = s;
	int j = m + 1;
	k = s;

	while( i <=m && j <= e)	{
		if (buffer[i] <= buffer[j]){
			arr[k] = buffer[i];
			i = i + 1;
		} else {
			arr[k] = buffer[j];
			j = j + 1;
		}	
		k = k + 1;
	}

	while ( i <=m ){
		arr[k] = buffer[i];
		k = k + 1;
		i = i + 1;
	}	
	while ( j <= e) {
		arr[k] = buffer[j];
		k = k + 1;
		j = j + 1;
	}
	
	delete[] buffer;
}

// auxiliar function (helper function)
void mrgSort(int arr[], int s, int e){
	// base case 
	if ( s >= e ) {return;}
	int mid = (s+e)/2;
	
	mrgSort(arr, s, mid);
	mrgSort(arr,mid+1, e);
	combine(arr,s,mid,e);	
}

void mrgSort(int arr[],int n){ // wrapper function
	mrgSort(arr,0,n-1);
}

void display (int arr[], int n){
	for (int i=0; i<n ; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int arr[] = {102,294,11,0,98,34,53,80,89,200,555};
	int size = sizeof(arr)/sizeof(int);
	
	display(arr,size);
	mrgSort(arr,size);
	display(arr,size);	
  return 0;
}
