

  #include <stdio.h>
  #define ROW 10
  #define COL 10

  int main() {
        int i, j, k, n, min, max, matrix[ROW][COL], pos[2][2],a,b,matrix2[ROW][COL],c,p,q,r;

        /* get the order of the matrix from the user */
        printf("Enter the order of the matrix:");
        scanf("%d", &n);

        /* get the entries for the input matrix from the user  */
        printf("Enter your entries for the input matrix:\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        scanf("%d", &matrix[i][j]);
                }
        }

        /* find the saddle points in the given matrix */
        for (i = 0; i < n; i++) 
        {
                min = matrix[i][0];
                for (j = 0; j < n; j++) 
                {
                        if (min >= matrix[i][j])
                         {
                                min = matrix[i][j];
                                pos[0][0] = i;
                                pos[0][1] = j;
                        }
                }

                j = pos[0][1];
                max = matrix[0][j];
                for (k = 0; k < n; k++) 
                {
                        if (max <= matrix[k][j])
                         {
                                max = matrix[i][j];
                                pos[1][0] = k;
                                pos[1][1] = j;
                        }
                }

                /* saddle point - minimum of a row and maximum of the column */
                if (min == max) 
                {
                        if (pos[0][0] == pos[1][0] &&
                                pos[0][1] == pos[1][1]) 
                        {
                                printf("Saddle point (%d, %d) : %d\n",
                                                pos[0][0], pos[0][1], max);
                        }
                }
        }
           
            printf("\nThe lower diagonal elements of the matrix is\n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            if(i>j)
                printf("%d\t",matrix[i][j]);
        }
    }
    printf("\nThe upper diagonal elements of the matrix is\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            if(i<j)
                printf("%d\t",matrix[i][j]);
            else
                printf(" \t");

        }
    }
    printf("\n");

        printf("Enter the numbers of two rows to be exchanged \n");

    scanf("%d %d", &a, &b);

    for (i = 0; i < n; ++i)

    {

        /*  first row has index is 0 */

        c = matrix[a - 1][i];

        matrix[a - 1][i] = matrix[b - 1][i];

        matrix[b - 1][i] = c;

    }

    printf("Enter the numbers of two columns to be exchanged \n");

    scanf("%d %d", &p, &q);

    printf("The given matrix is \n");

    for (i = 0; i < n; ++i)

    {

        for (j = 0; j < n; ++j)

            printf(" %d", matrix2[i][j]);

        printf("\n");

    }

    for (i = 0; i < n; ++i)

    {

        /*  first column index is 0 */

        r = matrix2[i][p - 1];

        matrix2[i][p - 1] = matrix2[i][q - 1];

        matrix2[i][q - 1] = r;

     }

    printf("The matix after interchanging the two rows(in the original matrix) \n");

    for (i = 0; i < n; ++i)

    {

        for (j = 0; j < n; ++j)

        {

            printf(" %d", matrix2[i][j]);

        }

        printf("\n");

     }

    printf("The matix after interchanging the two columns(in the original matrix) \n");

    for (i = 0; i < n; ++i)

    {

        for (j = 0; j < n; ++j)

            printf(" %d", matrix2
                [i][j]);

        printf("\n");

    }
  }
