#include <iostream>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

using namespace std;

void* thread_proc(void* s) {
    cout << "t1\n";
    cout << "t1\n";
    cout << "t1\n";
    cout << "t1\n";
    cout << "t1\n";
    cout << "t1\n";
    pthread_exit(NULL);
}

int main() {
    auto myvar = 5;

    cout << "Hello World " << myvar << "\n";


    pthread_t t1;

    pthread_create(&t1, NULL, thread_proc, NULL);

    usleep(1000);

    string line;

    getline(cin, line);

    // cout << line << "\n";
    printf("%s\n", line.c_str());
    
    return 0;
}