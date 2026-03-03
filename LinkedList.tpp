#include "LinkedList.h"
#include <exception>

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
    T returnValue;
    if(head == nullptr)
    {
        throw std::out_of_range();
    }
    if(head->next == nullptr)
    {
        returnValue = head->value;
        head == nullptr;
        return returnValue;
    }
    Node* currentNode = head;
    while(currentNode->next->next != nullptr)
    {
        currentNode = currentNode->next;
    }
    returnValue = currentNode->next->value;
    currentNode->next = nullptr;
    return returnValue;
}

template <typename T>
T LinkedList<T>::top() const
{
    if(head == nullptr)
    {
        throw std::out_of_range();
    }
    Node* currentNode = head;
    while(currentNode -> next != nullptr)
    {
        currentNode = currentNode->next;
    }
    return currentNode.value;
}
template <typename T>
LinkedList<T>::Node::Node(T value){
    this.value = value;
    this.next = nullptr;
}

