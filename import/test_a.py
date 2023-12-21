
print ("start test_a")

class child:
    d = 3
    e = 4
    f = 5
    def __init__(self):
        self.c = 10

obj = obj1 = child()
obj1.c = 100
print (f"test_a obj.c {obj.c}")
print ("end test_a")
if __name__ == "__main__":
    print ("mian test_a")
