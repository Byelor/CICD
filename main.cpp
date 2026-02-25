#include <iostream>
using namespace std;

int sumTwoInt(int a, int b)
{
    return a + b;
}


#define TEST(condition, message) \
    do { \
        if (!condition) { \
        cerr << "TEST ERROR << endl; \
        cerr << "Test: " << __func__ << endl; \
        cerr << "Message: " << message << endl; \
        cerr << "File: " << __FILE__ << "Line: " << __LINE__ << endl; \
        abort(); \
    } \
    while(0); \


int main(){

cout << "Hello world\n";

cerr << "crap!!!";

cout << sumTwoInt(10,20);

}
