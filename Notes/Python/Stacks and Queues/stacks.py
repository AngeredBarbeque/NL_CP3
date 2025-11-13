#               What is time complexity in programming?

#   Big-O notation, a way of describing the worst case in terms of equations preformed for an algorithm to be completed. Is directly tied to the amount of time taken by the algorithm.

#               What are the levels of time complexity?

#   O(1), no matter the size of the array, it only takes a single operation. The fastest. Constant time. Looks for a specifc index of an item in an array.

#   O(n), takes time directly proportional to the number of items in the list. Second best for middling sized arrays. Linear time. Looking through a list 1 item at a time.

#   O(n log(n)), takes time proportional to the number of items times the log of the number of items. Second best for very small and very large arrays.  Linear Logarithmic. Most sorting algorithms.

#   O(n^2), takes time proportional to the square of the number of items in the list. Quickly becomes the slowest. Quadratic time. Sorting algorithms like bubble sort, selection sort, and insert sort.

#                          What is a stack?

#   A method of storing information that only allows you to access items from the top, and only add items to the top. The top is the end of the list that actually contains the information.

#                     What does LIFO stand for?

#   last in first out structure. (You can only take and add to the top/end)

#              What are the things that a stack can do?

# Add to the top, check if it's empty, take an item off the top, view the item on the top, and check the size of the stack.

#             How are stacks normally written in python?

#class Stack:
#    def __init__(self):
#        self.items = []
#
#    def push(self,item):
#        self.items.append(item)
#
#    def is_empty(self):
#        return len(self.items) == 0
#
#    def pop(self):
#        if not self.is_empty():
#            return self.items.pop()
#        else:
#            return None
#    
#    def peek(self):
#        if not self.is_empty():
#            return self.items[-1]
#        else:
#            return None
#    
#    def size(self):
#        return len(self.items)

#                         What is a queue?

#   A different structure to hold data that uses FIFO instead of LIFO.

#               How are queues different from stacks?

#   They use FIFO.


class Stack:
    def __init__(self):
        self.items = []

    def push(self,item):
        self.items.append(item)

    def is_empty(self):
        return len(self.items) == 0

    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        else:
            return None
    
    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        else:
            return None
    
    def size(self):
        return len(self.items)