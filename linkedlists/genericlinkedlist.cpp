#include <iostream>
using namespace std;
template <typename E>
class SNode{
private:
    E elem;
    SNode<E> *next;
    friend class SLinkedList<E>;
};

class SLinkedList{
public:
    SLinkedList();
    ~SLinkedList();
    bool empty() const;
    const E &front() const;
    void addFront(const E &e);
    void removeFront();
private:
    SNode<E> *head;
};


SLinkedList<E>::SLinkedList() // constructor
    : head(NULL)
{
}

bool SLinkedList<E>::empty() const // is list empty?
{
    return head == NULL;
}

const E &SLinkedList<E>::front() const // return front element
{
    return head->elem;
}
template <typename E>
SLinkedList<E>::~SLinkedList() // destructor
{
    while (!empty())
        removeFront();
}
template <typename E>
void SLinkedList<E>::addFront(const E &e)
{                               // add to front of list
    SNode<E> *v = new SNode<E>; // create new node
    v-> elem = e;               // store data
    v-> next = head;            // head now follows v
    head = v;                   // v is now the head
}
template <typename E>
void SLinkedList<E>::removeFront()
{                         // remove front item
    SNode<E> *old = head; // save current head
    head = old-> next;    // skip over old head
    delete old;           // delete the old head
}

int main(){
    SLinkedList<int> b;
    b.addFront(3);
    b.addFront(4);
    b.front();
    return 0;
}