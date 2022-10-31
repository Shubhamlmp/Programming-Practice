def solution(inputArray):
    
    product_list = []
    
    for i in range(len(inputArray)-1):        
        product =inputArray[i] * inputArray[i+1]        
        product_list.append(product)
        
        
    return max(product_list)
        
        