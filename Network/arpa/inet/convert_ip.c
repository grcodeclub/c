#include <stdio.h>
#include <arpa/inet.h>

int main() {
    const char *ipAddressStr = "192.168.1.1";
    struct in_addr ipAddress;

    // Μετατροπή από ανθρώπινη ανάγνωση σε μορφή δικτύου
    if (inet_pton(AF_INET, ipAddressStr, &ipAddress) <= 0) {
        perror("inet_pton");
        return 1;
    }

    // Εκτύπωση της μορφής δικτύου
    printf("Network Address: %u\n", ipAddress.s_addr);

    // Μετατροπή από μορφή δικτύου σε ανθρώπινη ανάγνωση
    char ipAddressBuffer[INET_ADDRSTRLEN];
    const char *convertedIpAddressStr = inet_ntop(AF_INET, &ipAddress, ipAddressBuffer, INET_ADDRSTRLEN);

    if (convertedIpAddressStr == NULL) {
        perror("inet_ntop");
        return 1;
    }

    // Εκτύπωση της ανθρώπινης ανάγνωσης
    printf("Human-readable Address: %s\n", convertedIpAddressStr);

    return 0;
}
