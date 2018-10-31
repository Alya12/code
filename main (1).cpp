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
 int fR=-17;// If the function returns this number, then it means that the stack is empty. 
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
    int rsum; int current; Stack y; Stack x; int n; int counter=0;
    // we initially populate the linked list with the 100 terms
    for (int i=0; i< 50; i++){ x.push(1); x.push(0);}
    // asking the user for input
    cin>> n; 
    while (n!=0){
        counter+=1;
        rsum=0;
        for (int i=0; i< n; i++){ current=x.pop(); y.push(current); rsum+=current;}
        for (int i=0; i< n; i++){x.push(y.pop());}
        x.push(rsum);
        //asking the user for input again
        cin>> n;
    }
    cout<< "the last total is"<< x.pop()<< endl;
    cout<< "the length of the new list is"<< 100+counter<< endl;
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    


