#include "LinkedList.h"

template <typename T>
void LinkedList<T>::push_back(T value)
{
    if(head == nullptr)
    {
        head = new Node(value);
    }
    else{
        Node* currentNode = head;
        while(currentNode->next != nullptr)
        {
            currentNode = currentNode->next;
        }
        currentNode.next = Node(value);
    }
}

template <typename T>
T LinkedList<T>::pop(){
    if(head == nullptr)
    {
    }
}

template <typename T>
LinkedList<T>::Node::Node(T value){
    this.value = value;
    this.next = nullptr;
}

