//
//  main.cpp
//  Exam0531Date
//
//  Created by Jacob Yeung on 5/31/23.
//

#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <locale>

int main(int argc, const char * argv[]) {
    for(int i = 0; i < 12; i++){
        auto currentTime = std::chrono::system_clock::now();
            std::time_t time = std::chrono::system_clock::to_time_t(currentTime);

            // Convert the time to a struct tm
            std::tm* date = std::localtime(&time);
        
        date->tm_mon = i+1;
        date->tm_mday = 0;
        
        std::mktime(date);
        //std::strftime(char full[100], 100, "%Y-%m-%d", date);
        
        // Format and display the date
        printf("Month %d has %d days.\n", date->tm_mon +1, date->tm_mday);
//        std::cout << "Current date: "
//                  << std::put_time(date, "%Y-%m-%d")
//                  << std::endl;
    }
        
    return 0;
}
