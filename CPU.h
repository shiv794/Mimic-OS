
#ifndef CPU_H
#define CPU_H

#include "Process.h"
#include <string>

using namespace std;

class CPU {
private:
    Process* currentProcess;
    bool busy;

    int lastProcessID;
    string lastProcessName;
    string lastActivity;

public:
    CPU();

    void executeProcess(Process* process);
    void stopProcess();

    bool isBusy() const;
    void displayStatus() const;
};

#endif
