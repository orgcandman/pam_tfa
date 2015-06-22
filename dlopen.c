#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

void pam_syslog (const void *pamh, int priority, const char *fmt, ...)
{
    return;
}

int main(int argc, char *argv[])
{
    void *lib;
    if( argc <= 1 )
    {
        printf("%s: %s filename\n", argv[0], argv[0]);
        return 1;
    }

    lib = dlopen(argv[1], RTLD_NOW);
    if(lib == NULL)
    {
        printf("unable to open: %s!\n", dlerror());
        return 1;
    }
    return 0;
}
