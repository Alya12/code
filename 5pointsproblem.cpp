#include <iostream>
#include <map>
#include <set>

int main() {
  std::set <std::string>::iterator itt;
  std::map <std::string, std::set <std::string>  > S;
  std::map <std::string,  std::set <std::string>  >::iterator it;
  std::string comp ui; ui=""; comp="";
while (comp!="stop"){ 
    std::cin>> comp;
    ui=comp;
  if ( ui!="stop"){
  while (ui!="stop"){
      std::cin>>ui;
      if (ui!="stop"){
        S[comp].insert(ui);}
      
  }
  
    //A.clear();
}
}
  for (it=S.begin(); it!=S.end();++it){
    //std::cout<< "hello\n";
    std::cout<< it->first<<std::endl;
    for (itt=(it->second).begin(); itt!= (it->second).end(); ++itt){
         std::cout<< *itt<< std::endl ;
    }
   // std::cout << (*it).second ;
  }
}
