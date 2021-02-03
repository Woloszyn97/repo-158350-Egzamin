#ifndef MYSIN_H
#define MYSIN_H
#include <iostream>


  

class MySin
{
    public:
	
         MySin();
		
         ~MySin();
		
         MySin(double x);
		
         MySin(const MySin &obj);
		
        double value();
		
        void setX(double);
		
        double getX();
	

        private:
	
            double mX();
};

#endif // MYSIN_H
