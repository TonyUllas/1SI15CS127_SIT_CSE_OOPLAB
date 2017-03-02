#include <iostream> 
#include <cmath>
using namespace std;
class CircleType
{    private:  
      int Radius;  
      int Xc, Yc;    
      public:    
        CircleType();   
        CircleType(int, int, int);
        void SetRadius(int);    
        void ShowDetails();    
        friend void CheckCircles(CircleType, CircleType);
 }; 

CircleType :: CircleType()     
 {    iRadius = Xc = Yc = 0; } 

CircleType :: CircleType(int r, int x, int y)
{   Radius = r;    Xc = x;    Yc = y; }

void CircleType :: ShowDetails() 
{    cout << "\nRadius : " << Radius;    cout << "\nXcenter : " << Xc; cout << "\nYcenter : " << Yc; }

void CheckCircles(CircleType c1, CircleType c2) 
{    double Dist;  
     Dist = sqrt(((c2.Xc - c1.Xc)*(c2.Xc - c1.Xc) + (c2.Yc - c1.Yc)*(c2.Y-c1.Yc)));
                                                                            
      if (Dist == c1.Radius + c2.Radius)       
         cout << "\nTwo circles touch each other" << endl;  
      else if (Dist < c1.Radius + c2.Radius)        
      cout << "\nTwo circles intersect one another" << endl;
      else       
     cout << "\nTwo circles are disjoint" << endl; 
 }
int main(void)
{   
  CircleType c1(10,15,0), c2(10,5,5), c3(10,17,5);   
  CheckCircles(c1,c2);      
  CheckCircles(c1,c3);        
  CheckCircles(c2,c3);      
  return 0; 
}
