#include <iostream>
#include <ctime>

int main(){

  // Welcome message
  std::cout << "Welcome to the calculator game!\n";
  std::cout << "-------------------------------\n";
  std::cout << '\n';

  // Initializations
  std::srand(std::time(0)); // random seed
  const char operations[] {'+', '-', '*'};
  bool game_over {false};

  // Game loop
  while(!game_over) {
    
    // Get random statement
    char operation {operations[std::rand() % std::size(operations)]};
    int operand1 {std::rand() % 200};
    int operand2 {std::rand() % 200};

    // Interact with player
    std::cout << "What's the result of " << operand1 << " " << operation << " " ;
    std::cout << operand2 << "?: ";
    int player_answer {};
    std::cin >> player_answer;

    // Calculate answer
    int computed_answer {};
    if (operation == operations[0]) {
      computed_answer = operand1 + operand2;
    } else if (operation == operations[1]) {
      computed_answer = operand1 - operand2;
    } else if (operation == operations[2]) {
      computed_answer = operand1 * operand2;
    }

    // Compare answer
    if (player_answer == computed_answer) {
      std::cout << "Congratulations! You got the result " << computed_answer << " right!\n";
    } else {
      std::cout << "Naah! The correct result is " << computed_answer << '\n';
    }

    std::cout << "Do you want to try again? (Y | N): ";
    char try_again {};
    std::cin >> try_again;

    if(!((try_again == 'y') || (try_again == 'Y'))) {
      game_over = true;
    }

    std::cout << '\n';
  }

  // Good-bye message
  std::cout << "Thanks for playing!\n";

  return 0;
}
