#ifndef CPU_H
#define CPU_H

#include "Process.h"

class CPU {
private:
    Process* currentProcess;
    bool busy;

public:
    CPU();

    void executeProcess(Process* process);
    void stopProcess();

    bool isBusy() const;
    void displayStatus() const;
};

#endif