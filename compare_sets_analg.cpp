/ problem 4 under this link https://imomath.com/bmath/index.php?options=1176&lmm=0
#include <iostream>
#include <map>
#include <set>
class pair {
public:
    int position;
    char el;
    int operator<(const pair &) const;
};

int pair::operator<(const pair & i) const {
    if ( i.el > el){ return 1;}
    if (position< i.position) { return 1;}
    return 0;
}
int main() {
    pair tmp;
    std::set <pair> all_letters;
    std::set <pair> all_letters2;
    int count=0;
    char  letter;
    int n;
    std::cout << "please enter the number of characters" << std::endl;
    std::cin >>n;
    std::cout <<"please enter the charaters";
    for ( int i=0; i< n; i++){
        std::cin >>letter;
        count++;
        tmp.position=count;
        tmp.el= letter;
        if (letter!=' '){
            all_letters.insert(tmp);
        }
    }
    count=0;
    std::cout << "please enter the new charater string"<<" "<< std::endl;
    for ( int i=0; i< n; i++) {
        std::cin >> letter;
        count++;
        tmp.position = count;
        tmp.el = letter;
        if (letter != ' ') {
            all_letters2.insert(tmp);
        }
    }
    count=0;
    std::set <pair> ::iterator it;
    std::set <pair> ::iterator vt;
    for (it=all_letters.begin(); it!=all_letters.end(); it++){
        int indic=0;

        for (vt=all_letters2.begin(); vt!=all_letters2.end(); vt++) {
            if ((*it).el == (*vt).el) {
                std::cout << (*it).el << (*vt).el << " ";
                all_letters2.erase(*vt);
                //all_letters.erase(*it);
                count++;
                indic=1;
            }
            if (indic==1)
        
        }
    }
    if (count==n){std::cout<<"yes";}
    else { std::cout <<"no";}
    return 0;
}
