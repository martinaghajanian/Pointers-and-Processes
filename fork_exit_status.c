#include <stdio.h>
#include <unistd.h>  // For fork(), getpid()
#include <sys/wait.h> // For waitpid()
#include <stdlib.h>   // For exit()

int main() {
    // Create the first child process
    pid_t pid1 = fork();

    if (pid1 == 0) {
        // First child process
        printf("First child process: PID = %d\n", getpid());
        exit(0);  // Exit with status 0 (success)
    }

    // Create the second child process
    pid_t pid2 = fork();

    if (pid2 == 0) {
        // Second child process
        printf("Second child process: PID = %d\n", getpid());
        exit(1);  // Exit with status 1 (error)
    }

    // Parent process waits for both child processes and checks their exit status
    int status;
    pid_t wpid;

    // Wait for the first child
    wpid = waitpid(pid1, &status, 0);
    if (WIFEXITED(status)) {
        printf("First child (PID = %d) exited with status: %d\n", wpid, WEXITSTATUS(status));
    } else {
        printf("First child (PID = %d) did not exit normally\n", wpid);
    }

    // Wait for the second child
    wpid = waitpid(pid2, &status, 0);
    if (WIFEXITED(status)) {
        printf("Second child (PID = %d) exited with status: %d\n", wpid, WEXITSTATUS(status));
    } else {
        printf("Second child (PID = %d) did not exit normally\n", wpid);
    }

    return 0;
}

