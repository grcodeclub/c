// gcc -o code code.c -lws2_32
#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>

#pragma comment(lib, *ws2_32.lib*)

int main(){
    WSADATA wsaData;
    char hostname[256];
    struct hostent *host_entry;

    if (WSAStartup(MAKEWORD(2,2),&wsaData)!=0){
        printf("WSAStartup failed!");
        return 1;
    }
    
    if (gethostname(hostname,sizeof(hostname))== 0 &&
    (host_entry = gethostbyname(hostname))!= NULL){
        printf("Host IP: %s",inet_ntoa(*(struct in_addr*)host_entry -> h_addr_list[0]));
    }else {
        printf ("Error");
    }

    WSACleanup();
    return 0;
}
