
class dog():
    def __init__(self,name,brid):
        self.name = name
        self.brid = brid
        self.__height = 20

    def display(self):
        print(self.name , "is name of dog")
        print(self.brid , "is brid of animal",self.__height)

class cat(dog):
    def __init__(self , name , brid , quote):
        self.quote = quote

    def result(self):
        print("shinchan and {}".format(self.quote))

class animal(cat):

    def result(self):
        print("happy birthday everyone")

tommy  = cat("rocky" , "camal" , "cat and dog are bhai bhai ")

chowmy = animal("chipmunk","canalia","thanks every one")

rocky = dog("tiger","happy sunday")

rocky.display()



chowmy.result()

tommy.result()

