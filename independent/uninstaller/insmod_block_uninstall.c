#include <stdio.h>
#include <stdlib.h>
//Author @nu11secur1ty//

int main(void)
{
/* Changing the privileges for 'insmod' that user can not be using outside Linux Kernel Module */
 system("echo 'kernel.modules_disabled=0' >> /etc/sysctl.d/99-custom.conf");

 /* Block insmod Option by nu11secur1ty */
}
