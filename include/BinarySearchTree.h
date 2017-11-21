#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include <Knoten.h>

class BinarySearchTree
{
    public:
        BinarySearchTree();
        BinarySearchTree(int n);
        virtual ~BinarySearchTree();
        void insert(Knoten k);
        string search(int id);
        void remove(int id);
        bool check();
        int getHeight();
        int zufallsPermutation();
    protected:
    private:
        Knoten *baum;
        int height;
        int anzahlKnoten;
};

#endif // BINARYSEARCHTREE_H

/* Aufgabe 1 */
// Idee: height in der Insert hochrechnen?
// Schluessel per Zufallspermutation vergeben
// von dern Blattern den gesamten Baum pruefen bei check(), parent
// remove() wenn kein Nachfolger nicht schwer, wenn zwei Nachfolger ersetzt mit dem kleinsten im rechten oder mit dem groessten im linken Unterbaum
// string aus der id generieren lassen

/* Aufgabe 2 */

// entweder Aufgabe 1 erweitern oder neu
// check(): Bedingung Nr.5 ist am schwersten
// bei Verwendung des Pseudocodes auf der Folie muss man mit einem NIL Element (schwarz) arbeiten
