def archfastdl():
  import os

  """ This module makes using reflector as simple as using a single command on Arch GNU/Linux """

  os.system("sudo reflector --age 2 --protocol https --latest 2 --sort rate --save /etc/pacman.d/mirrorlist")

archfastdl = archfastdl()