#include <windows.h>
#include <stdio.h>

int main() {
    //Αλλαγή της κωδικοποίησης σε 1253 ("Windows-1253" ή "Greek Windows")
    //system("chcp 1253");
    //Αλλαγή της κωδικοποίησης σε UTF-8
    system("chcp 65001");
    OSVERSIONINFO osvi;
    ZeroMemory(&osvi, sizeof(OSVERSIONINFO));
    osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);

    if (GetVersionEx(&osvi)) {
        printf("Έκδοση λειτουργικού συστήματος: %d.%d.%d\n",
            osvi.dwMajorVersion, osvi.dwMinorVersion, osvi.dwBuildNumber);
    }

    return 0;
}
