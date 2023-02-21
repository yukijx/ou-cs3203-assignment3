#include <vector> 
#include <iostream> 
#include <algorithm>

using namespace std; 

class assignment3{ 

private: 
    vector<int> vect; 
public: 
    int add(){
         int sum = 0; 

        for (int i = 0; i < vect.size(); ++i) { 
            sum += vect.at(i);
        }
        return sum; 
    } ;

}; 
