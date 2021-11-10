#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {

    LinkedList<char> *linkFirst = new LinkedList<char>();
    LinkedList<char> *linkLast = new LinkedList<char>();

    //R-O-T-O-M

    linkFirst->addNodeFirst('M');
    linkFirst->addNodeFirst('O');
    linkFirst->addNodeFirst('T');
    linkFirst->addNodeFirst('O');
    linkFirst->addNodeFirst('R');

    //M-O-T-O-R
    linkLast->addNodeLast('M');
    linkLast->addNodeLast('O');
    linkLast->addNodeLast('T');
    linkLast->addNodeLast('0');
    linkLast->addNodeLast('R');

    for( char val : linkFirst->getLinkedList() ){
        cout<<val<<"-";
    }

    cout<<endl;

    for( char val : linkLast->getLinkedList() ){
        cout<<val<<"-";
    }

    cout<<endl;

    delete(linkFirst);

    delete( linkLast );


    return EXIT_SUCCESS;
}
