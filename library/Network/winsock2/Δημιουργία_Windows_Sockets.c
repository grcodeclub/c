//gcc -o Δημιουργία_Socket Δημιουργία_Socket.c -lws2_32

#include <stdio.h>
#include <winsock2.h>

int main() {
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        fprintf(stderr, "WSAStartup failed.\n");
        return 1;
    }

    SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == INVALID_SOCKET) {
        fprintf(stderr, "Socket creation failed.\n");
        WSACleanup();
        return 1;
    }

    printf("Το socket δημιουργήθηκε με τιμή %d\n", clientSocket);


    closesocket(clientSocket);
    WSACleanup();

    return 0;
}
