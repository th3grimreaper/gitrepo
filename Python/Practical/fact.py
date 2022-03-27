def fact(num):
    fact=1
    if(num>=0):
        for i in range(1,num+1):
            fact=fact*i
        print(f'factorial of {num} is {fact}')
    else:
        print('enter a positive number')

try:
    n=int(input("enter a number:"))
except:
    print("only integer inputs are allowed")
else:
    fact(n)