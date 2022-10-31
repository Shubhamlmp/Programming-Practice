def solution(inputArray):
    length = []
    ls = []
    for i in inputArray:    
        length.append(len(i))
    max_length = max(length)

    for i in inputArray:
        if len(i) == max_length:        
            ls.append(i)

    return ls
