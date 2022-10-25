function printNums(number) {
  let nums = []; //The array where all of the numbers are held

  //Loops over the number, increasing i by 1 after every loop
  for (let i = 0; i < number; i++) {
    nums.push(i + 1); //Adds i to the nums array
  }
  console.log(nums.join(" ")); // Joins all of the numbers in the array nums, seperated by a space
}
