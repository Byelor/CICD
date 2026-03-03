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
        currentNode->next = new Node(value);
    }
}

template <typename T>
T LinkedList<T>::pop(){
    T returnValue;
    if(head == nullptr)
    {
        throw std::out_of_range("No elements in List!");
    }
    if(head->next == nullptr)
    {
        returnValue = head->value;
        head = nullptr;
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
        throw std::out_of_range("No elements in List!");
    }
    Node* currentNode = head;
    while(currentNode -> next != nullptr)
    {
        currentNode = currentNode->next;
    }
    return currentNode->value;
}
template <typename T>
LinkedList<T>::Node::Node(T value){
    this->value = value;
    this->next = nullptr;
}

