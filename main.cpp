#include <iostream>
void chooseInn(){
  int choice;
  std::cout<<"1) drink a coffee\n"
<<"2) listen to music\n"
<<"3) Talk to locals\n";
std::cin>>choice;
while(choice <= 0 || choice > 3){
  std::cout<<"1) drink a coffee\n"
<<"2) listen to music\n"
<<"3) Talk to locals\n";
std::cin>>choice;
  }
if(choice == 1){
std::cout<<("Cofee drinking code");
}
else if(choice == 2){
std::cout<<("Music listen code");
  }
else if(choice == 3){
std::cout<<("Speak with locals code");
}
}



int main(){
std::string name;
bool isAlive = true;
std::string scared;
int choice;
bool isScared;
int health;
std::cout<<"Welcome to the town of Howntehd! Where there are certainly no ghosts!\n";
std::cout<<"     .-. \n"
<<"   .'   `. \n"
<<"   :g g   : \n"
<<"   : o    `. \n"
<<"  :         ``. \n"
<<" :             `. \n"
<<" :  :         .   `. \n"
<<":   :          ` . `. \n"
<<" `.. :            `. ``; \n"
<<"    `:;             `:' \n"
<<"       :              `. \n"
<<"       `.              `.     . \n"
<<"          `'`'`'`---..,___`;.-'; \n";

std::cout<<"What is your name?\n";
std::cin>> name;
std::cout<<"Why, hello "<< name<<"\n";
std::cout<<"Are you afraid of ghosts?\n y/n\n";
std::cin>>scared;
if(scared == "y"|| scared == "yes"){
  health = 4;

}else if(scared == "n"|| scared == "no"){
  health = 10;
}
  else{
    std::cout<<"i'm going to guess yes. \n";
    health = 4;
  }
std::cout<<"Your health is "<< health <<" HP\n";
std::cout<<"*************************************\n";
std::cout<<"*************************************\n";
std::cout<<"We offer an inn here in the town of Howntehd. It's quite comfortable! We serve coffee, offer music and allow for you to speak with some of the locals. What would you like to do?\n";
chooseInn();
  }
