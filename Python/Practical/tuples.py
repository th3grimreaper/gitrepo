tup1 = ()#empty tuple
print(tup1)
ls=[1,2,3,4,5,5,"shf"]
tup2=tuple(ls)
print(tup2)
print(type(tup2))
print(len(tup2))
#list of tuples
tup3=[(1,2),(3,2),(4,45)]
print(tup3)
i=(1,2)
if i in tup3:
    print("yes")
else:
    print("no")