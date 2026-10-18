#ifndef PROCESS_MANAGER_H
#define PROCESS_MANAGER_H

#include "Process.h"
#include "PCB.h"
#include <vector>
using namespace std;

class ProcessManager {
private:
    vector<Process> processes;
    vector<PCB> pcbs;

public:
    void createProcess(int pid, string name, int arrivalTime,
                       int burstTime, int priority);

    void terminateProcess(int pid);

    void changeState(int pid, string newState);

    Process* findProcess(int pid);

    vector<Process>& getProcesses();

    void displayProcesses() const;
    void displayPCBs() const;
};

#endif