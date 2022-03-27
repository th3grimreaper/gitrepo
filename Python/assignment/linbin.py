def linear_search(arr, x):
  
    for i in range(len(arr)):
  
        if arr[i] == x:
            return i
  
    return -1

def binary_search(arr, low, high, x):

	if high >= low:

		mid = (high + low) // 2

		if arr[mid] == x:
			return mid

		elif arr[mid] > x:
			return binary_search(arr, low, mid - 1, x)

		else:
			return binary_search(arr, mid + 1, high, x)

	else:
		return -1

arr = [ 2, 3, 4, 10, 40 ]
x = 3
linres=linear_search(arr,x)
if linres != -1:
    print("element present in location ",str(linres))
else:
    print("element not found")

result = binary_search(arr, 0, len(arr)-1, x)

if result != -1:
	print("Element is present at index", str(result))
else:
	print("Element is not present in array")
