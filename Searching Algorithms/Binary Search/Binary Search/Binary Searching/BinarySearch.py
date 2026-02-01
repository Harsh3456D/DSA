def binarySearch(arr:list, targetVal):
    left = 0
    right = len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        
        if arr[mid] == targetVal:
            return mid
        
        if arr[mid] < targetVal:
            left = mid + 1
        else:
            right = mid - 1
    
    return -1

mylist = [2,4,6,7,12,22,27,37,43,54,74,89,99]
target = 7
result = binarySearch(mylist,target)

if result == -1:
    print("Value not found")
else:
    print(f"Value at index: {result}")