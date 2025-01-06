// This is final version SearchableArray.cpp
// No changes from SearchableArray4.hpp

#ifndef _SEARCHABLE_ARRAY_HPP
#define _SEARCHABLE_ARRAY_HPP

#include "SafeArray.hpp"

class SearchableArray: public SafeArray{
    public:
        using SafeArray::SafeArray; 
        bool search(int);
};

#endif