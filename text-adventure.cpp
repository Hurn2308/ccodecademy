#include <iostream>

int main(){
  std::cout << "=======================================\n";
  std::cout << "Welcome to the Murder Mystery of Darren!\n";
  std::cout << "=======================================\n";

  int interrogate;

  std::cout << "It was a cold and gloomy night, you're working your job as a detective. You arrived at the crime scene to see the soulless body of a young chinese man. Your subordinate tells you theres 3 men that are suspected of the murder; Ilhan Gabriel, Chan Zheng Shao, and Lee Kuang Weng.\n";
  std::cout << "*Your assistant comes up to you*\n" << "Assistant Sulaiman: Sir, which of the 3 should we interrogate first?\n";

int o1;

do {
  //Suspect Selection
  std::cout << "Choose Your Suspect:\n";
  std::cout << "1. Ilhan Gabriel\n";
  std::cout << "2. Chan Zheng Shao\n";
  std::cout << "3. Lee Kuang Weng\n";
  std::cout << "0. Move on to next scene.\n";
  std::cout << "Enter your choice: \n";
  std::cin >> interrogate;

int ilhan1 = 0;

  switch(interrogate){
    case 1:
    do{
     std::cout << "What would you like to ask him?\n" << "1) What were you doing at the time of the murder?\n" << "2) How did you view darren as a person?\n" << "0) Ask another suspect\n";
     std::cin >> o1;
     if (o1 == 1){
      std::cout << "Ilhan: I was just doing the usual playing bedwars and drinking pepsi. Casual stuff, you know?\n";
     } else if(o1 == 2){
      std::cout << "He was just a normal guy, really obsessed with chinese girls though...\n";
     }
  } while (o1 != 0);
  break;
    case 2:
    do {
      std::cout << "What would you like to ask him?\n" << "1) What were you doing at the time of the murder?\n" << "2) How did you view darren as a person?\n" << "0) Ask another suspect\n";
     std::cin >> o1;
     if (o1 == 1){
      std::cout << "Zheng Shao: I was just doing the usual playing Genshin Impact and drinking chinese tea. Casual stuff, you know?\n";
     } else if(o1 == 2){
      std::cout << "He was just a normal guy, really obsessed with chinese girls though...\n";
     }
    } while (o1 != 0);
    break;
    case 3:
    do {
      std::cout << "What would you like to ask him?\n" << "1) What were you doing at the time of the murder?\n" << "2) How did you view darren as a person?\n" << "0) Ask another suspect\n";
     std::cin >> o1;
     if (o1 == 1){
      std::cout << "Lee: I was just doing the usual reading Ao3 and loving bronseele. Casual stuff, you know?\n";
     } else if(o1 == 2){
      std::cout << "He was just a normal guy, really obsessed with chinese girls though...\n";
     }
    } while (o1 != 0);
    break;
     default :
     break; 
  }

} while (interrogate != 0);

int answer = 0;

std::cout << "*After hearing from all of the suspects, who do you think is the murderer?*\n";
std::cout << "1) Ilhan Gabriel\n";
std::cout << "2) Chan Zheng Shao\n";
std::cout << "3) Lee Kuang Weng\n";
std::cin >> answer;

if(answer == 1){
  std::cout << "You have found the culprit!\n";
  std::cout << "Thank you for playing the Darren Murder Mystery!\n";
} else if (answer == 2){
  std::cout << "You have not found the culprit!\n";
  std::cout << "Thank you for playing the Darren Murder Mystery, better luck next time!\n";
} else if (answer == 3){
  std::cout << "You have not found the culprit!\n";
  std::cout << "Thank you for playing the Darren Murder Mystery, better luck next time!\n";
} else {
  std::cout << "Invalid Input!\n";
}

}
