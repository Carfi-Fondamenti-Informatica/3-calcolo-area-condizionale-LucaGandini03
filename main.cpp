#include <iostream>
using namespace std;

int main() {
   float a=0;
   float B=0
   int opzione=0;
   cin>>a>>b>>opzione;
   switch(opzione){
      case 0:
          (a*b)/2;
          cout<<(a*b)/2;
          break;
      case 1:
         (a*a);
         cout<<(a*a);
         break;
      case 2:
         (a*b);
         cout<<(a*b);
         break;
      default:
         cout<<"opzione non valida";
   }
   return 0;
}
