#include "linked_list.cpp"

template <class T>
int LList<T> :: size() const
{
    int count = 0 ;
    LListNode<T> * temp = head ;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;

    }
    return count;
}