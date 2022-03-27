l1=[1,24,40,32,2175,46,387,100,7365,40.5]
'''for i in range(0,len(l1)):
    if l1[i]>40:
        print(l1[i], end=" ")
    else:
        continue
'''
for i in l1:
    if i > 40:
        print(i, end=" ")
    else:
        continue