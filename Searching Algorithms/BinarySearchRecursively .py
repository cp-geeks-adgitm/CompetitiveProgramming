def binary_search(start,end,test_list,target): 
  if start<=end:
     mid = (start+end) // 2
     if test_list[mid] == target:
       return mid +1
     elif target < test_list[mid]:
       return binary_search(start,mid-1,test_list,target)
     elif target > test_list[mid]:
       return binary_search(mid+1,end,test_list,target)
  else:
     return -1

test_list = [ 45, 78, 56, 23, 89 ,965]
target = 34
location = binary_search(0, len(test_list)-1,test_list, target)

if location != -1:
	print("Element is present at ", str(location))
else:
	print("Element is not present in test array.")
