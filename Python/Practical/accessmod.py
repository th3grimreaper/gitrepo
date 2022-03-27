#this is an example of private access modifier in inheritance
#we use single underscore '_' to make the class variables and methods protected

#we use double underscore '__' to make the class variables and methods private
#to access private functions we use the syntax _Classname__methodname() when calling the method
#through a subclass

class Car:
    def __init__(self,windows,doors):
        self._windows=windows
        self._doors=doors

    def _showData(self):
        print(f'Windows in car: {self._windows}\nDoors in car: {self._doors}')

class Supercar(Car):
    def __init__(self,windows,doors,type):
        super().__init__(windows,doors)
        self.type=type
    
    def showData(self):
        super()._showData()
        print(f'Type of car: {self.type}')

audi_r8=Supercar(2,2,"drop top")
audi_r8._showData()
print(dir(audi_r8))