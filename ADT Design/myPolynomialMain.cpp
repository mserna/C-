/*
Matthew Serna
910958209
mserna@mail.sfsu.edu
CodeBlocks
*/

#include <cstdlib>
#include <iostream>
#include <vector>
#include "myPolynomial.h"

using namespace std;

int main(){
    //Variable created for choosing option
    int option;
    myPolynomial polynomial;
    int terms;

    while(true){

        //User menu that outputs options and takes in iteger value input
        cout << "Please choose an option: " << endl;
        cout << "1) Create a Polynomial" << endl;
        cout << "2) Return Coefficent of a Term" << endl;
        cout << "3) Change coefficient of a Term" << endl;
        cout << "4) Multiply a Polynomial by an Integer" << endl;
        cout << "5) Add Polynomials" << endl;
        cout << "6) Negate Polynomial" << endl;
        cout << "7) Print Polynomial" << endl;
        cout << "0) Exit"<< endl;
        cout << "" << endl; //White Space
        cout << "Choose: ";

        //Takes user input
        cin >> option;

        //Throws error for invalid input
        if(option < 0 || option > 8){
            cout << "Please enter a valid option" << endl;
        }


        //Statements for each option
        if (option == 1){

            cout << "Please enter the amount of terms: ";
            cin >> terms;
            polynomial.readFromUser(terms);

        }else if (option == 2){

            //Degree value
            int value;
            cout << "By degree, which coefficient would you like to get: ";
            cin >> value;

            //Error catching!
            if ( value <= 1){
                cout << "Please enter a valid number!" << endl;
                cout << "By degree, which coefficient would you like to get: ";
                cin >> value;

                if (polynomial.getCoefficient(value) == 0){

                    //Error throw!
                    cout << "This doesn't have a coefficient!" << endl;

                }else{

                    //Returns valid coefficient from user input
                    cout << "The coefficient of degree " << value << " is " << polynomial.getCoefficient(value) << endl;
                }
            }

        }else if (option == 3){

            //Instantiate new Coefficient integer and degree value
            int newCoefficient;
            int value;

            cout << "By degree, what is the coefficient you would like to change: ";
            cin >> value;

            //Error throw!
            if ( value <= 1){
                cout << "Please enter a valid number!" << endl;
                cout << "By degree, which coefficient would you like to get: ";
                cin >> value;

                //Prompts user for new Coefficient
                cout << "What is the new coefficient: ";
                cin >> newCoefficient;

                //Calls the changeCoefficient method to process change
                polynomial.changeCoefficient(newCoefficient, value);

            }
        }else if (option == 4){

            //Instantiate multiplier
            int multiplier;
            cout << "What would you like to multiply by: ";
            cin >> multiplier;

            //Calls multiplier function
            polynomial.multiplier(multiplier, terms);

        }else if (option == 5){

            //Calls the add method
            polynomial.adder(terms);
            cout << "Added terms!" << endl;
            cout << "To display result choose option 7." << endl;

        }else if (option == 6){

            //Negates the polynomial created
            //polynomial.operator-(terms);

        }else if (option == 7){

           //Prints out polynomial(s)
            polynomial.printOut(terms);
        }
    }
        //Prompts user of program termination
        cout << "Program Exited" << endl;

return 0;
}
