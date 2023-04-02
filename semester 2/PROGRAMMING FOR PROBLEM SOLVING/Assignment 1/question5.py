#Module os
#OS routines for NT or Posix depending on what system we're on.
#Python method listdir() returns a list containing the names of the entries in the directory given by path. The list is in arbitrary order.
# It does not include the special entries '.' and '..' even if they are present in the directory.

import os
print(os.listdir())