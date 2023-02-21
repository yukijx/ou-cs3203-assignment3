#include <vector> 
#include <iostream> 
#include <algorithm>

using namespace std; 

class assignment3{ 

private: 
    vector<int> vect; 
public: 

     void add_number(int number) { 
        vect.push_back(number);
    };

    int add(){
         int sum = 0; 

        for (int i = 0; i < vect.size(); ++i) { 
            sum += vect.at(i);
        }
        return sum; 
    } ;

     int product() { 
        int product = 1;

        for (int i = 0; i < vect.size(); ++i) { 
            product = product * vect.at(i); 
        }
        return product; 
    }; 

}; 

int main(){ 

        assignment3 vector; 
        cout<< "Hello! Please input integers to create a vector! Put in a letter to indicate you're finished."<<endl; 

        int current, count; 
        while(cin >> current){ 
            ++count; 
            vector.add_number(current);
        }

        cout << "The total sum of all values is " << vector.add() << "." << endl;
        cout << "The product of all the values is " << vector.product() << "." << endl; 
} 