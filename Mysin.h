#ifndef MYSIN_H
#define MYSIN_H
#include <iostream>


  
/**Utworzona klasa MySin*/
class MySin
{

    public:
/**Metoda publiczna MySin()*/

         MySin();
		 
/**Metoda publiczna ~Mysin()*/
         ~MySin();
			
/** Metoda publiczna MySin(double x )*/
         MySin(double x);
			/** Metoda publiczna MySin(const MySin &obj)*/
         MySin(const MySin &obj);
			/** Metoda publiczna double value()*/
        double value();
			/** Metoda publiczna void setx(double)*/
        void setX(double);
			/** Metoda publiczna double getX()*/
        double getX();
	

        private:
		/** Składowa prywatna double mX() */
	
	/**Funkcja value ma zwracać wartość \f$\sin(x)\f$ , która jest wyliczana na podstawie pierwszych 10 wyrazów szeregu \f$\sin(x)=\sum_{k=0}^\infty(-1)^k\frac{x^{2k+1}}{(2k+1)!}\f$ \image html wykres.png*/
            double mX();
};

#endif // MYSIN_H
