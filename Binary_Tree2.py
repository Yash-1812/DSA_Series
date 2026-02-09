class Node:
    def __init__(self , data):
        self.data = data
        self.left = None
        self.right = None
        
class Binary_Tree:
    def __init__(self):
        self.root = None
        
    def insert_recursion(self , current , data):
        if data < current.data:
            if current.left == None:
                current.left = Node(data)
                return
            else:
                self.insert_recursion(current.left , data)
        if data > current.data:
            if current.right == None:
                current.right = Node(data)
                return
            else:
                self.insert_recursion(current.right , data)
        
    def insert(self , data):
        if not self.root:
            self.root = Node(data)
            return
        self.insert_recursion(self.root , data)
        
    def Search_recursion(self , current , num):
        if current:
            if current.data == num:
                print("EXISTS")
                return
            self.Search_recursion(current.left , num)
            self.Search_recursion(current.right , num)
            
    def Search(self , num):
        self.Search_recursion(self.root , num)
        
    def inorder_recursion(self , current):
        if current:
            self.inorder_recursion(current.left)
            print(current.data)
            self.inorder_recursion(current.right)
            
    def inorder(self):
        self.inorder_recursion(self.root)
        
    def breadth_first_search(self):
        queue = []
        queue.append(self.root)
        while queue:
            element = queue.pop(0)
            print(element.data)
            if element.left:
                queue.append(element.left)
            if element.right:
                queue.append(element.right)
                
    def height_recursion(self , current):
        if not current:
            return 0
        return 1 + max(self.height_recursion(current.left) , self.height_recursion(current.right))
                
    def height(self):
        height = self.height_recursion(self.root)
        print(f"Height of tree = {height}")
        
        
    def invert_recursion(self , current):
        if current == None:
            return
        self.invert_recursion(current.left)
        self.invert_recursion(current.right)
        current.left , current.right = current.right , current.left
        
    def invert(self):
        self.invert_recursion(self.root)
    
My_Tree = Binary_Tree()
My_Tree.insert(5)
My_Tree.insert(10)
My_Tree.insert(8)
My_Tree.insert(2)
My_Tree.insert(3)
My_Tree.insert(11)
My_Tree.breadth_first_search()
My_Tree.invert()
My_Tree.breadth_first_search()
        
        
        
        
        
        
