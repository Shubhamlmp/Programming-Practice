// Given a string, print the summation of digits
function count(str) {
    var sum = 0
    for (var i = 0; i < str.length; i++) {
        sum += parseInt(str[i])
    }
    return sum
}

console.log(count('351')) // returns 9