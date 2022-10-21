// Given a string, determine if there is a subsequence equal to "hello" or not.
function hello_substring(str) {
    const hello = "hello"
    var hello_idx = 0
    for (var i = 0; i < str.length; i++) {
        if (str[i] === hello[hello_idx]) {
            hello_idx++
            if (hello_idx == hello.length) {
                console.log('YES')
                return
            }
        }
    }
    console.log('NO')
}


hello_substring('ahhellllloou')
hello_substring('hlelo')
