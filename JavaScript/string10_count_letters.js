// Given a string, print the the letters ascending with count
function count_letters(str) {
    var counter = {}
    for (var i = 0; i < str.length; i++) {
        var letter = str[i]
        if (counter[letter] === undefined) { // key does not exist
            counter[letter] = 1
        } else {
            counter[letter]++
        }
    }
    var sorted_keys = Object.keys(counter).sort()
    for (var i = 0; i < str.length; i++) {
        console.log(sorted_keys[i] + " : " + counter[sorted_keys[i]])
    }
}

count_letters('regff')