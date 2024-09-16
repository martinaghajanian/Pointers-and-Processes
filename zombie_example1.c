#include <stdio.h>
#include <unistd.h>
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
        printf("Parent is not waiting for the child, observe the zombie state using ps or top.\n");

        // Sleep for a while so you can observe the child becoming a zombie
        sleep(10);  // Increase the sleep time if needed to observe zombie
    }

    return 0;
}

