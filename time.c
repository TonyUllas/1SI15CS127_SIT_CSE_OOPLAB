#include <iostream> 
using namespace std;
class Duration 
{   
  int Hr, Mn, Sc;    
  public:    
    Duration();    
    Duration(int, int, int);    
    void SetDuration();    
    void ShowDuration();    
    Duration AddDuration(Duration);
};
Duration :: Duration() {    Hr =Mn =Sc = 0; }
Duration:: Duration(int h, int m, int s) {   Hr = h;    Mn = m;    Sc = s; }
void Duration:: SetDuration()
{    
  int h,m,s;    
  cout << "\nEnter the duration : "; 
  cin >> h >> m >> s;    
  if(m<60 && s<60)    
  {        
    Hr = h;        
    Mn = m;        
    Sc = s;    
  }    
  else        
    cout << "\nInvalid Input\n";
}
void Duration :: ShowDuration() 
{    
  cout <<Hr << ":"<<Mn << ":"<< Sc << endl; 
}
Duration Duration :: AddDuration(Duration d2) 
{    
  Duration d3;    
  int hh, mm, ss;    
  ss = Sc + d2.Sc;    
  mm =Mn + d2.Mn + (ss/60);   
  hh =Hr + d2.Hr + (mm/60);            
  d3.Sc = ss % 60;    
  d3.Mn = mm % 60;    
  d3.Hr = hh;    
  return d3;
}
