#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>  // For wait()
#include <stdlib.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        printf("Child process (PID = %d) is running...\n", getpid());
        sleep(2);  // Simulate some work in the child process
        printf("Child process (PID = %d) is exiting...\n", getpid());
        exit(0);
    } else if (pid > 0) {
        // Parent process
        printf("Parent process (PID = %d) is running...\n", getpid());

        // Wait for the child process to finish
        wait(NULL);  // Wait for any child process to finish
        printf("Parent waited for the child, no zombie process.\n");
    }

    return 0;
}

