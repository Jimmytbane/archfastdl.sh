#!/usr/bin/sh
sudo reflector --country 'United States' --age 2 --protocol https --verbose --latest 2 --sort rate --save /etc/pacman.d/mirrorlist