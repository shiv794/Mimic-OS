#include "CPU.h"
#include <iostream>
using namespace std;

CPU::CPU() {
    currentProcess = nullptr;
    busy = false;
}

void CPU::executeProcess(Process* process) {

    if (process == nullptr)
        return;

    currentProcess = process;
    busy = true;

    process->setState("Running");

    cout << "\nCPU is executing Process P"
         << process->getPID() << endl;
}

void CPU::stopProcess() {

    if (currentProcess != nullptr) {

        cout << "CPU finished Process P"
             << currentProcess->getPID() << endl;

        currentProcess->setState("Terminated");
    }

    currentProcess = nullptr;
    busy = false;
}

bool CPU::isBusy() const {
    return busy;
}

void CPU::displayStatus() const {

    cout << "\nCPU STATUS \n";

    if (busy) {
        cout << "CPU Status: BUSY\n";
        cout << "Running Process: P"
             << currentProcess->getPID() << endl;
    }
    else {
        cout << "CPU Status: IDLE\n";
    }

    cout << "\n";
}