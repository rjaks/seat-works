/*
=====HONOR CODE=====
Name: Adrian L. Reforsado
Subject: CSDC102 | Intermediate Programming
Section: ZC12Am
Type (Seatwork, Quiz, or Exam): Quiz
Date: February 26, 2024
Problem Title: Grim Reaper's List
Honor Code: 
I solemnly affirm that the code presented herein is a product of my own intellectual efforts and creativity. I have not copied, plagiarized, or utilized unauthorized resources in its development.
I am aware of the severe consequences of academic dishonesty both within the academic institution and in professional practice.
I commit to upholding the principles of integrity, honesty, and responsibility in all my programming endeavors, recognizing the importance of ethical conduct in the pursuit of knowledge and the advancement of the technology field.
=====PROBLEM SOLVING PROCESS=====
1. What is asked? 
    -> A soul's type and their karma points.
2. What is the input format? 
    -> Soul Name, Soul Type, Soul Karma Points
3. What is the expected output format?
    -> Soul Name: Soul Type (Soul Karma Points)
       Grim Reaper's Custom Message
       Soul Name: Soul Type (Soul Karma Points)
4. What are the problem's constraints?
    -> Use C++
    -> soulAssessment should contain all of Grim Reaper's functionalities.
    -> Use pass-by-reference when changing the soul's type and karma points.
    -> If the soul type and the soul karma points do not meet the established constraints:
    The Grim Reaper will condemn the soul as a demon with -1 karma point.
        He will chant:
        "<SOUL_NAME>, repent and rot in the underworld!"
5. Which data structure and algorithm can we use?
    -> Functions
    -> Pass-by-references
    -> Conditional Statements
    -> While Loop (for the input)
6. Write the algorithm's pseudocode.
    1. Start
    2. Input Soul Name, Soul Type, and Soul Karma Points
    3. Evaluate if the inputs fit within the constraints
        -> If the soul karma is less than 0 or greater than 100, the soul type will become a demon and the karma will be changed to -1.
        -> If the soul type is not among the given types, the soul will be considered a demon and the karma will be changed to -1.
        Note: The grim reaper will chant a message (seen above ^).
    4. Check if the soul type is a goblin
        -> If so, the soul is reincarnated as a goblin again and the karma will return back to 0.
        Note: The grim reaper will chant: "Goblin, my friend, we have a long life to live. Reincarnate as a goblin again in your next life!"
    5. If the soul type is not a goblin, check the karma points of the soul to evaluate the soul type for reincarnation.
        -> If the soul's karma points are at least 0 and at most 20, the soul will become a rock.
        -> If the soul's karma points are at least 21 and at most 40, the soul will become a plant.
        -> If the soul's karma points are at least 41 and at most 60, the soul will become a beast.
        -> If the soul's karma points are at least 61 and at most 80, the soul will become a human.
        -> If the soul's karma points are at least 81 and at most 100, the soul will become a demi-human.
        Note: The grim reaper will chant: "<SOUL_NAME>, you are a <SOUL_TYPE> in your next life!"
    6. Output the Soul Name, the Soul Type after reincarnation, and the final karma point.
    7. End
*/

#include<iostream>
using namespace std;

void soulAssessment(string& name, string& type, int& karma){
		if (type == "rock" || type == "plant" || type == "beast" || type == "human" || type == "demi-human" || type == "goblin"){
			cout << name << ": " << type << " (" << karma << ")\n";
			if (type == "goblin"){
				type = "goblin";
				cout << "Goblin, my friend, we have a long life to live. Reincarnate as a goblin again in your next life!\n";
				karma = 0;
			}
			else if (karma < 0 || karma > 100){
				cout << name << ", repent and rot in the underworld!" << endl;
				type = "demon";
				karma = -1;
			}
			else{
				if (karma >= 0 && karma <= 20){
				type = "rock";
				cout << name << ", you are a " << type << " in your next life!\n";
				}
				else if (karma >= 21 && karma <= 40){
				type = "plant";
				cout << name << ", you are a " << type << " in your next life!\n";
				}
				else if (karma >= 41 && karma <= 60){
				type = "beast";
				cout << name << ", you are a " << type << " in your next life!\n";
				}
				else if (karma >= 61 && karma <= 80){
				type = "human";
				cout << name << ", you are a " << type << " in your next life!\n";
				}
				else if (karma >= 81 && karma <= 100){
				type = "demi-human";
				cout << name << ", you are a " << type << " in your next life!\n";
				}
                karma = 0;
			}
		}
		else {
				cout << name << ", repent and rot in the underworld!" << endl;
				type = "demon";
				karma = -1;
		}
	}

int main(){
	string soulName, soulType;
	int karmaPoint;
	
	while (cin >> soulName >> soulType >> karmaPoint){
		soulAssessment(soulName, soulType, karmaPoint);
		cout << soulName << ": " << soulType << " (" << karmaPoint << ")\n";
	}
}