#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    //Declare and initialise normal variable
    
    int num=10;
    
    cout<<"value of num "<<num<<endl;
    cout<<"size of num "<<sizeof(num)<<endl;
    cout<<"address of num" <<&num<<endl;

//Declare and initialise pointer variable

    int *p;

   cout<<"value of p "<<p<<endl;  //taking garbage
   cout<<"size of p "<<sizeof(p)<<endl;  //8 bytes
   cout<<"address of p" <<&p<<endl;
   
   p=nullptr;
   cout<<"value p "<<p<<endl;

//Check size of different types

    int *p1=NULL;
    double *p2=NULL;
    unsigned long long *p3=NULL;
    vector<string> *p4=NULL;
    string *p5=NULL;

////All have same bytes i.e 8 bytes despite of its types.

    cout<<"size of p1 "<<sizeof(p1)<<endl;
    cout<<"size of p2 "<<sizeof(p2)<<endl;
    cout<<"size of p3 "<<sizeof(p3)<<endl;
    cout<<"size of p4 "<<sizeof(p4)<<endl;
    cout<<"size of p5 "<<sizeof(p5)<<endl;

//storing address in a pointer variable

    int a=10;
    double b=100.7;
    int *c=nullptr;
    c=&a;

    cout<<"address of a "<<&a<<endl;
    cout<<"address of b "<<&b<<endl;
    cout<<"address of c "<<&c<<endl;
    cout<<"value of c "<<c<<endl;




    return 0;
}