#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>

int main() {
  DIR *current_dir = opendir(".")
  if (!current_dir) {
    printf("Error #%d: %s", errno, strerror(errno));
  }
  
  struct stat metadata;

  closedir(current_dir);
  return 0;
}
