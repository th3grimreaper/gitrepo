a=input("enter a: ")
b=input("enter b: ")
c=input("enter c: ")
if (a>b and a>c):
    print("{0} is largest".format(a))
elif (b>a and b>c):
    print("{0} is largest".format(b))
else:
    print("{0} is largest".format(c))
    