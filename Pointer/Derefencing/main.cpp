#include <iostream>
#include <vector>


using namespace std;
int main()
{
    int score=100;
    int *score_ptr=&score;
    
    cout<<*score_ptr<<endl; //dereferencing
    
    *score_ptr=200;  //dereferncing pointer
    
    cout<<*score_ptr<<endl;
    cout<<score<<endl;
    
    cout<<"----------high and low temperature----------"<<endl;
    
    
    double high_temp=100.7;
    double low_temp=37.4;
    double *temp_ptr=&high_temp;
    
    cout<<*temp_ptr<<endl;
    
    temp_ptr=&low_temp;
    
    cout<<*temp_ptr<<endl;
    
    cout<<"----------vector and array------"<<endl;
    
    vector<string> stooges ={"AB","BC","CD"};
    vector<string> *vec_ptr=nullptr;
    
    vec_ptr=&stooges;
    
    cout<<"first stooge: "<<(*vec_ptr).at(0)<<endl;
    
    cout<<"stooges";
    
    for(auto stooge: *vec_ptr)
        cout<<stooge<<" ";
    
    
    return 0;
}
