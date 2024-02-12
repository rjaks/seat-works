/*
=====HONOR CODE=====
Name: Adrian L. Reforsado
Subject: CSDC102 - Intermediate Programming
Section: ZC12Am
Type (Seatwork, Quiz, or Exam): Seatwork
Date: 2/12/2024
Problem Title: Gojo-sensei's Classroom
Honor Code: I solemnly affirm that the code presented herein is a product of my own intellectual efforts and creativity. I have not copied, plagiarized, or utilized unauthorized resources in its development. I am aware of the severe consequences of academic dishonesty both within the academic institution and in professional practice. I commit to upholding the principles of integrity, honesty, and responsibility in all my programming endeavors, recognizing the importance of ethical conduct in the pursuit of knowledge and the advancement of the technology field.  
=====PROBLEM SOLVING PROCESS=====
1. What is asked? A name of a student.
2. What is the input format? A list of strings
3. What is the expected output format? A list of strings
4. What are the problem's constraints? Arrays and C++ must be used.
5. Which data structure and algorithm can we use? Array and Divide-and-Conquer Algorithm.
6. Write the algorithm's pseudocode. 
    - Start
    -- Initialize class list
    -- Input name
    -- Check if name inputted is included in classlist
    --- If no, terminate program
    --- If yes, continue execution
    -- Identify if name inputted is cursed
    --- If yes, output "Infinite Void"
    --- If not, output name 
    - End
*/


#include<iostream>
#include<cstring>
using namespace std;

bool inArray(string A[3][3], string b){
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if (b == A[i][j]) return true;
        }
    }
    return false;
}

int main(){
    string name;
    string classroom[3][3] = {{"Panda", "Sukuna", "Maki",}, {"Megumi", "Nobara", "Todo"},  {"Geto", "Itadori", "Yuta"}};
    
    cin >> name;

    if(inArray(classroom, name) == false)
        cout << "INVALID: Student not included in class list." << endl;
    else {
        if (name == "Sukuna" || name == "Geto" || name == "Jogo" || name == "Hanami" || name == "Mahito")
            cout << "Infinite Void";
        else cout << name;
    }
    return 0;
}