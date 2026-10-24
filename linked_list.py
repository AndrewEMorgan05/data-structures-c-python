class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_end(self, value):
        new_node = Node(value)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def insert_start(self, value):
        new_node = Node(value)
        new_node.next = self.head
        self.head = new_node

    def display(self):
        temp = self.head
        while temp:
            print(f"{temp.value} -> ", end="")
            temp = temp.next
        print("None")

if __name__ == "__main__":
    ll = LinkedList()
    ll.insert_end(10)
    ll.insert_end(20)
    ll.insert_start(5)
    ll.display()