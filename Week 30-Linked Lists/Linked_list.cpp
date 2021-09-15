#include "link_list_node.cpp"

template <class T>

class LList
{

LListNode <T> * head;
LListNode <T> * recursiveCopy(LListNode <T> * rhs);

public:
    LList() : head(nullpte){}

    LList(const LList & rhs) : head(nullptr) {
        *this = rhs;
    }
    LList<T> & operator = const LList <T> & rhs;

    ~LList(){
        clear();
    }
    void insertAtHead(T newdata);
    T removeFromHead();
    bool isEmpty() const 
    {
        return head == nullptr;
    }

    void clear;
    void insertAtEnd(T newdata);

    void insertAtPoint(LListNode <T> * ptr, T newdata);
    int size() const;


};