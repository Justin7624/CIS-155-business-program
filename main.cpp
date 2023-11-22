#include <iostream>
#include <stdlib.h>

using namespace std;

void mainMenu(), jeanOptions(), shirtOptions(), shoesOptions(), sweatShirtOptions(), leaveTheStore(), checkOut();

int jeans, shirts, shoes, sweatShirts;
int jeanTotal, shirtTotal, shoeTotal, sweatShirtTotal;

int main() {
  mainMenu();

  return 0;
}

void checkLoop(){
  int choice;

  
  cout << "Would you like to continue to shop?" << endl;
  cout << "1 >> Yes." << endl;
  cout << "2 >> No." << endl;
  cin >> choice;

  
  while(choice == 'Y'){
    mainMenu();
  }
}

void mainMenu(){
  int choice;
  cout << "Welcome to The Clothing Shop." << endl;
  cout << "What would you like to purchase today?" << endl;
  cout << "1 >> Jeans" << endl;
  cout << "2 >> Shirts" << endl;
  cout << "3 >> Shoes" << endl;
  cout << "4 >> Sweatshirts" << endl;
  cout << "5 >> Check Out" << endl;
  cout << "6 >> Quit the Shop" << endl;
  cin >> choice;

  if(choice == 1){
    jeanOptions();
  }else if(choice == 2){
    shirtOptions();
  }else if(choice == 3){
    shoesOptions();
  }else if(choice == 4){
    sweatShirtOptions();
  }else if (choice == 5){
    //quit
    checkOut();
  }else if(choice == 6){
    leaveTheStore();
  }else{
    cout << "Invalid option! Please try again.\n" << endl;
    mainMenu();
  }
}

void jeanOptions(){
  int desiredAmount;
  cout << "One pair of jeans is $30." << endl;
  cout << "How many jeans would you like?" << endl;
  cin >> desiredAmount;

  jeans = jeans + desiredAmount;
  jeanTotal = jeanTotal + (desiredAmount * 30);
  cout << "Your total is: $" << jeanTotal << endl;
  mainMenu();
}

void shirtOptions(){
  int desiredAmount;
  cout << "One shirt is $15." << endl;
  cout << "How many shirts would you like?" << endl;
  cin >> desiredAmount;

  shirts = shirts + desiredAmount;
  shirtTotal = shirtTotal + (desiredAmount * 15);
  cout << "Your total is: $" << shirtTotal << endl;
  mainMenu();
}

void shoesOptions(){
  int desiredAmount;
  cout << "One pair of shoes is $10." << endl;
  cout << "How many pairs of shoes would you like?" << endl;
  cin >> desiredAmount;

  shoes = shoes + desiredAmount;
  shoeTotal = shoeTotal + (desiredAmount * 10);
  cout << "Your total is: $" << shoeTotal << endl;
  mainMenu();
}

void sweatShirtOptions(){
  int desiredAmount;
  cout << "One sweatshirt is $35" << endl;
  cout << "How many sweatshirts would you like?" << endl;
  cin >> desiredAmount; 
  
  sweatShirts = sweatShirts + desiredAmount;
  sweatShirtTotal = sweatShirtTotal + (desiredAmount * 35);
  cout << "Your total is: $" << sweatShirtTotal << endl;
  mainMenu();
}

void leaveTheStore(){
  char choice;
  cout << "Are you sure you want to leave?" << endl;
  cout << "Y >> Yes." << endl;
  cout << "N >> No." << endl;
  cin >> choice;

  switch(choice){
    case 'Y':
    case 'y':
      cout << "Thank you, please come back again!" << endl;

      exit(0);
      break;
    case 'N':
    case 'n':
    default:
      cout << "Returning to the Main Menu." << endl;
      mainMenu();
      break;
  }
}

void checkOut(){

  int clothingAmount = jeans + shirts + shoes + sweatShirts;
  int totalPrice = jeanTotal + shirtTotal + shoeTotal + sweatShirtTotal;
  
  cout << "Your shopping cart includes: " << endl;
  cout << "Jeans -- Qty: " << jeans << " -- Price: $" << jeanTotal << endl;
  cout << "Shirts -- Qty: " << shirts << " -- Price: $" << shirtTotal << endl;
  cout << "Shoes -- Qty: " << shoes << " -- Price: $" << shoeTotal << endl;
  cout << "Sweatshirts -- Qty: " << sweatShirts << " -- Price: $" << sweatShirtTotal << endl;
  cout << "You are buying a total of " << clothingAmount << " article(s) of clothing." << endl;
  cout << "Your total is: $" << totalPrice << "." << endl;
    } 
