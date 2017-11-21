#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{
    //ctor
}

BinarySearchTree::~BinarySearchTree()
{
    //dtor
}

BinarySearchTree::BinarySearchTree(int n)
{
    this->anzahlKnoten = n;
    for(int i = 0; i < n; i++){
        int index = zufallsPermutation();
        Knoten knoten = Knoten(index);
        insert(knoten);
    }
}

void BinarySearchTree::insert(Knoten k)
{

}

int BinarySearchTree::zufallsPermutation()
{

}

/*
string BinarySearchTree::search(int id)
{

}

void BinarySearchTree::remove(int id)
{

}

bool BinarySearchTree::check()
{

}

int BinarySearchTree::getHeight()
{

}
*/
