#include <stdio.h>
#include <unistd.h>  // For fork(), getpid()
#include <sys/wait.h> // For wait() and waitpid()

int main() {
    // Create the first child process
    pid_t pid1 = fork();

    if (pid1 == 0) {
        // First child process
        printf("First child process: PID = %d\n", getpid());
        return 0;
    }
    
    // Create the second child process
    pid_t pid2 = fork();

    if (pid2 == 0) {
        // Second child process
        printf("Second child process: PID = %d\n", getpid());
        return 0;
    }

    // Parent waits for both child processes
    int status;
    
    // Wait for the first child process
    wait(&status);
    printf("First child exited with status: %d\n", WEXITSTATUS(status));

    // Wait for the second child process
    waitpid(pid2, &status, 0);
    printf("Second child exited with status: %d\n", WEXITSTATUS(status));

    return 0;
}

