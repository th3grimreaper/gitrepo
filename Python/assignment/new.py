name=input("enter your name: ")
age=input("enter your age: ")
def func(x,y):
    putx=x.replace("praveen", "siddhant")
    print("Your name is "+ putx.upper() +" and you're " + y + " years old.")
    newstr="Your name is "+ putx.upper() +" and you're " + y + " years old."
    print("The length of the string is " + str(len(newstr)) + " characters.\n")
func(name,age)
print(-7//2)
print(7//2)
new_list=[-468,2,436,865,83215]
print("No") if min(new_list) <= 0 else print(min(new_list))
var=input("enter a string value: ")
print("the value is {0}".format(var))