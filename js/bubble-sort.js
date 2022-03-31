function bubbleSort(arr) {
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        let temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

const arr = [2, 10, 12, 4, 1, 18, 1];
console.log(arr);
bubbleSort(arr);
console.log(arr);

// time complexity O(N^2) && space complexity O(1)
