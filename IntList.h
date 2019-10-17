#ifndef RULEOFTHREE_INTLIST_H
#define RULEOFTHREE_INTLIST_H


class IntList {
public:
    IntList ( int size = 0, int initvalue = 0);
    IntList ( const IntList & lis );
    ~ IntList ();
    int getSize () const { return size_; }
    IntList& operator= (const IntList& rhs );
    void swap(IntList & rhs);
private :
    int * list_ ; // list of values ( int )
    int size_ ;
};


#endif //RULEOFTHREE_INTLIST_H
