#include<stdio.h>
#include<stdlib.h>

int main(void) {
  system("sudo reflector --age 2 --protocol https --latest 2 --sort rate --save /etc/pacman.d/mirrorlist");
}
