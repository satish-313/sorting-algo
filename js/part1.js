// const readline = require("readline");
// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout,
// });

const nums = [];
let num = Math.floor(Math.random() * 100);

for (let i=0;i<num;i++){
  nums.push(Math.floor(Math.random() * 100000))
}

for (let i = 0; i < nums.length; i++) {
  for (let j = i + 1; j < nums.length; j++) {
    if (nums[i] > nums[j]) {
      let temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
    }
  }
}

// time complexity O(N^2) && space complexity O(1)
console.log(nums);
