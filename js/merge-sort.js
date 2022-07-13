const combine = (arr, s, m, e) => {
  const buffer = [];

  for (let ele of arr) {
    buffer.push(ele);
  }

  let i = s;
  let j = m + 1;
  let k = s;

  while (i <= m && j < e) {
    if (buffer[i] <= buffer[j]) {
      arr[k] = buffer[i];
      i += 1;
    } else {
      arr[k] = buffer[j];
      j += 1;
    }

    k += 1;
  }

  while (i <= m) {
    arr[k] = buffer[i];
    i += 1;
    k += 1;
  }

  while (j <= e) {
    arr[k] = buffer[j];
    j += 1;
    k += 1;
  }
};

const mergeSort = (arr, s, e) => {
  if (s >= e) return;
  let m = Math.floor((s + e) / 2);

  mergeSort(arr, s, m);
  mergeSort(arr, m + 1, e);
  combine(arr, s, m, e);
};

const mrgSort = (arr, size) => {
  mergeSort(arr, 0, size);
};

const arr = [102, 294, 11, 0, 98, 34, 53, 80, 89, 200, 555];
const size = arr.length;

console.log(arr);
mrgSort(arr, size);
console.log(arr);
