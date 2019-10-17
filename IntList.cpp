#include <iostream>
#include "IntList.h"
using namespace std;

IntList::IntList ( int size , int initvalue) {
    if( size > 0){
        list_ = new int[ size ];
        size_ = size ;
        for( int i = 0; i < size_ ; i ++)
            list_ [i] = initvalue ;
    }
    else {
        list_ = 0;
        size_ = 0;
    }

}

//1) write a definition for the destructor
IntList::~IntList() {
    cout << "Destructor called." << endl;
    delete [] list_;
}


//2) fix the copy constructor
IntList :: IntList (const IntList& L ){
    cout << "Copy Constructor called." << endl;
    list_ = new int;
    *list_ = *(L.list_);
    size_ = L.size_;
}

//3) rewrite the copy assignment operator using an optimized method
// IntList& IntList:: operator =( const IntList & rhs ){
    /* if( list_ )
        delete [] list_ ;
    size_ = rhs . size_ ;
    if( rhs . size_ > 0){
        list_ = new int [ rhs . size_ ];
        for ( int i = 0; i < rhs . size_ ; i ++)
            list_ [ i ] = rhs . list_ [ i ];
    }
    else
        list_ = 0; */

    // from zybooks
    /*if(this != &rhs){           // 1. Don't self assign
        delete list_;           // 2. Delete old dataObj
        list_ = new int;        // 3. Allocate new dataObj
        *list_ = *(rhs.list_);  // 4. Copy dataObj
    }
    return *this;*/
// }

void IntList::swap(IntList & rhs) {
    std::swap(this->list_, rhs.list_);
}

// using Big Three and a Half
IntList& IntList::operator= (const IntList& rhs) {
    IntList temp{rhs}; // copy constructor temp
    swap(temp);
    return *this;
}


