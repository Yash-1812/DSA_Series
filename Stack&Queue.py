class Node:
    def __init__(self , data):
        self.data = data
        self.next = None
        self.prev = None
        
class Stack:
    def __init__(self):
        self.head = None
        
    def push(self , data):
        newNode = Node(data)
        if not self.head:
            temp = self.head
            self.head = newNode
            newNode.prev = temp
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = newNode
        newNode.prev = temp
        
    def pop(self):
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.prev.next = None
        temp.prev = None
        
    def display_stack(self):
        temp = self.head
        while temp:
            print(temp.data)
            temp = temp.next
        print("END")

class Queue:
    def __init__(self):
        self.head = None
        
    def enqueue(self , data):
        newNode = Node(data)
        if not self.head:
            temp = self.head
            self.head = newNode
            newNode.prev = temp
            newNode.next = None
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = newNode
        newNode.prev = temp
        newNode.next = None
        
    def dequeue(self):
        if self.head.next == None:
            self.head = None
            return
        temp = self.head
        self.head = self.head.next
        self.head.prev = temp
        
    def display_queue(self):
        temp = self.head
        while temp:
            print(temp.data)
            temp = temp.next
        print("END")
        
        
My_Queue = Queue()        
My_Stack = Stack()
My_Queue.enqueue(10)
My_Queue.enqueue(20)
My_Queue.enqueue(30)
My_Queue.enqueue(40)
My_Queue.enqueue(50)
My_Queue.dequeue()
My_Queue.display_queue()





