#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count=0;
  
    int i=0;  
    
    while (i < vec.size() && vec.at(i) != -99  ) {
        count=count+1;
        i++;
    }
    
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}
int main()
{
    vector<int> vec={1,2,4,5,6,7-99};
    int c=count_numbers(vec);
    cout<<c;
    return 0;
}
