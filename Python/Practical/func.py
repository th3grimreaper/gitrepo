def rect_area(len, brd):
    return len*brd
def rect_vol(ar, h):
    print(f'Volume is: {ar*h}')

l=int(input("enter the length:"))
b=int(input("enter the breadth:"))
h=int(input("enter the height:"))

#function calls
area=rect_area(l,b)
print("Area is:",area)
rect_vol(area,h)