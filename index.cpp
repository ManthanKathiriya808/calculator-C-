#include<iostream>

using namespace std;

int main(){

int score;
cout << "Enter Your Score: " ;
cin >> score;

string A = "Your Grade is A.";
string B =  "Your Grade is B.";
string C =  "Your Grade is C. ";
string D =  "Your Grade is D.";
string F = "You are Failed. " ;

char marks;
 (score >=90  )? marks='A'  :
( score >=70)?  marks = 'B' :
( score >=50)? marks = 'C' :
( score >=35)?  marks = 'D' : 
 marks = 'F' ;

switch (marks)
{
case 'A':
    cout << "your Grade is A." << " Excellent work! ";
    break;
case 'B':
    cout << "your Grade is B."<< " Well done ";
    break;
case 'C':
   cout << "your Grade is C."<< " Good job ";
    break;
case 'D':
   cout << "your Grade is D."<< " You passed, but you could do better ";
    break;
case 'F':
   cout << "your Grade is F." <<" Sorry, you failed ";
    break;

default:
    cout << "";
    break;
}





if("marks==A || marks==B || marks==C || marks==D"){
    cout << ", You are eligible for the next level. ";
}

else{
    cout<<", Please try again next time ";
}








}