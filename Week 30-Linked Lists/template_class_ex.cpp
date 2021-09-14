#include<iostream>
#include<string>

using namespace std;

// When a class is templated ,
// its name changes to includes the data type which is templated

template <class T>

class SomeVal
{
    T data;

    public :
    T getVal() const {
        return data;
    }
    void setVal (T newValue);
};


template <class T>
void SomeVal<T> :: setVal(T newValue)
{
    data = newValue;
}

