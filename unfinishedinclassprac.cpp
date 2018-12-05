#include <iostream>

class TN{
    public:
  int content;
  TN* pnext;
};
class Stack{
    private:
    TN* pt;
    public:
    void push( int );
    int pop();
    int readtop();
    Stack();
    ~Stack();
   
};

Stack::Stack(){
    pt=nullptr;
}

void Stack:: push( int nb){
    TN* neww= new TN;
    neww->pnext=pt;
    neww->content=nb;
    pt= neww;
}

int Stack::pop(){
     int fr=-17;
    if (pt!=nullptr){
        TN* neww; 
        neww= pt;
        fr=neww->content;
        pt=pt->pnext;
        delete neww;
        
    }
            return fr;

}

int Stack::readtop(){
    return pt->content;
}

Stack::~Stack(){
    while (pt!=nullptr){
        pop();
    }
}



int main(){
    Stack obj, obj1,obj2, obj3,obj4;
    int ui, temp, min;  temp=-10;
    std::cout<< "please enter number";
    std::cin>>ui;
    int count1=0;
    int count=0;
    while (ui!=-9){
        if (ui!=-9){
        if (( ui==-2) and (count >0)){
            min=obj.readtop();
            for ( int i=1; i< count; ++i){
                 temp=obj.pop();
                 obj1.push(temp);
                   if ( min > temp){   
                     
                     min=temp;
                }
            }
        for (int i=1; i<count; i++){
           obj2.push(obj1.pop());}
           
           for (int i=1; i<count; i++){
           obj.push(obj2.pop());}
           
           obj4.push(min);
           count1++;
            
        }
        if (( ui==-1) and (count >0)) {
          obj.pop();  
        }
        else{
          obj.push(ui);
          count++;
        }
        
        
        
        
        
        
    }
    std::cout<< "please insert numbers again" <<std::endl;
    std::cin>>ui;
    }
    
    
    
    
    
    
    
    
    for (int i=1; i<count1; i++){
     obj3.push(obj4.pop());
    
    }
    
    while(count1>1){
        std::cout<< obj3.pop()<< std::endl;
        count1--;
    }
    return 0;
    
}
