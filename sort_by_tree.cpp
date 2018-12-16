//Use sets to create a program that sorts the sequence of n integers provided through the standard input.



#include <iostream>
#include <set>
class pair{
  public:
  int content;
  int position; 
  int operator<(const pair &) const;
};

int pair::operator<(const pair & n) const {
    if( n.content> content){ return 1;}
    if (n.position> position){ return 1;}
    return 0;
}


int main(){
    pair tmp;
    std::set <pair> all_pairs;
    int n;
    int j=0;
    std::cin>> n; 
    for (int i=0; i<n; i++){
        std::cin>> tmp.content;
        j++;
        tmp.position= j;
        all_pairs.insert(tmp);
    }
    
    std::set<pair> ::iterator it; 
    for (it= all_pairs.begin(); it!=all_pairs.end(); it++){
        std::cout << (*it).content;
    }
    
    return 0;
    
    
    
}
