# include <stdio.h>
# include <math.h>

int main()
{
    int i,j,a[5],b[5][5],s[5][5],m[5][5],r1,c1,r2,c2;
    puts("\t\tMatrix Multiplication");

    //Taking matrix

    puts("Enter number of row and columns of two matrix within 5: ");
    scanf("%d%d", &r1,&c1);
    scanf("%d%d",&r2,&c2);

    if(r1==r2 && c1==c2){
        printf("Enter %d elements for matrix 1: ",(r1*c1));
        //taking values
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
        }

        printf("Enter %d elements for matrix 2: ",(r2*c2));
        //taking values
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
        }

        //Displaying matrix

        printf("Matrix u have taken are :\n");
        puts("Matrix 1 :");
        {for(j=0;j<c1;j++)
        {printf("%d\t",a[i][j]);}
        puts("\n");
        }

        puts("Matrix 2 :");
    }

    

}