from linkedlist import Node

def main():
    head = Node(6)
    second = Node(7)
    third = Node(8)
    head.next = second
    second.next = third

    head.printNodes()

if __name__ == "__main__":
    main()
