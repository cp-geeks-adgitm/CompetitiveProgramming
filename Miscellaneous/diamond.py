def hollow_pattern(l):
    
    for i in range(1, l+1):
        for j in range(1,l-i+1):
            print(" ", end="")
        for j in range(1, 2*i):
            if j==1 or j==2*i-1:
                print("*", end="")
            else:
                print(" ", end="")
        print()
    for i in range(l-1,0, -1):
        for j in range(1,l-i+1):
            print(" ", end="")
        for j in range(1, 2*i):
            if j==1 or j==2*i-1:
                print("*", end="")
            else:
                print(" ", end="")
        print()

def solid_pattern(l):
    for i in range(1, l+1):
        for j in range(1,l-i+1):
            print(" ", end="")
        for j in range(1, 2*i):
            print("*", end="")
        print()
    for i in range(l-1,0, -1):
        for j in range(1,l-i+1):
            print(" ", end="")
        for j in range(1, 2*i):
            print("*", end="")
        print()

line = int(input("Number of Rows : "))
print("hollow Diamond Pattern")
hollow_pattern(line)
print("solid Diamond Pattern")
solid_pattern(line)
