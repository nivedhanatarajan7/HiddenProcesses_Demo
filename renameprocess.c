#include <sys/prctl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    prctl(PR_SET_NAME, (unsigned long)"hidden process", 0, 0, 0);
    // ... rest of your program
    system(argv[1]);
    sleep(100);
    return 0;
}
