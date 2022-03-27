class Car:
    name=None
    price=None

    def __init__(self):
        self.name=input("enter the car name:")
        self.price=input("enter the car price:")

class Supercar(Car):
    def __init__(self):
        super().__init__()
        self.rpm=input("enter the car rpm:")

    def showdata(self):
        print(f'{self.name} costs {self.price} dollars and it produces a power of {self.rpm}rpm.')

car1 = Supercar()
car1.showdata()
