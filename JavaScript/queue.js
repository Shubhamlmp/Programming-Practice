// LIFO - Last In First Out
let array = [1,2,3,4,5]

// Push - Appends an element to the end
function addToEnd (num) {
    newArray = array.push(num)
    console.log(array)
}

// Shift - takes an element from the beginning, advancing the queue
// so that the second element becomes the first
function removeFromFront (num) {
    newArray = array.shift(num)
    console.log(array)
}

// FIFO - First In First Out
function addToEnd (num) {
    newArray = array.push(num)
    console.log(array)
}

// Pop - takes an Element from the end
function getFromEnd (num) {
    newArray = array.pop(num)
    console.log(array)
}

addToEnd(6)
removeFromFront(1)
getFromEnd(5)