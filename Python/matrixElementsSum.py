def solution(matrix):
    
    ls = []
    for i, elem in enumerate(matrix):    
        for j in range(len(elem)):      
            if matrix[i][j] != 0:          
                if i==0:
                    ls.append(matrix[i][j])
                elif i>=1:              
                
                    if matrix[i-1][j] == 0:
                        matrix[i][j] = 0
                    elif matrix[i-1][j] != 0:                  
                    
                        ls.append(matrix[i][j])
    
    return sum(ls)

    