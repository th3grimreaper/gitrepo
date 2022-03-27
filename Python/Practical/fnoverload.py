def area(l=None,b=None):
    if b==None:
        return l**2
    else:
        return l*b

def vol(l=None,b=None,h=None):
    if b==None and h==None:
        return l**3
    else:
        return l*b*h

sq=area(2)
rect=area(2,4)
print(f'area of square is {sq}')
print(f'area of rectangle is {rect}')
sqv=vol(2)
rectv=vol(2,4,6)
print(f'volume of square is {sqv}')
print(f'volume of rectangle is {rectv}')
