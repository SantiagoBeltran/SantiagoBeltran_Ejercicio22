#include <iostream>
#include <cstdlib>
#include <math.h>
#include <ctime>


using std::cout;
using std::endl;

void MCMC(int N);
float f(float x);

int main(){
int N=1000;
void MCMC(N);  

    
    
return 0;
}

void MCMC(int N){
   float resp;
   float prop;
   float prim;
   srand48(time(0));
   prim = 2*drand48()-1;
   for (int i=0; i<N; i++){
       prop=prim+ drand48();
       r=f(prop)/f(prim);
       alpha=drand48();
       if(r>alpha){
          resp=prop;
          prim=prop; 
       }else{
          resp=prim;
       }
       cout << resp << endl;
   } 
}

float f(float x){
 return exp(-x*x/2);    
}    
