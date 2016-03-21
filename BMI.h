#include<iostream>
#include<string>
using namespace std;
class BMI
{
 private:
     int height;
     int mass;
 public: 
     float setBMI(int a,int b)
     {   
         height=a;
         mass=b;
     } 
     float getBMI()
     {
            return height,mass;
     }
     float countBMI(int height,int mass);
     string categoryBMI();
      
};
