/*
A user types the pairs of positive real numbers that represents the points in the plane. A negative number instead of x or y coordinate indicates the end of the input.
Determine how many different points the user has provided.

Example: 
Input: 
9.3 1.8 2.3 7.5 3.4 9.1 2.3 7.5 -1.0 -2

Output: 3

Explanation: The user has provided the points (9.3, 1.8), (2.3, 7.5), (3.4, 9.1), and (2.3, 7.5). 
However, the fourth point is not a new point.
It is the same as the second. Thus there are 3 different points provided by the user.

*/

#include <iostream>
#include <map>
#include <set>
class pair {
public:
    double el1, el2;
    int operator<(const pair &) const;
};

int pair::operator<(const pair & i) const {
    if ( i.el1 > el1){ return 1;}
    if (el2< i.el2) { return 1;}
    return 0;
}
int main() {
    pair tmp;
    std::set <pair> all_numb;
    double k1, k2; k1=1; k2=1;
    while ((k1>0)and (k2>0)){
        std::cout<<"please enter a new pair"<<std::endl;
        std::cin >> k1>>k2;
        if ((k1>0)and (k2>0)){
            tmp.el1= k1;
            tmp.el2=k2;
            all_numb.insert(tmp);
        }

    }
    std::cout <<all_numb.size();
    return 0;
}
