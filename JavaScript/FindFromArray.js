//NOTE: Array find will provide element of the array either it is single valued 
//i.e. number or string or whether it is an object of array


//1. find single element from the array
//find numbers from the array that divisible by 2
const findNumbersDivisibleToANumber = (arrayOfNumbers, divisibleToNumber) => {
    //create a new array based on the passed array
    let findedArrayElements = arrayOfNumbers.find(f => f % divisibleToNumber === 0);
    return findedArrayElements;
}
//original number array
const numbersArray = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16];
//assign found numbers array to another variable
const foundNumbers = findNumbersDivisibleToANumber(numbersArray, 2);
console.log(foundNumbers);



//2. find string from the array
//find string from the array
const findStringFromArray = (arrayOfNumbers, stringToFound) => {
    //create a new array based on the passed array
    let filteredArrayElements = arrayOfNumbers.find(f => f === stringToFound);
    return filteredArrayElements;
}
//original strings of array
const stringArray = ['a','b','c','d','e','f','g','h'];
//assign found string array to another variable
const foundString = findStringFromArray(stringArray, 'e');
console.log(foundString);



//3. find objects from the array
//find numbers from the array that divisible by 2
const findObjectArrayElements = (arrayOfObjects, selectedId) => {
    //create a new array based on the passed array
    let findedArrayElements = arrayOfObjects.find(f => f.id === selectedId);
    return findedArrayElements;
}
//original number array
const objectsArray = [{ id: 1, label: 'A'}, { id: 2, label: 'B'},{ id: 3, label: 'C'},{ id: 4, label: 'D'},{ id: 5, label: 'E'}];
//assign found object array to another variable
const foundObjects = findObjectArrayElements(objectsArray, 4);
console.log(foundObjects);