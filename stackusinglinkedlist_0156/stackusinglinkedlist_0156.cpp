#include <iostream>
using namespace std;

//Node class representing a single node in the linked list

class Node
{
    public:
        int data;
        Node* next;

        Node()
        {
            next = NULL;
        }
};

//Stack class
class Stack 
{
    private:
        Node* top;  // Pointer to the top node of the stck
    public:
        Stack()
        {
            top = NULL;     //Initialize the stuck with a null top pointer
        }

        // Push Operation Insert an elemet onto the top of the stack
        int push(int value)
        {
            Node* newNode = new Node(); //1.Allocate memory fo the new code
            newNode->data = value;      //2.Assign value 
        }

};

int main()
{
    
}

