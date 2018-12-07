class LN{
    public:
    int content;
    LN* next;
};

LN* push( LN* head, int k){
    LN* neu; 
    neu= new LN;
    neu->content= k;
    neu->next= head;
    head=neu;
    return head;
}

LN* pop(LN* head){
    if ( head!= nullptr){
        LN* neu;
        neu=head;
        head= head->next;
        delete neu;
        
    }
    return nullptr;
}

int readtop(LN* head){ int fr=-17; if (head!=nullptr){ fr=head->content;} return fr;}
