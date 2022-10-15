function draw(number) {
  // Math.pow doest the exponent math and stores it into the result variable.
  let result = Math.pow(1378, number);
  //Turns the result (thats type number) into a string, then finds and stores the last number into the answer variable.
  let answer = result.toString().slice(-1);
  console.log(answer);
}
