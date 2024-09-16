#include <stdio.h>
#include <unistd.h>  // For fork() and getpid()
#include <sys/types.h>

int main() {
    // Step 1: Create a child process using fork()
    pid_t pid = fork();

    if (pid < 0) {
        // Error occurred during fork()
        printf("Fork failed!\n");
        return 1;
    }
    else if (pid == 0) {
        // Step 2: This is the child process
        printf("Child process: PID = %d\n", getpid());
    }
    else {
        // Step 3: This is the parent process
        printf("Parent process: PID = %d\n", getpid());
    }

    // Parent doesn't wait for the child to complete (no wait() here)

    return 0;
}

