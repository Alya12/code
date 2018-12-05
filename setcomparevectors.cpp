#include <iostream>
#include <vector>
#include <set>
class vc {
public:
    //int content;
    std::vector <int> vec;
    int operator < ( const vc & ) const;

};

int  vc::operator<( const vc & k) const {
    if (vec > k.vec) { return 0;}
    else if ( vec < k.vec) { return 1;}
}
int main() {
    vc temp;
    std::set <vc> ele;
    //std::vector<int> vec1;
    int ui;

    ui = 0;
    while (ui >= 0) {
        std::cout << "please size of  set" << std::endl;

        std::cin>>ui;
        if ( ui>=0) {
            temp.vec.resize(ui);
            for (int i = 0; i < ui; i++) {
                std::cin >> temp.vec[i];
            }
           ele.insert(temp);
        }
    }
    std::cout<< ele.size()<< std::endl;
}
