/*

A company is selling wheels with numbers. Each wheel is divided into equal sectors and each sector is labeled by a number from the set {0, 1, …, 9}.

Each line of the user input corresponds to one wheel. It starts with an integer n that represents the number of sectors, followed by n elements of the set {0, 1, …, 9}.

Once a zero or a negative integer is at the beginning of the line, the user input is over.

Create the program that collects the data from the user input and prints the total number of different wheels that were provided.

Example:

Input: 
5 3 4 5 1 2 
6 2 0 0 2 2 2 
5 4 5 1 2 3 
5 4 5 1 3 2 
6 0 0 2 2 2 2 
-1 

Output: 
3

Explanation: Although there are 5 lines of the user input that contain wheels, only three of them are actually different. The wheels in the first and the third line are the same. Similarly, the wheels in the second and the fifth line are the same.
Input: 
7 1 1 0 0 1 1 1 
7 1 1 0 2 0 1 1 
7 1 1 1 1 1 0 0 
7 2 0 1 1 1 1 0 
7 1 1 1 0 2 0 1 
7 0 0 1 1 1 1 1 
-1 

Output:2

*/


#include <iostream>
#include <map>
#include <set>
#include <vector>
class pair {
public:
    int position;
    double el;
    int operator<(const pair &) const;
};
void allpermutations(std::vector<int> k, std::set<std::vector<int>> *l){
    (*l).insert(k);
    int counter=k.size();
    while (counter>1){
        int save=k[0];
        for (int h=0; h<k.size()-1; h++){
            k[h]=k[h+1];
        }
        k[k.size()-1]= save;
        (*l).insert(k);
        --counter;
    }

}


int main() {
    std::set <std::vector<int>> all;
    std::vector <int> vec;
   int ui=1;
   int counter=0;
   while (ui>0) {
       std::cout << "please enter a new seq" << std::endl;
       std::cin >> ui;
       if (ui > 0) {
           vec.resize(ui);
           for (int i = 0; i < ui; i++) { std::cin >> vec[i]; }

           if (all.find(vec) == all.end()) { counter += 1; allpermutations(vec, &all); }
       }
   }
    //std::cout<< all.size();
    std::cout <<counter;
    return 0;
}
