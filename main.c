/*
 * Author: Ryan Llewellyn
 * Date: 07/08/2020
 * Program name: sleep120
 * Description: A Simple C program which does nothing for 2 hours, useful for getting idle power usage when used with perf
 */

// Include standard input and output
#include <stdio.h>

// Check program environment, windows or unix/linux and include appropriate library for sleep timer function
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

// Set time in seconds for program to sleep
#define SLEEPTIME 7079

// Main method, used in this instance to call the sleep function and pass number of seconds as argument
int main() {

    // Call sleep function and pass as integer the number of seconds to sleep for
    sleep(SLEEPTIME);

    // Program exit
    return 0;
}