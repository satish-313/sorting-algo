#include<iostream>
#include<cstdlib>
#define Max 100
using namespace std;

int main () {
  // int nums[] = {3,2,1,4};int len = sizeof(nums)/sizeof(nums[0]);
  int nums[Max];
  int number;
  cout << "enter a number between 100 : " << endl;
  cin >> number;

  for (int i=0;i<number;i++) {
    nums[i] = rand();
  }

  for (int i=0; i<number ;i++){
    for (int j=i+1;j<number;j++){
      if (nums[i] > nums[j]) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }

  for (int i=0;i<number;i++){
    cout << nums[i] << " ";
  }
  cout << endl;
  // time complexity O(N^2) && space complexity O(1)
  return 0;
}