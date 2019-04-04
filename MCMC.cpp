#include <iostream>
#include <cstdlib>
#include <math.h>
#include <ctime>


using std::cout;
using std::endl;

void MCMC(int N);
double f(double x);
double min(double x, double y);

int main(){
int N;
N=1000;    
MCMC(N);  
return 0;
}

void MCMC(int N){
   double resp;
   double prop;
   double prim;
   double r;
   double alpha;
   srand48(time(0));
   prim = 2*drand48()-1;
   for (int i=0; i<N; i++){
       prop=prim+ 2*drand48()-1;
       r=min(1.0,f(prop)/f(prim));
       alpha=drand48();
       if(r>alpha){
          prim=prop; 
       }else{
          
       }
       cout << prim << endl;
   } 
}

double f(double x){
 return exp(-x*x/2);    
}   

double min(double x, double y){
double r;
    if (x<y){
        r=x;}
    else{
        r=y;}
return y;    
}

