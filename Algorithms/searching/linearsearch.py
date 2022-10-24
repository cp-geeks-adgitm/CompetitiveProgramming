def linearsearch(a, x):

    for i in range(len(a)):

        if a[i] == x:
            return i

    return -1


# main program
a = [2, 3, 4, 10, 40]
x = 10

# Function call
result = linearsearch(a, x)

if result != -1:
    print("Element is present at index", result)
else:
    print("Element is not present in array")
