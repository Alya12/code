//The user first enters the integer n and after it the user enters a sequence x of n integers.
//Create the function extendTheSequence that extends the sequence x. The extension consists of terms equal to 1 and the number of ones is exactly x[n−1].

//For example if n=5, and if x is the sequence 3, 7, 12, 4, 5, then after the execution of 
//extendTheSequnce the sequence x must become

//ouput 3,7,12,4,5,1,1,1,1,1
#include  <iostream>
void extend_by_ones(int** seq, int* n)
{
  int total=(*seq)[*n-1];
  (*n)=(*n)+5;
  int* y; 
  y= new int[*n];
  for ( int i=0; i<(*n)-5; i++){ y[i]= (*seq)[i];  }
  for (int i=(*n)-5; i< *n; i++) { y[i]= 1;}
  //for ( int i=0; i< *n; i++){ std::cout << y[i];}
  delete[] *seq;
  *seq= y;
  //delete[] y;
}

int main(){
    int n;
    std::cin>>n;
    int* seq; seq= new int[n];
    for (int i=0; i<n; i++){ std::cin>> seq[i];}
    extend_by_ones(&seq, &n);
    for (int i=0; i< n; i++){ std::cout<< seq[i]<< " ";}
    
}
