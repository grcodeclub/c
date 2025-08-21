#include <stdio.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    //Αλλαγή της κωδικοποίησης σε 1253 ("Windows-1253" ή "Greek Windows")
    //system("chcp 1253");
    //Αλλαγή της κωδικοποίησης σε UTF-8
    system("chcp 65001");
    
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);

    printf("Αρχιτεκτονική Επεξεργαστή: %lu\n", systemInfo.wProcessorArchitecture);
    printf("Τύπος Επεξεργαστή: %lu\n", systemInfo.dwProcessorType);
    printf("Συνολικός Αριθμός Επεξεργαστών: %lu\n", systemInfo.dwNumberOfProcessors);
    printf("Μάσκα Ενεργών Επεξεργαστών: %lu\n", systemInfo.dwActiveProcessorMask);

    printf("Page Size: %u\n", systemInfo.dwPageSize);
    printf("Minimum Application Address: %p\n", systemInfo.lpMinimumApplicationAddress);
    printf("Maximum Application Address: %p\n", systemInfo.lpMaximumApplicationAddress);
    printf("Allocation Granularity: %u\n", systemInfo.dwAllocationGranularity);


    MEMORYSTATUSEX memInfo;
    memInfo.dwLength = sizeof(MEMORYSTATUSEX);

    printf("Συνολική φυσική μνήμη: %lld bytes\n", memInfo.ullTotalPhys);
    printf("Διαθέσιμη φυσική μνήμη: %lld bytes\n", memInfo.ullAvailPhys);
    
    return 0;
}

