/* 
 * File:   count.cpp
 * Author: Savannah Buter
 *
 * Created on October 18, 2012, 4:12 PM
 */

#include <cstdlib> 	// → These are pre-compiler directives. The tell the computer 
#include <iostream>	     // what libraries to include for C++. 
using namespace std;

/*
 * This is called the program entry point and is a function which executes
 * when you run the program.
 * Our first steps are to declare and initialize some variables which you will see
 * on line 19
 */
int main(int argc, char** argv) {
  int number, total = 0; //Initialize to zero to avoid garbage data already in memory

  /*
   * cout statments stand for console output and will display whatever is within the quotes "" after the
   * output stream operator <<
   */
  cout << "This program will calculate a sum of numbers between 1 and any positive number you enter \n";
  cout << "Please enter a positive integer: ";
  /*
   * cin (pronounced c-in) stands for console input these statements store the 
   * input from the user into the variable after the input stream operator >>
   */
  cin >> number; //Gathers user input and assigns to number
  if (number > 0) // if statement, used for data validation in this case. Assures that input is greater than 0

    /*     
     * for loop -- good for a known number of iterations - a count controlled loop
     * 
     * must have three things:
     *	1. initialize a counter
     *	2. compare the counter to the max value
     *	3. update the counter after each iteration.
     *
     * for (initialization; test; update) {
     *	statement;
     *	statement;
     *	statement;
     */
    // loop from 1 to <= number increment by 1
    for (int count = 1; count <= number; count++) {
      // total below is the accumulator
      total += count; //equivalent to total = total + count
      // the inverse of above total -= count with would be equivalent to total = total - count
    }

  /*
   * while loop -- good for an unknown number of iterations - a condition controlled loop
   * 
   * must have a conditional statement that can be false at some point
   *
   * pattern: while (condition){
   *  statements that can invalidate the above condition
   * }
   * Use caution with while loops it is very easy to enter into an infinite loop
   */
  // look while cond == true
  boolean cond = true;
  sum = 0;
  // cond starts as true
  while (cond){
    // accumulates sum by adding 1 to it
    sum += 1;
    if (sum > 100){
      // at this point cond will be false after the loop has iterated 100 times
      cond = false;
    }
  }
  //Statemts like a trying or a variable are seperates during output by the output stream operator <<
  cout << "The sum of numbers between 1 and " << number << " equals " << total;
  return 0;
}

