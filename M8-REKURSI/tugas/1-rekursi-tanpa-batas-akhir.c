#include <stdio.h>

void tidak_Berhenti();

int main(int argc, char const *argv[])
{
     tidak_Berhenti();
}

void tidak_Berhenti()
{
     printf("Ctrl-Break untuk berhenti\n");
     tidak_Berhenti();
}