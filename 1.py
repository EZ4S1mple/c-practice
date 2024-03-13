import os

content = """#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stddef.h>


int main(
  int argc, 
  char *argv[]) 
{

    return 0;
}"""

# Create 100 folders
for i in range(9, 101):
    folder_name = f"{i}"
    os.makedirs(folder_name, exist_ok=True)

    # Create and write to C file
    file_name = f"{folder_name}/{i}.c"
    with open(file_name, "w") as file:
        file.write(content)

print("Folders and files created successfully.")
