// Example program
#include <iostream>
#include <string>

int main()
{
int totalA=2; int totalB=1;int counter=0; 
int* seqA; int* seqB;
int n;
std::cin>> n; 
if (n%2==0){
    seqA=new int[n/2];
    seqB=new int[n/2];}
if (n%2 !=0) {
    seqA= new int[(n/2)+1];
    seqB= new int[(n/2)];
    seqA[n/2]=n; 
    }
seqA[0]=2; seqB[0]=1; 
counter+=1;
for(int i=3; i< n; i+=2){
    std::cout<< "this is counter"<< counter<< std::endl;
    if ((totalA+i) < (totalB+i+1)) { 
        totalA+=i+1; totalB+=i;
        seqA[counter]= i+1; seqB[counter]=i; 
        counter+=1;}
    else if ((totalA+i) == (totalB+i+1)) {
        totalA+=i; totalB+=i+1;
        seqA[counter]= i; seqB[counter]=i+1; 
        counter+=1;}
}

if (n%2 !=0) { totalA+=n;}
std:: cout<< totalA<<std::endl;
std:: cout<< totalB<< std::endl;

std::cout<< "this is inside the sequence A" << std::endl;
if (n%2==0){ std::cout<< "A gets"<< std::endl; for (int i=0; i< n/2; i++){  std::cout<< " " <<seqA[i]; }}
std::cout<< "this is inside the sequence B" <<std::endl;

std::cout<< "B gets"<< std::endl; for (int i=0; i< n/2; i++){  std::cout<< " " <<seqB[i]; }

if (n%2!=0){ std::cout<< "A gets"<< std::endl; for (int i=0; i< (n/2)+1; i++){  std::cout<<" " << seqA[i];}}

delete[] seqA;
delete[] seqB;

return 0;}



