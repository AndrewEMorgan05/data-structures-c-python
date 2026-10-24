class Array3D:
    def __init__(self, d1, d2, d3):
        self.d1, self.d2, self.d3 = d1, d2, d3
        # Initializing with nested lists
        self.data = [[[0 for _ in range(d3)] for _ in range(d2)] for _ in range(d1)]

    def set_values(self):
        counter = 1
        for i in range(self.d1):
            for j in range(self.d2):
                for k in range(self.d3):
                    self.data[i][j][k] = counter
                    counter += 1

    def display_all(self):
        for layer in self.data:
            for row in layer:
                print(row)
            print()

    def display_single(self, x, y, z):
        print(f"Item at ({x},{y},{z}): {self.data[x][y][z]}")

    def update_single(self, x, y, z, val):
        self.data[x][y][z] = val

if __name__ == "__main__":
    arr = Array3D(2, 2, 2)
    arr.set_values()
    arr.display_all()
    arr.update_single(0, 0, 0, 99)
    arr.display_single(0, 0, 0)