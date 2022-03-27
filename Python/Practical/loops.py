n=int(input("enter number of rows:"))
for i in range(1,n+1):
    for j in range(i):
        print("*",end=" ")
    print()
for n in range(1,7,2):
    print(n)

#while loop
n=0
age=5
print("\nthe while loop starts here:")
while n<age:
    print(n)
    n+=1