#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include "BMI.h"
using namespace std;
int height;
int mass;
float c;
float countBMI(int height,int mass)
{  
   float c;
   c=mass/((float)(height*0.01))/((float)(height*0.01));
   return c;
}
string categoryBMI()
{  string x;
   string u;
   string n;
   string o;
   string m;
   string s;
   string v;
   if(c<=15)   x='v' ;
   if(15<c<=16)  x='s';
   if(16<c<=18.5)  x='u';
   if(18.5<c<=25)  x='n';
   if(25<c<=30)   x='o';
   if(30<c<=35)   x='m';
   if(35<c<40)   x='s';
   if(c>=40)   x='v';
     return x;
}
       
int main()
{
   BMI ccb;
   ifstream infile("file.in",ios::in);
   int setBMI(int a,int b);
   int getBMI();
   ofstream outfile("file.out",ios::out);
   outfile<<"height\tmass\tBMI\tcategory\n";
   while(infile>>height>>mass){
       outfile<<height<<"\t"<<mass<<"\t"<<countBMI(height,mass)<<"\t"<<categoryBMI()<<"\t"<<endl;
    }
  
    cout<<endl;
    return 0;
}   
    
