//kernel.c test test
//testing some more

void kmain(void){
    const char *str = "Kernel goes wrooom";
    char *vidptr =(char*)0xb8000; //Video memory begins here
    unsigned int i = 0;
    unsigned int j = 0;

    while (j < 80 * 25 * 2)
    {
        vidptr[j] = ' ';
        vidptr[j+1] = 0x07;
        j = j + 2;
    }

    j = 0;
    
    while (str[j] != '\0')
    {
        vidptr[i] = str[j];
        vidptr[i+1] = 0x07;
        ++j;
        i = i + 2;
    }
    return;
}