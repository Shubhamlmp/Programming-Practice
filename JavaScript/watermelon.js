function splitWatermelon(weight) {
  //% Gives the remainder of the operation. So in this case any even number % 2 will be 0.
  if (weight % 2 == 0) {
    console.log("YES");
    // If the weight cannot be split evenly in half, then the number is odd and will never be able to be split into two even parts.
  } else {
    console.log("NO");
  }
}
