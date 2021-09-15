#include "going_off_end.cpp"

template <class T>
void LList<T> :: insertAtEnd(T newdata)
{
    if (isEmpty())
    {
        insertAtHead(newdata);
    }
    LListNode<T> * temp = new LListNode<T> (newdata);
    LListNode<T> * end = head;
    while (end->next != nullptr)
    {
        end= end->next;
    }
    end->next = temp;
    
}