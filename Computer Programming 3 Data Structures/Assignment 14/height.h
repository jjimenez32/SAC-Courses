#IFNDEF HEIGHT_H
#DEFINE HEIGHT_H
#include <iostream>
using namespace std;


class BST{

    private:
        struct Node{
            int data;
            Node * left;
            Node * right;
        };
        Node* root;


    public:
        BST();
        void INSERT();
        struct Node* Height();


};

#endif
