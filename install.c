#include<stdio.h>
#include<stdlib.h>

int main(void) {
  printf("Installing archfastdl, requires sudo to copy to /usr/local/bin");
  system("make archfastdl");
  system("sudo cp archfastdl /usr/local/bin/archfastdl");
  printf("archfastdl installed.");
}
