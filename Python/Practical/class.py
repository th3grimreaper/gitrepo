class Student:

    sect="D"

    def __init__(self):
        self.name=input("enter name: ")
        self.age=int(input("enter age: "))
        self.gender=input("enter your gender: ")
    def accessData(self):
        print(f"Name of the student is {self.name}") 
        print(f"Age of the student is {self.age}") 
        print(f"Gender of the student is {self.gender}") 
    
    @classmethod
    def section(cls):
        return f"The section is {cls.sect}"
    
    @staticmethod
    def _class(c='12th'):
        print(f'The class is {c}')        

stu1=Student()
print()
stu1.accessData()
print(Student.section())
Student._class()