#https://www.hackerrank.com/challenges/equality-in-a-array/problem?isFullScreen=false

def equalizeArray(arr):
    # Write your code here
    count_array = []
    
    for num in arr:
        count_array.append(arr.count(num))
        
    return len(arr) - max(count_array)
