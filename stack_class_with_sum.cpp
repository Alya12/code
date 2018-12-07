//follow this link for question:https://imomath.com/bmath/index.php?options=1477&lmm=0
#include <iostream>
class TN {
    public:
    int content;
    TN* next;
};
class Stack{
  private: TN* ptr;
  public:
  Stack();
  ~Stack();
  int pop();
  void push(int );
};

Stack::Stack(){ptr=nullptr;}
void Stack:: push(int  k){ TN* neu; neu= new TN; neu->content=k; neu->next=ptr; ptr=neu; }
int Stack::pop(){ int fr=-17; if (ptr!=nullptr) {TN* neu; neu= ptr; fr= neu->content; ptr=ptr->next; delete neu;} return fr;}
Stack::~Stack(){ while (ptr!=nullptr) { pop();}}
int main(){
    int ui, count, k;  count=0;
    Stack obj1, obj2;
    for (int i=0; i<50; i++) { obj1.push(1); obj1.push(0);}
    std::cin>>k;
    while ((k>0) and (k<100)){
        int total=0;
        count++;
        for ( int i=0; i< k; i++){ ui=obj1.pop(); total+=ui; obj2.push(ui);}
        for (int i=0; i<k; i++){ ui=obj2.pop(); obj1.push(ui);}
        obj1.push(total);
        std::cin>>k;
    }
     std::cout<<"the new length is"<< 100+ count<< std::endl;
     std::cout<< "the last sum is"<< obj1.pop()<< std::endl;
     return 0;       
    }
