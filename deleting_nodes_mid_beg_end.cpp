//User enters the integers. The input −9 is the end, and unless it is the first integer, 
//it is not to be considered the part of the input. Create a linked list from the numbers that the user has entered.
//The user enters another integer. If this integer is in the list, delete its last occurrence from the list and print the remaining list. 
//If it is not in the list, print the original list.
//


#include <iostream>
class TN {
    public:
    int content;
    TN* pnext;
};

int main(){
    int ui, el;
    TN* head;
    head=new TN;
    std::cin>> ui;
    head->content=ui;
    head->pnext= nullptr;
    TN* root;
    root=head;
    while (ui>0){
        std::cin>>ui;
        if (ui>0){
            root->pnext= new TN;
            root=root->pnext;
            root->content=ui;
            root->pnext= nullptr;
        }}
        
        root= head;
        int count=0;
        std::cout<< "please input the element to check"<<std::endl;
        std::cin>>el;
        while (root!=nullptr){
            if ((root->content) == el) { count++;} ;
            root=root->pnext;
        }
        root=head; 
         TN* beroot;
         // creating first box so we can delete first pointer 
         TN* proot;
         proot= new TN;
         proot->pnext= root;
         root=proot;
        while ((( root->pnext )!= nullptr) and (count>0)){
            if ( (root->pnext)->content==el){ count--;}
            if ( count==0){
                TN* temp;
                 temp=(root->pnext)->pnext;
                if (temp==nullptr){ beroot=root->pnext; root->pnext=nullptr; delete beroot; break;}
                else{ beroot=root->pnext;   root->pnext=temp;  delete beroot; }
             }
              root=root->pnext; 
        }//delete the empty box at begining 
         root=proot;
         root= root->pnext;
         delete proot;
         head=root; // head still pointing to that deleting box
         while (root!=nullptr) { std::cout <<root->content<< " "; root=root->pnext;}
         delete root, head;
     return 0;       
    }
