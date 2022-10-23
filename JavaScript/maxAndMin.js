// To find the largest and smallest number in an array.


const arr = [10, 2, 3, 4, 50];
const findMaxMin = (arr) => {
  let max = arr[0];
  let min = arr[0];

  for(let i = 0; i < arr.length; i++) {
    if(arr[i] > max) {
      max = arr[i];
    } else if (arr[i] < min) {
      min = arr[i];
    }
  }

  return {
    "max": max,
    "min": min
  };
}
console.log(findMaxMin(arr)); 
