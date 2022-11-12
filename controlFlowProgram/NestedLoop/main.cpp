#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result={};
    
    for (int i=0; i< vec.size(); i++)
    
       for (int j=i+1; j< vec.size(); j++) 
       
            result = result + vec.at(i) * vec.at(j);
       
    
     
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}
int main()
{
    vector<int> vector={1,2,3,4};
    calculate_pairs(vector);
    
    return 0;
}