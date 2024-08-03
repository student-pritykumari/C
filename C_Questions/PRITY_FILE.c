#include <stdio.h>
#include<conio.h>
void main()
{
    FILE*p, *p1; // pointer to a file
    char ch;
    int vo=0, con=0;
    p= fopen("PRITY_FILE.C","r."); // will return base address // file has open

    while(!feof(p)); // unless not end
    {
        ch=getc(p); // read from opened file character by character
        printf("%c",ch);// to print on console
    }

        rewind(p); // will set the file pointer at the beginning of file


        puts("2nd file related work starts");
        p1= fopen("PRITY_CP2.C","w."); //2nd file is open for copy
        while(!feof(p)) //1st file open unless not end
        {
            ch=getc(p); // read from opened file character by character
            putc(ch,p1); //it will write in a opened file character wise
        }
        rewind(p1);//to reach at beginning of 2nd file
        puts("how many vowel and consonent are in 2nd file ");
        while(!feof(p1)) //2nd file open unless not end
        {
            ch=getc(p1) ; //read from opened file character by character
            
        {if (ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u') //count vowel
        vo++;
        else if(ch!=0)
        con++;
        }
           }
        printf("%d\t is total number of vowel %d\t is total no of consonant");
        
        fclose(p); //will close file
        fclose(p); // close 2nd file
        getch();
}