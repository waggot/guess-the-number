#include <iostream>

int main()
{
  int num = 0;
  int guess= 0; 
  int tries = 0;
  srand(time(0));
  num = rand() % 100 + 1;
  
  do{
  std::cout << "Guess the a number between 0-100! \n";
  std::cin >> guess; 
  tries++;
  
  if (guess > num ){
        std::cout << "lower\n";
  } 
  else if (guess < num ){
    std::cout << "higher\n";    
  }
  else (std::cout << "CORRECT!!!!!\n");
  } while (guess != num);
}
