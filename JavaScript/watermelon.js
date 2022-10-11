function splitWatermelon(weight) {
  //% Gives the remainder of the operation. So in this case any even number % 2 will be 0.
  if (weight % 2 == 0) {
    console.log("YES");
    // If the weight cannot be split evenly in half, then the number is odd.
  } else {
    console.log("NO");
  }
}

splitWatermelon(13);
