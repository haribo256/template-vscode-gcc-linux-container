#include <iostream>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

using namespace std;

void* thread_proc(void* s) {
    cout << "Thread has fired\n";
    pthread_exit(NULL);
}

int main() {
    // Output a simple piece of text.
    auto helloWorldNumber = 7;
    cout << "Hello Worgggggggggggggkljkljld " << helloWorldNumber << "\n";

    // Create and run a thread.
    pthread_t t1;
    pthread_create(&t1, NULL, thread_proc, NULL);
    usleep(1000);

    // Adk the user for a line.
    string line;
    getline(cin, line);
    printf("%s\n", line.c_str());
    
    return 0;
}