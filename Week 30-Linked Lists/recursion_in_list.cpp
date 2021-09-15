#include "stoping_at_end.cpp"

template<class T>
LListNode <T> * LList <T> ::recursiveCopy(LListNode <T> * rhs)
{
    if(rhs == nullptr)
        return nullptr;
    
    return new LListNode<T> (rhs->data,recursiveCopy(rhs->next));
}

