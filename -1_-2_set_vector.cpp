#include <set>
#include <iostream>
#include <vector>

int main(){
    std::set <int> numbs;
    std::vector<int> vec;
    //int *seq;
    std::vector<int> vec2;
    int ui=1;
    int vecsize=0;
    int position_seq=0;
    while (ui>0 or (ui==-2) or (ui==-1)){

        std::cin>> ui;
        if (ui>0){  vecsize+=1;
                    numbs.insert(ui);
                    vec.resize(vecsize);
                    vec[vecsize-1]=ui;
                    for (int i=0; i< vec.size(); i++){ std::cout<< vec[i];}
                    }
        if (ui==-1) { int saver=vec[vecsize-1];
                        std::set <int> ::iterator it;
                        it= numbs.find(saver);
                        numbs.erase(it);
                        vec.erase(vec.end()-1); // these three must be togther
                        vec.resize(vecsize-1);
                        vecsize--;
                         for (int i=0; i< vec.size(); i++){ std::cout<< vec[i];}

        }
                if (ui==-2) { position_seq++; vec2.resize(position_seq); vec2[position_seq-1]=*(numbs.begin());

                        for (int i=0; i< vec2.size(); i++){ std::cout<< vec2[i];}}

        }
        for (int i=0; i<position_seq; i++){
            std::cout<< vec2[i]<< " ";
        }
        return 0;
    }
