// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 15, 2022
// This program prints different RGB color codes
// to the console using nested for loops.

# include <iostream>

int main() {
  int red = 0;
  int green = 0;
  int blue = 0;

  // display the opening message
  std::cout << "Here are RGB color variations up to 50:";
  std::cout <<std::endl;

  // determines the different color codes
  // displays results to the console
  for (blue=0; blue < 51; blue++) {
    std::cout << "RGB (" << red << ", " << green << ", " << blue << ")\n";
    if (blue == 50) {
      std::cout << std::endl;
      for (green=0; green < 51; green++) {
        blue = 0;
        std::cout << "RGB (" << red << ", " << green << ", " << blue << ")\n";
        if (green == 50) {
          std::cout << std::endl;
          for (red=0; red < 51; red++) {
            int newgreen = green * 0;
            std::cout << "RGB (" << red << ", " << newgreen << ", "
            << blue << ")\n";
          }
        }
      }
      break;
    }
  }
}

