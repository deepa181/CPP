#include <iostream>
using namespace std;

void can_you_drive(int age, bool has_car) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    const int diffage=16;
   int  n=diffage-age;
    
    if(age>=diffage)
    {
        if(!has_car)
        cout<<"Sorry, you need to buy a car before you can drive!";
        else
        cout<<"Yes - you can drive!";
    }
    else
    
    {
        cout<<"Sorry, come back in "<<n<<  " years and be sure you own a car when you come back.";
    }
    
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
}
int main()
{
    can_you_drive(17,true);
    return 0;
}
