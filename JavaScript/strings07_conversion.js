// Given a string, invert case and replace comma with space
function conversion(str) {
    var sol = "" // solution string
    for (var i = 0; i < str.length; i++) {
        if (str[i] === ",") {
            sol += " "
        } else if (str[i] === str[i].toUpperCase()) {
            sol += str[i].toLowerCase()
        } else if (str[i] === str[i].toLowerCase()) {
            sol += str[i].toUpperCase()
        }
    }
    return sol
}


conversion('happy,NewYear,enjoy')