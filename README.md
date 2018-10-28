#include <iostream>

class BagOfPoints{
private:
double *sequenceX;
double *sequenceY;
int numPoints;
public:
BagOfPoints(const int & =0);
BagOfPoints(const BagOfPoints &);
BagOfPoints(BagOfPoints&&);
void operator=(const BagOfPoints &);
void operator=(BagOfPoints&&);
~BagOfPoints();
double getX(const int &) const;
double getY(const int &) const;
int getLength() const;
void setTerm(const int &, const double &, const double &);
void setLength(const int &);
}; 

BagOfPoints::getX(const int& k ){
  return k.x;
}
BagOfPoints::getY(const int& k ){
  return k.y;
}

BagOfPoints::getLength(){
  return numPoints;
}
BagOfPoints::setTerm(const int & i, const double &x, const double &y){
  i.x=getX(x);
  i.y=getY(y);
  
} 
BagOfPoints::BagOfPoints(const int& k){
  numPoints= k;
  sequenceX= new int[numPoints];
  sequenceY=new int[numPoints];
}
BagOfPoints::BagOfPoints(const BagOfPoints& copyFrom){
  BagOfPoints seq;
  seq.k= copyFrom.k;
  for (i=0, i<copyFrom.k, i++){
    seq.sequenceX[i]= copyFrom.sequenceX[i];
    seq.sequenceY[i]= copyFrom.sequenceY[i];}
    //constructor no return value
}


void BagOfPoints::operator=(const BagOfPoints& copyFrom){
    BagOfPoints seq;
    seq.k= copyFrom.k;
    for (i=0, i<copyFrom.k, i++){
      seq.sequenceX[i]= copyFrom.sequenceX[i];
      seq.sequenceY[i]= copyFrom.sequenceY[i];}
      //void no return value
}

BagOfPoints::BagOfPoints(BagOfPoints&&){
  
}

void BagOfPoints::operator=(BagOfPoints&&){
  
}
















  
}
