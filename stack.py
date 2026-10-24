class Stack:
    def __init__(self, capacity):
        self.capacity = capacity
        self.items = []
        self.top = -1

    def is_full(self):
        return len(self.items) >= self.capacity

    def is_empty(self):
        return len(self.items) == 0

    def push(self, val):
        if not self.is_full():
            self.items.append(val)
            self.top += 1

    def pop(self):
        if not self.is_empty():
            self.top -= 1
            return self.items.pop()
        return None

    def peek(self):
        return self.items[self.top] if not self.is_empty() else None

if __name__ == "__main__":
    s = Stack(5)
    s.push(10)
    s.push(20)
    print(f"Top: {s.peek()}")
    print(f"Popped: {s.pop()}")