class Node:
    def __init__(self , data):
        self.data = data
        self.next = None
        self.prev = None
        
class Doubly_Linked_List:
    def __init__(self):
        self.head = None
        
    def append(self , data):
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
        
    def delete_Node(self , data):
        if self.head.data == data:
            temp = self.head
            self.head = self.head.next
            self.head.prev = temp
            return
        temp = self.head
        while temp:
            if temp.next == None:
                temp.prev.next = None
                temp.prev = None
                return
            if temp.data == data:
                temp.prev.next = temp.next
                temp.next.prev = temp.prev
                temp.next = None
                temp.prev = None
            temp = temp.next
        
    def print_List(self):
        temp = self.head
        while temp:
            print(temp.data)
            temp = temp.next
        print("END")
        
    def display_backwards(self):
        temp = self.head
        while temp.next:
            temp = temp.next
        while temp:
            print(temp.data)
            temp = temp.prev
        print("END")
        
        
My_List = Doubly_Linked_List()
My_List.append(10)
My_List.append(20)
My_List.append(30)
My_List.append(40)
My_List.append(50)
My_List.delete_Node(50)
My_List.print_List()


