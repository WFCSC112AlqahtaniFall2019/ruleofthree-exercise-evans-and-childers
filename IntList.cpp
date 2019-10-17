//
// Created by Henry Evans on 10/17/19.
//

using namespace std;
#include "IntList.h"
#include <iostream>

IntList::IntList ( int size  , int initvalue) {
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

IntList :: ~IntList() {
    delete [] list_;
}


//2) fix the copy constructor
IntList :: IntList (const IntList& L ){

    cout << "Copy constructor called." << endl;

    list_ = new int;
    *list_ = *(L.list_);
    size_ = L.size_;
}

//3) rewrite the copy assignment operator using an optimized method
IntList& IntList:: operator =( const IntList & rhs ){
    if(this != &rhs) {
        delete [] list_;
        list_ = new int;
        *list_ = *(rhs.list_);
    }
    return *this;
}

