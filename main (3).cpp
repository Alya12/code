#include <iostream>
using namespace std;

class ListNode{ 
public: 
 int content; 
 ListNode* pNext; 
}; 
class Stack{ 
private: 
 ListNode* top; 
public: 
 Stack(); 
 ~Stack(); 
 int pop(); 
 void push(int); 
}; 
Stack::Stack(){ 
 top=nullptr; 
} 
void Stack::push(int x){ 
 ListNode *newNode; 
 newNode=new ListNode; 
 newNode->content=x; 
 newNode->pNext=top; 
 top=newNode; 
} 
int Stack::pop(){ 
 int fR; //=-17;// If the function returns this number, then it means that the stack is empty. 
 if(top!=nullptr){ 
 ListNode* newNode; 
 newNode=top; 
 top=top->pNext; 
 fR=newNode->content; 
 delete newNode; 
 } 
 return fR; 
} 
Stack::~Stack(){ 
 while(top!=nullptr){ 
 pop(); 
 } 
}

int main(){
    int rsum=0; int current; Stack y; Stack x; int n; int counter=0; int newindex;
    // we initially add the first selection of user to the linked Lis
    cin>> n;
    while(n!=-9){
        x.push(n);
        if (counter<n){ rsum+=0;}
        else if (counter>= n){
            for (int i=counter; i>counter-n;--i){
                cout<< "this is i "<< i << endl;
                newindex=x.pop();
                cout<< "this is x.pop"<< newindex<<endl;
                y.push(newindex);}
            
            current=x.pop();
            rsum+=current;
            cout<<"this is rsum"<< rsum<<endl;

            x.push(current);
            for (int i=0; i< n; i++){x.push(y.pop());}
        }
            counter+=1;
            cin>>n;}
    cout<< "the total is "<< rsum<< endl;
   
    return 0;
}
//7 2 1 3 3 4 1 3    
    
    
    
    
    
    
    
    
    
    
    


