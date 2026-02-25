#include <iostream>
using namespace std;

int sumTwoInt(int a, int b)
{
    return a + b;
}


#define TEST(condition, message) \
    do { \
        if (!(condition)) { \
        cerr << "TEST ERROR" << endl; \
        cerr << "Test: " << __func__ << endl; \
        cerr << "Message: " << message << endl; \
        cerr << "File: " << __FILE__ << "Line: " << __LINE__ << endl; \
        abort(); \
        } \
    } \
    while(0) \

void test1()
{
    TEST(sumTwoInt(10,20) == 30, "error, wrong value");
}
void test2()
{
    TEST(sumTwoInt(20, -1) == 19, "error, wrong value");
}

void test3()
{
    TEST(sumTwoInt(20,0) == sumTwoInt(0,20), "error wrong value");
}
int main(int argc, char* argv[]){

if(argc > 1)
{
  string run_type = argv[1];

  if(run_type == "standart"){

}
  else if(run_type == "test")
  {
     test1();
     test2();
     test3();
  }
}
cout << "IT'S ALL GOOD MAN)";
return 0;
}
