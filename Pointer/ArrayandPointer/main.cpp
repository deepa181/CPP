#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int scores[]={100,95,89};
    cout<<"value of scores"<<scores<<endl;  ////The value of an array name is the address of the first element in the array
    
   int *score_ptr=scores;
    
    //Array subscript notation
       cout<<"---------Array subscript notation---------"<<endl;
      cout<<scores[0]<<endl;
     cout<<scores[1]<<endl;
      cout<<scores[2]<<endl;
      
      //pointer subscript notation
       cout<<"---------pointer subscript notation---------"<<endl;
      cout<<score_ptr[0]<<endl;
     cout<<score_ptr[1]<<endl;
      cout<<score_ptr[2]<<endl;
      
      //pointer offset notation
      cout<<"-----------pointer offset notation---------"<<endl;
      cout<<*score_ptr<<endl;
     cout<<*(score_ptr + 1)<<endl;   // Here 1 represent address of next integer which increases by 4
     
     //array offset notation
      cout<<"-----------array offset notation---------"<<endl;
      cout<<*scores<<endl;
     cout<<*(scores + 1)<<endl;
      
    return 0;
    
}