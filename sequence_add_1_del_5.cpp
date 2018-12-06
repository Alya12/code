//Create a function that starts from a sequence x of integers of length n and modifies it so that every occurrence of number 5 is deleted,
//and every occurrence of number 0 is replaced with three numbers 1.
//For example if n=8, and x=(1,8,0,3,5,7,0,8), then the resulting sequence is


#include <iostream>

using namespace std;

int main()
{
    int* seq; 
    int* seq2;
    int zero=0;
    int five=0;
    int ui, el;
    std::cin>>ui;
    seq=new int[ui];
    for (int i=0; i< ui; i++){
        std::cin>>el;
        if (el==0){ zero=zero+2;}
        if (el==5) { ++five;}
        seq[i]=el;
    }
    int total= ui+zero-five;
    int position=0;
    seq2= new int[total];
    for (int i=0; i<ui; i++){
        if(seq[i]==0){ 
         int k=3;
         while(k>0) { seq2[position]=1; ++position; k--;}}
        else if (seq[i]!=5){ seq2[position]=seq[i]; ++position;}
    }
    for (int j=0; j< total; j++){ std::cout <<seq2[j]<< " ";}
    delete[] seq2;
    delete[] seq;
    return 0;
}
