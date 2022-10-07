#importing array as name of arr
import array as arr
#defining integer type as i and storing it under[]
a=arr.array('i',[23,45,67,23,12])
#initializing counter as result =0
result=0
#running for loop to loop through values in an array
for values in a:
     result+=values #incrementing the value as looping continously through values in an array

#printing the result
print(result)