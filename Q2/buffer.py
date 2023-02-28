#Eu poderia utilizar a Queue, mas acho que vocês querem que eu implemente na mão.
class Buffer:
    def __init__(self, max_size): #max size é o tamanho máximo do buffer
        self.__head = 0
        self.__tail = -1
        self.count = 0
        self.__max_size = max_size
        self.__elements = [None] * max_size

    def add(self, item):
        if self.count == self.__max_size:
            print(f"ERROR - FULL BUFFER - {item} not added")
        else:
            self.__tail = (self.__tail + 1) % self.__max_size # Para garantir que no começo o count fique em 1 e a tail fique em 0
            #print(f"T = {self.__tail}")
            self.__elements[self.__tail] = item
            self.count += 1

    def remove(self):
        if self.count == 0:
            print("ERROR - EMPTY BUFFER")
            return None
        else:
            item = self.__elements[self.__head]
            #print(f"H = {self.__head}")
            self.__head = (self.__head + 1) % self.__max_size
            self.count -= 1
            return item
        
    def show(self):
        if self.count == 0:
            return None
        else:
            queue = [None] * self.count
            id = self.__head
            for i in range(self.count):
                queue[i] = self.__elements[id]
                id = (id + 1) % self.__max_size

            return queue