def power(num,exp):
    res=1
    for i in range(exp):
        res*=num
    print(f'{num} to the power {exp} is {res}')

n=int(input("enter a number:"))
ex=int(input("enter exponent:"))
power(n,ex)