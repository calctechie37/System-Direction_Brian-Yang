#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>

int main() {
  DIR *current_dir = opendir(".");
  if (!current_dir) {
    printf("Error #%d: %s", errno, strerror(errno));
  }
  
  struct dirent* dir_info;
  while ( (dir_info = readdir(current_dir)) ) {
    printf("File name: %s\n", dir_info->d_name);
    free(dir_info);
    dir_info = NULL;
  }
  if (!dir_info) {
    printf("Error #%d: %s", errno, strerror(errno));
  }  

  closedir(current_dir);
  return 0;
}
