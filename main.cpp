// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    //inFile.open("/home/caleb/Documents/EE312/BST/inOrdertest.txt");
    inFile.open("/home/caleb/Documents/EE312/BST/test.txt");
    //inFile.open("/home/caleb/Documents/EE312/BST/emptyTest.txt");
    //inFile.open("/home/caleb/Documents/EE312/BST/wordTest.txt");

    //Int Version -----------------------------------------------------------------------
    BST_312<int> bst; int s;

    //String Version --------------------------------------------------------------------
    //BST_312<string> bst; string s;


    inFile >> s;



    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }


    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;



    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "Is 16 in tree? (Hopefully yes) " <<endl;
    cout <<bst.isItemInTree(16) <<endl;
    cout << "Is 5 in tree? (Hopefully yes) " <<endl;
    cout <<bst.isItemInTree(5) <<endl;
    cout << "Is 20 in tree? (Hopefully yes) " <<endl;
    cout <<bst.isItemInTree(20) <<endl;
    cout << "Is 17 in tree? (Hopefully yes) " <<endl;
    cout <<bst.isItemInTree(17) <<endl;
    cout << "Is 11 in tree? (Hopefully yes) " <<endl;
    cout <<bst.isItemInTree(11) <<endl;

    cout << "Is 25 in tree? (Hopefully no) " <<endl;
    cout <<bst.isItemInTree(25) <<endl;
    cout << "Is 2 in tree? (Hopefully no) " <<endl;
    cout <<bst.isItemInTree(2) <<endl;


    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = 7;
    //s = "are";
    bst.deleteItem(s);
    cout << "preOrder: " <<endl;
    print(bst.preOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl<<endl;

    cout << "Make Empty "<<endl;
    bst.makeEmpty();
    cout << "after makeEmpty(), preOrderTraversal is: " <<endl;
    print(bst.preOrderTraversal());
    cout << "number of nodes in tree after makeEmpty is " << bst.countNodes() << endl;
    cout <<endl;

    return 0;
}