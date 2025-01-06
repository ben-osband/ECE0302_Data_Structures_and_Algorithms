// This is SafeArray1.hpp, changes from starter code of SafeArray.hpp:
// 1. make SafeArray class derived from Array<T> class

#ifndef _SAFE_ARRAY_HPP
#define _SAFE_ARRAY_HPP

#include "Array.hpp"

template <typename T>
class SafeArray : public Array<T> { // add <T> to the class name
    private:
        T * dataptr; // pointer to the array of T type
        int size;
    
    public:
        SafeArray();
        SafeArray(int);
        virtual ~SafeArray();

        // This is copy constructor
        SafeArray(const SafeArray<T>&); // add <T> to the argument type

        // This is copy assignment
        SafeArray<T> &operator=(SafeArray<T>); // add <T> to the argument type

        int get_size() const;
        T get(int) const; // return T type
        virtual void set(int, T); // pass T type as argument
};

template <typename T>
SafeArray<T> operator+(const SafeArray<T>&, T); // pass by const reference

template <typename T>
SafeArray<T> operator+(T, const SafeArray<T>&); // pass by const reference

#include "SafeArray1.tpp"

#endif