#include <iostream>
#include <string>
using namespace std;

//first and last element of linked list called head and tail
//it doesn't have predefined size
class StringNode{
private:
    string elem;
    StringNode *next;
    friend class StringLinkedList;
};
class StringLinkedList{
public:
    StringLinkedList();
    ~StringLinkedList();
    bool empty() const;
    const string &front() const;
    void addFront(const string &e);
    void removeFront();
private:
    StringNode *head;
};

StringLinkedList::StringLinkedList(): head(NULL) {}
StringLinkedList::~StringLinkedList(){
    while(!empty())
        removeFront();
}
bool StringLinkedList::empty() const {
    return head == NULL;
}

const string& StringLinkedList::front() const {
    return head->elem;
}
void StringLinkedList::addFront(const string& e){
    StringNode *v = new StringNode;
    v->elem = e;
    v->next = head;
    head = v;
}

void StringLinkedList::removeFront(){
    StringNode *old = head;
    head = old->next;
    delete old;
}
int main(){
    StringLinkedList b;
    b.addFront("hello");
    b.addFront("my name is you");
    string c = b.front();
    cout << c << endl;
}