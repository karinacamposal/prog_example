# include <iostream>
using namespace std;

int main() {

  char operation;
  float n1, n2;

  cout << "Enter the capitalized letter as it corresponds to the operation you wish to perform: A if you want to add, B if you want to subtract, C if you want to multiply and D if you want to divide \n"; //Defining
  cin >> operation; //Saving

  cout << "Enter a number:\n"; //Defining the first variable
  cin >> n1; //saving the first variable
  
  cout << "Enter another number: \n "; //Defining the second variable
  cin >> n2; //saving the second variable
  

  switch(operation) {

    case 'A':
      cout <<"El resultado es \n" << n1 + n2;  //Completing the selected operation
      break;

    case 'B':
      cout << "El resultado es  \n" << n1 - n2; //Completing the selected operation
      break;

    case 'C':
      cout << "El resultado es \n"<< n1 * n2; //Completing the selected operation
      break;

    case 'D':
      cout << "El resultado es \n" << n1 / n2; //Completing the selected operation
      break;

    default:
      cout << "Error! operator is not correct";  // If the letter chosen according to the operator is other than A, B,C or D, error message is shown
      break;
  }

  return 0;
}