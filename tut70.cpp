/*
STL= Containers   +   Algorithm    +    Iterators
     (objects        (procedure to      (objects which points 
     which stores     process data)        to an element of a 
      data)                                  container)
*/

/*
CONTAINERS: 
[1].Sequence Containers===> linear fashion    7->9->11->1 |->vectore
                                                          |->list
                                                          |->Dequue
[2].Associative Containers===>Direct Access   Tress: |-->Set/MultiSet
                                                     |-->Map/Multimap
[3].Derived Containers===>Real World Modelling   |-->Stack(LIFO=Last In is First Out)
                                                 |-->queue(FIFO=First In Is First Out)
                                                 |-->priority-Queue
*/

/*
Q.)When to use which

#SEQUENCE CONTAINERS
1. Vector:Random Access=Fast
         -->middle   Insertion|De|=Slow
        -->Insertion at the end=fast
    
2.List:
        Random Access(RA)-->Slow
        Middlle Insertion-->Fast
        Del/Isertion  at end end--> fast

#Associative Containers-->All OPeration Fast
                            except RA
#Derived Containers-->Depends ->Data Structure.

*/