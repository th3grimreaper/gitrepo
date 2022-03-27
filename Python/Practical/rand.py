import random
for i in range(10):
    x=random.random() #random() method takes no arguments
    print(x)

#we can use random.random() for floating point values
#we can use random.randrange(start,stop,step) for integer values

#to select a random value from a list or sequence
l=[1,2,3,4,5,6,234,523]
for i in range(len(l)):
    print(random.choice(l)) #choice(seq) chooses a random value from seq

#to use it on dictionaries, first convert the dictionary to list