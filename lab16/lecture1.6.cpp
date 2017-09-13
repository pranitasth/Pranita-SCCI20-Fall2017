//Created By: Pranita Shrestha
//Created On: 9/11
 
 #include <iostream>
 using namespace std;
 
 struct monster{
  string head;
  string eyes;
  string ears;
  string mouth;
  string nose;
 };
 
 int main()
 {
   monster monsterA;
   monsterA.head = "Zombus";
   monsterA.eyes = "Vegitas";
   monsterA.ears = "Wackus";
   monsterA.nose = "Vegitas";
   monsterA.mouth = "Wackus";
   
    monster monsterB;
   monsterA.head = "Happy";
   monsterA.eyes = "Spirtem";
   monsterA.ears = "Wackus";
   monsterA.nose = "Vegitas";
   monsterA.mouth = "Wackus";
   
   cout<<"Head:"<<monsterA.head<<endl;
   cout<<"Eyes:"<<monsterA.eyes<<endl;
   cout<<"Ears:"<<monsterA.ears<<endl;
   cout<<"Nose:"<<monsterA.nose<<endl;
   cout<<"Mouth:"<<monsterA.mouth<<endl;
   
   cout<<"Head:"<<monsterB.head<<endl;
   cout<<"Eyes:"<<monsterB.eyes<<endl;
   cout<<"Ears:"<<monsterB.ears<<endl;
   cout<<"Nose:"<<monsterB.nose<<endl;
   cout<<"Mouth:"<<monsterB.mouth<<endl;
     
     
 }