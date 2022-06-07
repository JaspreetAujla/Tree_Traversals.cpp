class Node:
    def __init__(self, m):
        self.left = None
        self.right = None
        self.val = m


def Inorder(root):

    if root:
        Inorder(root.left)

        print(str(root.val) + " ", end ='')

        Inorder(root.right)


def Postorder(root):

    if root:
        Postorder(root.left)

        Postorder(root.right)

        print(str(root.val) + " ", end ='')


def Preorder(root):

    if root:

        print(str(root.val) + " ", end ='')

        Preorder(root.left)

        Preorder(root.right)


root = Node(12)
root.left = Node(14)
root.right = Node(11)
root.left.left = Node(5)
root.left.right = Node(8)

print("Inorder traversal ")
Inorder(root)

print("\nPreorder traversal ")
Preorder(root)

print("\nPostorder traversal ")
Postorder(root)
