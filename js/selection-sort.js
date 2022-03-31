function swap(arr, i, j) {
  let temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

function locSmallest(arr, i) {
  for (let j = i; j < arr.length; j++) {
    if (arr[i] > arr[j]) {
      i = j;
    }
  }

  return i;
}

function selSort(arr) {
  for (let i = 0; i < arr.length; i++) {
    let j = locSmallest(arr, i);
    swap(arr,i,j)
  }
}

const arr = [2, 10, 12, 4, 1, 18, 1];
console.log(arr);
selSort(arr);
console.log(arr);

// time complexity O(N^2) && space complexity O(1)