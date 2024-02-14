/*
=====HONOR CODE=====
Name: Adrian L. Reforsado
Subject: CSDC102 - Intermediate Programming
Section: ZC12Am
Type (Seatwork, Quiz, or Exam): Quiz
Date: February 14, 2024
Problem Title: Lover's Game
Honor Code:
I solemnly affirm that the code presented herein is a product of my own intellectual efforts and creativity. I have not copied, plagiarized, or utilized unauthorized resources in its development.
I am aware of the severe consequences of academic dishonesty both within the academic institution and in professional practice.
I commit to upholding the principles of integrity, honesty, and responsibility in all my programming endeavors, recognizing the importance of ethical conduct in the pursuit of knowledge and the advancement of the technology field.
=====PROBLEM SOLVING PROCESS=====
1. What is asked? 
    - The Promo Types, Discount Price, and Final Price of every transaction ```c```.
2. What is the input format? 
    - The program receives ```c```. Per ```c```, it asks for ```n``` and processes the corresponding ```p``` of an item.
3. What is the expected output format? 
    - Per ```c```, the program prints the checkout cart. And it prints the promo types, total discount, and final price.
4. What are the problem's constraints? 
    - 0 < c <= 100
    - 0 < n <= 100
    - 5 <= p <= 300
5. Which data structure and algorithm can we use?
    - Conditional "if" Statements
    - Arrays
    - For Loop
6. Write the algorithm's pseudocode.
    - Start
    -- Initialize number of transactions ```c``` and quantity of items ```n```
    -- Input c
    -- For every c:
    --- Input n
    --- For every n:
    ---- Initialize the price list ```p``` of quantity of items ```n```
    ---- Input price for n amount of items
    --- Evaluate c's discount validity and final price
    ---- If n is even, 5% discount. Output promo type "A".
    ---- If p is greater than 99, additional 5% discount. Output promo type "B".
    ---- If p is greater than 500, additional 5% discount. Output promo type "C".
    ---- If none of the conditions is satisfied, no discount. Output promo type "Z".
    --- Calculate for total discount and deduct total discount from total price.
    --- Print transaction's promo type, discount price, and final price.
    - End
*/

#include<iostream>
#include<string>
using namespace std;

void DiscountPromo(int itemNo, double price[]){
    double discount, total, discountTotal;
    string promoCode;
    for (int i = 0; i < itemNo; i++){
        cout << price[i] << " ";
        total = total + price[i];
    }

    if (itemNo % 2 == 0) {
        promoCode = promoCode + "A";
        discount = 0.05;
    }
    if (total >= 100) {
        promoCode = promoCode + "B";
        discount = discount + 0.05;
    }
    if (total > 500) {
        promoCode = promoCode + "C";
        discount = discount + 0.05;
    }
    if (itemNo % 2 != 0 && total < 100) {
        promoCode = promoCode + "Z";
        discount = 0;
    }

    discountTotal = total * discount;

    total = total - discountTotal;

    cout << endl << promoCode << " " << discountTotal << " " << total << endl;

    return;
}

int main(){
    int c, n;
    cin >> c;
    if (c < 0 || c > 100) return 0;
    else{
        cout << "Valentine's Day Gift" << endl;
        for (int i = 0; i < c; i++){
            cin >> n;
            if (n < 0 || n > 100) return 0;
            else{
                double p[n];
                for (int i = 0; i < n; i++){
                    cin >> p[i];
                    if (p[i] < 5 || p[i] > 300) return 0;
                }
                DiscountPromo(n, p);
            }
        }
    }
}