#include <iostream>
using namespace std;

void logical_operators(int age, bool parental_consent, bool ssn, bool accidents) {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    if ( (age>=18 || (age>15 && parental_consent )) &&  ssn && !accidents)//WRITE ALL YOUR CODE WITHIN THE PARENTHESES
        cout << "Yes, you can work.";
        
        //No output means person can not work
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    return;
}
int main()
{
    logical_operators(18,true,true,false);
    
    return 0;
}