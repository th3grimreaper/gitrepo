n=input("enter temperature in celcius:")
try:
    f=float(n)
    cel=(f-32.0)*5.0/9.0
    far=cel*(9.0/5.0)+32
except:
    print("please enter a number")
else:
    print("temperature in celcius is",cel)
    print("temperature in farenheit is",far)
finally:
    print("the program executed successfully")
