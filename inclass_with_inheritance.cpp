#include <iostream>
#include <map>
class myfunc{ // base class
private: std::string name;
public:
  myfunc();
  void setName(const std::string &);
};

void myfunc::setName(const std::string str){ name=str;}

 class func1:public myfunc{
 private: double k; double b;
 public:
   func1(const double &=1.0, const double=1.0);
   void setAttributes(const double &=1.0, const double=1.0);
   double evaluate(const double) const;
 };
func1::func1(const double & g=1.0, const double f=1.0){ k=g; b=f;}
void func1::setAttributes(const double & g=1.0, const double f=1.0){ k=g; b=f;}
double func1::evaluate(const double& x)const{ return (k*x)+b;}


int main(){
  func1 obj;
  std::string str;
  std::cin>> str;
  obj.setName(str);
  obj.setAttributes(5.0,2.0);
  std::cout << obj.evaluate(-3.0) << "\n";
  return 0;
}
// in his evaluate at first is 17.28 virtual so inherited class will receive  so you get to the child class
//same thing for set parameters that is going to be inherited as well so its has to be virtual 
