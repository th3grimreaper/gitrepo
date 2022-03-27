list1=["porcupine", "tree", "is", "a", "great", "band"]
#indexing
#list1=["   0   ", "  1  ", " 2 ", "3", "  4  ", " 5 "]
#list1=["   -6  ", "  -5  ", "-4", "-3", " -2 ", " -1 "]
print(list1[0:6], len(list1))
string=str(input("enter a string to check if it's a palindrome:\n"))
if string==string[::-1]:
    print("yes")
else:
    print("no")

print(list1[-5:-1])
print(list1[1:5])
if print(list1[-5:-1])==print(list1[1:5]):
    print("yes they're same")
print(list1[0:])
print(list1[-6:])
str1="sex"
str0=str1.replace("sex", "coom")
print("say no to",str0.upper())
lis2=["1","2","3","78","-1"]
print(max(lis2))
print(min(lis2))
print(round(7.7775,3))

#list functions
print(len(list1))
list1.append("sdjs")#add given value to eol
print(list1)
list1.insert(6, "indeed")#insert given val at specified index
print(list1)
list1.remove("indeed")#remove given val
print(list1)
list1.pop() #pop last val
print(list1)
print(list1.index("a")) #print index
list1.reverse()#reverses order of elements
print(list1)
list2 = list1.copy()#copies contents of list1 in list2
list2.reverse()
print(list2)