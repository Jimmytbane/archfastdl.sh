#include<stdio.h>
#include<stdlib.h>

int main(void) {
  printf("Installing archfastdl, requires sudo to copy to /usr/local/bin");
  fflush(stdout);
  system("make archfastdl");
  fflush(stdout);
  system("sudo cp archfastdl /usr/local/bin/archfastdl");
  fflush(stdout);
  printf("archfastdl installed.");
}
