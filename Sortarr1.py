# Daily_programming_challange_2024
def sort(arr):
    count_0=0
    count_1=0
    count_2=0
    for num in arr:
        if num==0:
          count_0 +=1
        elif num==1:
          count_1 +=1
        else:
          count_2 +=1
    index=0     
    for i in range(count_0):
        arr[index]=0
        index+=1
    for i in range(count_1): 
        arr[index]=1
        index+=1
        
    for i in range(count_2):
        arr[index]=2
        index+=1

arr=[0,1,2,1,0,2,1,0] 
sort(arr)
print(arr)
