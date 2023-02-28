#Eu poderia smimplesmente utilizar a Queue, mas acho que vocês querem que eu implemente na mão.
class Buffer:
    def __init__(self, max_size):
        self.start = 0
        self.end = 0
        self.elements = [None] * max_size

    def add(self, item):
        self.elements[self.end] = item
        self.end = (self.end + 1) % len(self.elements)
        if self.end == self.start:
            self.start = (self.start + 1) % len(self.elements)

    def remove(self):
        if self.start != self.end:
            item = self.elements[self.start]
            self.start = (self.start + 1) % len(self.elements)
            return item
        else:
            return None
        
if __name__ == "__main__":
    b = Buffer(5)

    b.add("a")
    b.add("b")
    b.add("c")
    b.add("d")
    b.add("e")
    b.add("b")

    print(b.elements)
    print(b.start)
    print(b.end)