//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** @file Node.h 
    Listing 4-1 */
#ifndef NODE_
#define NODE_

template<class ItemType>
class Node
{
private:
   ItemType        item; // A data item
   Node<ItemType>* next;   // Pointer to next node
   Node<ItemType>* prev;
   
   
public:
   Node();
   Node(const ItemType& anItem);
   Node(const ItemType& anItem, Node<ItemType>* nextNodePtr);
   void setItem(const ItemType& anItem);
   void setNext(Node<ItemType>* nextNodePtr);
   void setPrevious(Node<ItemType>* prevNodePtr);
   ItemType getItem() const ;
   Node<ItemType>* getNext() const ;
   Node<ItemType>* getPrevious() const;
}; // end Node
#include "Node.cpp"
#endif