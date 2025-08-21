#include <windows.h>
#include <lmcons.h>
#include <shlobj.h>
#include <stdio.h>

int main() {
    system("chcp 65001");

    char username[UNLEN + 1];
    DWORD size = UNLEN + 1;
    GetUserName(username, &size);
    printf("Πληροφορίες χρήστη\n");
    printf("Όνομα χρήστη: %s\n", username);

    char userDir[MAX_PATH];
    if (SUCCEEDED(SHGetFolderPathA(NULL, CSIDL_PROFILE, NULL, 0, userDir))) {
        printf("Κατάλογος αρχείων χρήστη: %s\n", userDir);
    } else {
        printf("Δεν ήταν δυνατή η λήψη του καταλόγου αρχείων χρήστη.\n");
    }

    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD computerNameSize = sizeof(computerName) / sizeof(computerName[0]);
    if (GetComputerName(computerName, &computerNameSize)) {
        printf("Όνομα υπολογιστή: %s\n", computerName);
    } else {
        printf("Δεν ήταν δυνατή η λήψη του ονόματος υπολογιστή.\n");
    }

    return 0;
}
