#include <windows.h>
#include <stdio.h>

int main() {
    //Αλλαγή της κωδικοποίησης σε 1253 ("Windows-1253" ή "Greek Windows")
    //system("chcp 1253");
    //Αλλαγή της κωδικοποίησης σε UTF-8
    system("chcp 65001");
    LANGID languageID = GetUserDefaultUILanguage();
    printf("Προεπιλεγμένη διεπαφή χρήστη για Language ID: 0x%X\n", languageID);

    return 0;
}
