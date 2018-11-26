int nofW(std::map<int, int> &memory, int n, int alpha){
  if ( memory.find(n)!= memory.end()){
    return memory[n];
  }
  if( n<2){ return n;} // similar to her but sneaky
  int i=1; int result=0; int tempR;
  while(power(i,alpha)<=n){
    tempR=nofW(memory, n-power(i,alpha), alpha) +1;
    if (tempR<result) or (result==0) {
      result=tempR;
    }
    ++i;
  }
  memory[n]= result; // insertion in the memory 
  return result;
}

int main(){
  int n, alpha; cin>>n>>alpha;
  std::map<int,int> memory;
  cout<<nofways(memory,n, alpha);
}
