#ifndef KNOTEN_H
#define KNOTEN_H
#include <string>
using namespace std;

class Knoten
{
    public:
        Knoten();
        Knoten(int index);
        virtual ~Knoten();
        int getId(void) const { return id; }
        void setId(int x) {id = x;}

        Knoten *getLeft(void) const { return left; }
        void setLeft(Knoten *l) {left = l;}

        Knoten *getRight(void) const { return right; }
        void setRight(Knoten *r) {right = r;}

        Knoten *getParent(void) const { return parent; }
        void setParent(Knoten *p) {parent = p;}

        string getValue(void) const { return value; }
        void setValue(string v) {value = v;}

    protected:
    private:
        int id;
        Knoten *left;
        Knoten *right;
        Knoten *parent;
        string value;
};

#endif // KNOTEN_H
