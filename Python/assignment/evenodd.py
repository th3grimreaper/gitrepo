num=int(input("enter a number: "))
if (num%2)==0:
    print("{0} is even".format(num))
else:
    print("{0} is odd".format(num))
    '''
    comment
    '''
    #jkgkgkj
    #ukgjkg
#program for printing left aligned star pattern
num=int(input("enter number of rows: "))
for i in range(0, num) :
    for j in range(0, i+1) :
        print("* ", end="")
    print()

#sum of sequence of factorials
def sum(n):
    sum=0
    fact=1
    for i in range(1,n+1):
        fact*=i
        sum+=1.0/fact
    print(sum)
n=int(input("enter a number: "))
sum(n)

#take int input print factorial

def fact(x):
    fact=1
    for i in range(1,n+1):
        fact*=i
    print("factorial of {0} is {1}".format(n,fact))
n=int(input("enter a number: "))
fact(n)

#check palindrome
def isPal(s):
    return s==s[::-1]
string=str(input("enter a word to check if its a palindrome: "))
if isPal(string):
    print("yes")
else:
    print("no")

#convert string to list
