#include <windows.h>
#include <stdio.h>

int main() {
    //Αλλαγή της κωδικοποίησης σε 1253 ("Windows-1253" ή "Greek Windows")
    //system("chcp 1253");
    //Αλλαγή της κωδικοποίησης σε UTF-8
    system("chcp 65001");

    ULARGE_INTEGER freeSpace, totalSpace, totalFreeSpace;

    if (GetDiskFreeSpaceEx("C:", &freeSpace, &totalSpace, &totalFreeSpace)) {
            double freeSpaceGB = (double)freeSpace.QuadPart / 1073741824; //(1024 * 1024 * 1024 =1073741824 )
            printf("Ελεύθερος χώρος στο C: %.2f GB\n", freeSpaceGB);

    }

    return 0;
}
