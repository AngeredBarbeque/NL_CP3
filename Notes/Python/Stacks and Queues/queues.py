class Queue:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def enqueue(self,item):
        self.items.append(item)
    
    def dequeue(self):
        if not self.is_empty():
            return self.items.pop(0)
            #Normally you would alse have to shift the index of every item in the list. Python circumvents this because lists are automatically linked, instead of requiring the lists to be intentionally linked.
        else:
            return None
    
    def peek(self):
        if not self.is_empty():
            return self.items[0]
        else:
            return None
    
    def size(self):
        return len(self.items)