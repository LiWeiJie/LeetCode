#ifndef LEET

#include <iostream>
#include <vector>
#include <cstring>
#include <list>
#include <map>

using namespace std;

template<class T>
void printVector(vector<T> list) {
    for (auto i:list) {
        cout << i << " ";
    }
    cout << endl;
}

template<class T>
void print2dVector(vector<vector<T> > board) {
    for (auto i:board) {
        print_vector(i);
    }
}


#endif
