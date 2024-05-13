class Node:
    def __init__(self, value: int):
        self.value = value
        self.next = None

    def printNodes(self):
        while self != None:
            print(f"{self.value} - ", end="")

            self = self.next

        print('')


if __name__ == "__main__":
    helloworld()