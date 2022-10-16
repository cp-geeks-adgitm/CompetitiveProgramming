n = int(input("Number of terms: "))

n1, n2 = 0, 1
i = 0

if n <= 0:
   print("Please enter a positive and more than zero integer value.")

elif n == 1:
   print("Fibonacci sequence upto",n,":")
   print(n1)

else:
   print("Fibonacci sequence:")
   while i < n:
       print(n1)
       j = n1 + n2
       n1 = n2
       n2 = j
       i+= 1
