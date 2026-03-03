#include <iostream>
#include "LinkedList.h"
using namespace std;


int main(int argc, char* argv[])
{
    if(argc > 1)
    {
        if(argv[0] == "test")
        {
            LinkedList<int> list;
            list.push_back(5);
            list.push_back(2);
            cout << list.top();
            cout << list.pop();
            cout << list.top();
        }
    }
}
