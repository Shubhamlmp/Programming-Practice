//NOTE: Array filters will provide element of the array in the form of array 
//either it is single valued i.e. number or string or whether it is an object of array

//1. filter single element from the array
//filter numbers from the array that divisible by 2
const filterNumbersDivisibleToANumber = (arrayOfNumbers, divisibleToNumber) => {
    //create a new array based on the passed array
    let filteredArrayElements = arrayOfNumbers.filter(f => f % divisibleToNumber === 0);
    return filteredArrayElements;
}
//original number array
const numbersArray = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16];
//assign found numbers array to another variable
const foundNumbers = filterNumbersDivisibleToANumber(numbersArray, 2);
console.log(foundNumbers);



//2. filter string from the array
//filter string from the array
const filterStringFromArray = (arrayOfNumbers, stringToFound) => {
    //create a new array based on the passed array
    let filteredArrayElements = arrayOfNumbers.filter(f => f === stringToFound);
    return filteredArrayElements;
}
//original strings of array
const stringArray = ['a','b','c','d','e','f','g','h'];
//assign found string array to another variable
const foundString = filterStringFromArray(stringArray, 'e');
console.log(foundString);




//3. filter objects from the array
//filter object from the array of objects
const filterObjectArrayElements = (arrayOfObjects, selectedId) => {
    //create a new array based on the passed array
    let filteredArrayElements = arrayOfObjects.filter(f => f.id === selectedId);
    return filteredArrayElements;
}
//original number array
const objectsArray = [{ id: 1, label: 'A'}, { id: 2, label: 'B'},{ id: 3, label: 'C'},{ id: 4, label: 'D'},{ id: 5, label: 'E'}];
//assign found objects array to another variable
const foundObjects = filterObjectArrayElements(objectsArray, 4);
console.log(foundObjects);