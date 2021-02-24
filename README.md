## Problem
Write a function that, **efficiently** with respect to time used, checks if a given binary search tree contains a given value.

In the example below, when call to *contains(n2, 3)* will return *true* since a tree with root at n2 contains number 3.
#### Example
    #include <stdexcept>
    #include <string>
    #include <iostream>
    
    class Node
    {
    public:
        Node(int value, Node* left, Node* right)
        {
            this->value = value;
            this->left = left;
            this->right = right;
        }
    
        int getValue() const
        {
            return value;
        }
    
        Node* getLeft() const
        {
            return left;
        }
    
        Node* getRight() const
        {
            return right;
        }
    
    private:
        int value;
        Node* left;
        Node* right;
    };
    
    class BinarySearchTree
    {
    public:
        static bool contains(const Node& root, int value)
        {
            throw std::logic_error("Waiting to be implemented");
        }
    };
    
    #ifndef RunTests
    int main()
    {
        Node n1(1, NULL, NULL);
        Node n3(3, NULL, NULL);
        Node n2(2, &n1, &n3);
    
        std::cout << BinarySearchTree::contains(n2, 3);
    }
    #endif


## Complile and Run
    g++ -std=c++17 -o ex2.1 ex2.2.cpp -Wall
    sudo ./ex2.1
## Test cases
| Case | Test | Result |
| ---- | ---- | ---- |
| 1 |   Example case | Correct answer |
| 2 | Crrectness | Correct answer |
| 3 | Performance test on a large tree | Correct answer |
