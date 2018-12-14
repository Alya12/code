
//for instruction for this question look here problem 4 https://imomath.com/bmath/index.php?options=1183&lmm=0

#include <iostream>
#include <map>
#include <set>
class pair {
public:
    int position;
    double el;
    int operator<(const pair &) const;
};

int pair::operator<(const pair & i) const {
    if ( i.el > el){ return 1;}
    if (position< i.position) { return 1;}
    return 0;
}
int main() {
    pair tmp;
    std::set <pair> all_numb;
    int n, count; count=0;
    std::cin>> n;
    double ui=1.0;
    while (ui>0){
        std::cin>>ui;
        if (ui>0.0){
            count++;
            tmp.el=ui;
            tmp.position=count;
            all_numb.insert(tmp);
        }
    }
    double counter=0.0;
    std::set<pair> ::iterator it;
    it= all_numb.end()--;
    while (n>=0){
        counter+=(*it).el;
        it--;
        n--;
    }
    std::cout << counter;
    return 0;
}
