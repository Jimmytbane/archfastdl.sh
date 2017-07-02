#include<stdio.h>
#include<stdlib.h>

int main() {
  system("sudo reflector --age 1 --protocol https --verbose --latest 2 --sort rate --save /etc/pacman.d/mirrorlist");
  return 0;
}
