/*
=====HONOR CODE=====
Name: Adrian L. Reforsado
Subject: CSDC102 | Intermediate Programming
Section: ZC12Am
Type (Seatwork, Quiz, or Exam): Seatwork
Date: February 21, 2024
Problem Title: Baymax Super Anti-Fever Spray
Honor Code:
I solemnly affirm that the code presented herein is a product of my own intellectual efforts and creativity. I have not copied, plagiarized, or utilized unauthorized resources in its development.
I am aware of the severe consequences of academic dishonesty both within the academic institution and in professional practice.
I commit to upholding the principles of integrity, honesty, and responsibility in all my programming endeavors, recognizing the importance of ethical conduct in the pursuit of knowledge and the advancement of the technology field.
=====PROBLEM SOLVING PROCESS=====
1. What is asked? 
    - Patient Name and Patient Temperature
2. What is the input format? 
    - Patient_Name Patient_Temperature
3. What is the expected output format
    - Patient Name: Patient Temperature
      Baymax's Custom Message
      Patient Name: Patient Temperature
4. What are the problem's constraints?
    - Use C++
    - baymaxAntiFeverCure should contain all of Baymax's functionalities.
    - Use pass-by-reference when changing the patient's temperature.
5. Which data structure and algorithm can we use?
    - Pass-by-reference
    - Conditional "if" statements
    - Functions
6. Write the algorithm's pseudocode.
    - Input patient name and patient temperature.
    - Check if the patient recedes or exceeds the normal range of temperature (36.1 - 37.2).
    -- If yes, change the patient's temperature to 37 degrees and send a custom message from baymax.
    -- If no, display a custom message from baymax while not changing anything.
    - Display the patient's name and their final temperature.
*/

#include<iostream>
using namespace std;

void baymaxAntiFeverCure(string patientName, double& patientTemp){
    if (patientName == "Hiro") patientTemp = 37.2;
    else if (patientTemp >= 36.1 && patientTemp <=37.2) cout << "You're not sick, " << patientName << ". Have a candy.\n";
    else{
        cout << patientName << ": " << patientTemp << " degrees Celsius\nApplying anti-fever spray... \n";
        patientTemp = 37;
        cout << "You're okay now, " << patientName << ". Ba-la-la-la\n";
    }
}

int main(){
    string patientName;
    double patientTemp;

    while(cin >> patientName >> patientTemp){
        baymaxAntiFeverCure(patientName, patientTemp);
        cout << patientName << ": " << patientTemp << " degrees Celsius" << endl;
    }
}