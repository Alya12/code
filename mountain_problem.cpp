//The user input consists of multiple lines. In each line the user provides a string mountain and a positive real number height that correspond to the names of mountains and their heights (in meters). A negative number in one of the lines means that the input is over. The last line should not be taken into account. 
//Determine the longest subsequence of consecutive lines from the user input in which every mountain is taller than three thousand meters.
Input: 
//OlympusMons 21287.4 
//Kilauea 1247 
//MountEverest 8848 
//Kilimanjaro 5895 
//MontBlanc 4808.7 
//AppalachianMountains 2037 
//MountRainier 4392 
//Lassen 3187 
//LastLine -8 

#include <map>
#include <iostream>
#include <unordered_map>
class mypair {
public: int position; std::string mountain_name; int operator<(const  mypair&) const;};
int mypair::operator<(const  mypair& d) const{if (d.position> position){ return 1;}  return 0;}

int main(){
std::map<mypair, int > mpp;
std::map<mypair, int > mpf;
int i=0;
std::string mountain;
int height;
int sizempp=0; int sizempf=0;
height=1;
while (height>0){
  std::cin>> mountain>>height;

  if (height>0){
  if ( mpp.size()!=0){ mpp.clear();}
  while (height>3000){
  mypair tmp;
  tmp.position= i++; // this was intially is the problem
  tmp.mountain_name= mountain;
  std::cout << tmp.mountain_name;
  mpp[tmp]=height;
  std::cin >>mountain>> height;

}
  sizempp= mpp.size();
  sizempf=mpf.size();
  if (sizempp>sizempf){mpf.clear(); mpf.insert(mpp.begin(), mpp.end()); }
}


}
std::cout << mpf.size();
 std::map<mypair, int>::iterator it;
 for(it=mpf.begin(); it!=mpf.end(); it++){
   std::cout << (it->first).mountain_name <<" "<< it->second;
 }
 return 0;



}
