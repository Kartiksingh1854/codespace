// #include <stdio.h>
// int main()
// {
//     printf("Name: Kartik Singh\n");
//     printf("Roll no.: 09\n");
//     printf("Section: N\n");
//     int n, sumeven = 0, sumodd = 0;
//     printf("Enter length of array");
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int j = 0; j < n; j++)
//     {
//         if (a[j] % 2 == 0)
//             sumeven = sumeven + a[j];
//         else
//             sumodd = sumodd + a[j];
//     }
//     printf("Sum of even no. =%d\n", sumeven);
//     printf("Sum of odd no. = %d", sumodd);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     printf("Name: Kartik Singh\n");
//     printf("Roll no.: 09\n");
//     printf("Section: N\n");
//     int n, e;
//     printf("Enter length of array");
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the element to be searched:-");
//     scanf("%d", &e);
//     for (int j = 0; j < n; j++)
//     {
//         if (a[j] == e)
//         {
//             printf("Element present");
//             break;
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("Name: Kartik Singh\n");
//     printf("Roll no.: 09\n");
//     printf("Section: N\n");
//     int n, sum = 0, e;
//     printf("Enter length of array");
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the element to be counted:-");
//     scanf("%d", &e);
//     for (int j = 0; j < n; j++)
//     {
//         if (a[j] == e)
//         {
//             sum = sum + 1;
//         }
//     }
//     printf("Frequency of element =%d", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("Name: Kartik Singh\n");
//     printf("Roll no.: 09\n");
//     printf("Section: N\n");
//     int n, max, min, e;
//     printf("Enter length of array");
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     min = max = a[0];
//     for (int j = 0; j < n; j++)
//     {
//         if (max < a[j])
//         {
//             max = a[j];
//         }
//         if (min > a[j])
//         {
//             min = a[j];
//         }
//     }
//     printf("Biggest number=%d\n", max);
//     printf("Smallest number=%d", min);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     printf("Name: Kartik Singh\n");
//     printf("Roll no.: 09\n");
//     printf("Section: N\n");
//     int n, t;
//     printf("Enter length of array");
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int p = 0; p < n; p++)
//     {
//         for (int j = 0; j < n - p; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 t = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = t;
//             }
//         }
//     }
//     for (int c = 0; c < n; c++)
//     {
//         printf("%d", a[c]);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("Name: Kartik Singh\n");
//     printf("Roll no.: 09\n");
//     printf("Section: N\n");
//     int n, x = 0, y = 0, z = 0, k;
//     printf("Enter length of array");
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the value of k=");
//     scanf("%d", &k);
//     for (int j = 0; j < n; j++)
//     {
//         if (a[j] > k)
//         {
//             x++;
//         }
//         if (a[j] < k)
//         {
//             y++;
//         }

//         if (a[j] == k)
//         {
//             z++;
//         }
//     }
//     printf("No. of element less than k=%d\n", y);
//     printf("No. of element greater than k=%d\n", x);
//     printf("No. of element equal to k=%d\n", z);
//     return 0;
// }
// Name: Kartik Singh
// Roll no.: 09
// Section: N
// Enter length of array5
// 6
// 5
// 4
// 2
// 8
// Enter the value of k=5
// No. of element less than k=2
// No. of element greater than k=2
// No. of element equal to k=1

// Name: Kartik Singh
// Roll no.: 09
// Section: N
// Enter length of array5
// 5
// 8
// 6
// 4
// 2
// 24568

// Name: Kartik Singh
// Roll no.: 09
// Section: N
// Enter length of array5
// 2
// 3
// 9
// 8
// 0
// 08932

// Name: Kartik Singh
// Roll no.: 09
// Section: N
// Enter length of array5
// 2
// 4
// 9
// 0
// 1
// Biggest number=9
// Smallest number=0

// Name: Kartik Singh
// Roll no.: 09
// Section: N
// Enter length of array5
// 2
// 4
// 9
// 0
// 1
// Biggest number=9
// Smallest number=0

// Name: Kartik Singh
// Roll no.: 09
// Section: N
// Enter length of array5
// 3
// 2
// 2
// 2
// 6
// Enter the element to be counted:-2
// Frequency of element =3

// Name: Kartik Singh
// Roll no.: 09
// Section: N
// Enter length of array5
// 3
// 6
// 8
// 5
// 9
// Enter the element to be searched:-3
// Element present

// Name: Kartik Singh
// Roll no.: 09
// Section: N
// Enter length of array5
// 3
// 6
// 1
// 2
// 4
// Sum of even no. =12
// Sum of odd no. = 4

// Name: Kartik Singh
// Roll no.: 09
// Section: N
// Enter length of array5
// 3
// 6
// 9
// 2
// 54
// sum=74

// #include <stdio.h>
// int main()
// {
//     printf("Name: Vinayak Sharma\n");
//     printf("Roll no.: 25\n");
//     printf("Section: N\n");
//     int n, i;
//     scanf("%d", &n);
//     int x[n], y[n], z[n];
//     printf("array 1\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &x[i]);
//     }
//     printf("array 2 \n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &y[i]);
//     }
//     printf("sum of array:\n");
//     for (i = 0; i < n; i++)
//     {
//         z[i] = x[i] + y[i];
//         printf("%d\n", z[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     printf("Name: Vinayak Sharma\n");
//     printf("Roll no.: 25\n");
//     printf("Section: N\n");
//     int n, max, min, i, k, x, p, q, r, s;
//     scanf("%d", &n);
//     int a[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("position to be replaced in array:");
//     scanf("%d", &p);
//     printf("value for first, last and %dth element:", p);
//     scanf("%d %d %d", &q, &r, &s);
//     int ar[n + 3];
//     i = 0;
//     for (int j = 0; j < n + 1; j++)
//     {
//         ar[j] = a[i];
//         i++;
//     }

//     for (i = p - 1; i < n + 3; i++)
//     {
//         ar[i + 2] = a[i];
//     }

//     ar[0] = q;
//     ar[n + 2] = r;
//     ar[p] = s;
//     for (i = 0; i < n + 3; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     printf("Name: Vinayak Sharma\n");
//     printf("Roll no.: 25\n");
//     printf("Section: N\n");
//     int n, m, l, i, j, k, x;
//     printf("Enter the sizes of arrays");
//     scanf("%d %d", &n, &m);
//     l = m + n;
//     int a[n], b[m], c[l];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     printf("\n");
//     for (i = 0; i < n; i++)
//     {
//         c[i] = a[i];
//     }
//     for (j = 0; j < m; j++)
//     {
//         c[n + j] = a[j];
//     }
//     for (j = 0; j < l; j++)
//     {
//         for (k = 0; k < l; k++)
//         {
//             if (c[k] > c[k + 1])
//             {
//                 x = c[k];
//                 c[k] = c[k + 1];
//                 c[k + 1] = x;
//             }
//         }
//     }
//     for (i = 0; i < l; i++)
//     {
//         printf("%d", c[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     printf("Name: Vinayak Sharma\n");
//     printf("Roll no.: 25\n");
//     printf("Section: N\n");
//     int n, i, j, k, x;
//     printf("Enter the size of array:");
//     scanf("%d", &n);
//     int a[n], b[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (j = 0; j < n; j++)
//     {
//         for (k = 0; k < n - j - 1; k++)
//         {
//             if (a[k] > a[k + 1])
//             {
//                 x = a[k];
//                 a[k] = a[k + 1];
//                 a[k + 1] = x;
//             }
//         }
//     }
//     j = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (a[i] != a[i + 1])
//         {
//             b[j] = a[i];
//             j++;
//         }
//     }
//     for (i = 0; i < j; i++)
//     {
//         printf("%d", b[i]);
//     }
//     return 0;
// }
// Name: Vinayak Sharma
// Roll no.: 25
// Section: N
// 5
// array 1
// 2
// 3
// 5
// 4
// 6
// array 2
// 3
// 5
// 1
// 6
// 2
// sum of array:
// 5
// 8
// 6
// 10
// 8
// Name: Vinayak Sharma
// Roll no.: 25
// Section: N
// 4
// 5
// 6
// 2
// 5
// position to be replaced in array:3
// value for first, last and 3th element:1
// 1
// 1
// 1
// 6
// 2
// 1
// 2
// 5
// 1
// Name : Vinayak Sharma
//    Roll no. : 25 Section : N
//                                Enter the sizes of arrays5 4 2 3 6 5 2

//                            5 5 5 4 4

//                            222335566
// Name: Vinayak Sharma
// Roll no.: 25
// Section: N
// Enter the size of array:5
// 2
// 1
// 1
// 4
// 1
// 124

// #include <stdio.h>
// int main()
// {
//         char a='b';
//     switch(a)
//     {
//         default:
//         printf("wrong choice");
//         case "a":
//         printf("alphabet a ");
//         case "b":
//         printf("Alphabet b ");
//         case "c":
//         printf("Alphabet c ");
//     }

// return 0;
// }

// #include <stdio.h>
// int main()
// {
//         int i;
//         for(i=1;i<5;i++);
//         {
//        printf("%d",i);
//         }
// }

// #include <stdio.h>
//      int main()
//      {
//             int i = 0;
//             while (i < 3)
//             i++;
//             printf("In while loop\n");
//      }

//  #include <stdio.h>
//     int main()
//     {
//         float f = 0.1;
//         if (f == 0.1)
//         printf("True");
//         else
//         printf("False");
//      }

// #include <stdio.h>
//      void main()
//      {
//           int x = 25+8>15/2?10:20;
// printf("%d",x) ;
//      }

//  #include <stdio.h>
//     void main()
//     {
//         int x = 5;
//         if (x < 1);
//             printf("Hello");

//     }

// #include <stdio.h>
//     void main()
//     {
//         int ch;
//         printf("enter a value between 1 to 2:");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//            case 1:
//               printf("1 ");
//            default:
//               printf("2");
//         }
//     }

// #include <stdio.h>
// void main()
// {
//     int ch;
//     printf("enter a value between 1 to 2:");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//        case 1:
//           printf("1\n");
//           break;
//           printf("Hi");
//        default:
//           printf("2\n");
//     }
// }
//   #include <stdio.h>
//     void main()
//     {
//         int ch;
//         printf("enter a value between 1 to 2:");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//            case 1:
//               printf("1\n");
//               break;
//               printf("Hi");
//            default:
//               printf("2\n");
//         }
//     }

// #include <stdio.h>
//     int main()
//     {
//         int x = 0;
//         if (x == 1)
//             if (x == 0)
//                 printf("inside if\n");
//             else
//                 printf("inside else if\n");
//         else
//             printf("inside else\n");
//     }

// #include <stdio.h>
//     int main()
//     {
//         int x = 0;
//         if (x++)
//             printf("true\n");
//         else if (x == 1)
//             printf("false\n");
//     }

// #include <stdio.h>
// void main()
// {
// int a[5] = {5, 1, 15, 20, 25};
// int i, j, m;
// i = ++a[1];
// j = a[1]++;
// m = a[i++];
// printf("%d, %d, %d", i, j, m);
// }

// #include <stdio.h>
// int main()
// {
// 	int arr[8];
// 	int n=0;
// 	while(n<8)
// 	{
// 		arr[n]=++n;
// 	}
// 	for(n=0; n<8; n++)
// 	{
// 		printf("%d, ",arr[n]);
// 	}
// 	return 0;
// }

// #include<stdio.h>
// int i;
// int show();

// int main()
// {
//     while(i)
//     {
//         show();
//         main();
//     }
//     printf("ERA\n");
//     return 0;
// }
// int show()
// {
//     printf("Graphic");
// }

// #include <stdio.h>
// int main()
// {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<i;j++)
//            {
//                printf("%d", i+i);
//            }
//            }
// return 0;
// }

// #include<stdio.h>

// int fct(int ii, int jj)
// {
//     int kk, ll;
//     kk = ii + jj;
//     ll = ii * jj;
//     return (kk, ll);
// }

// int main()
// {
//     int i=5, j=7, k, l;
//     k = fct(i, j);
//     l = fct(i, j);
//     printf("%d %d\n", k, l);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//        int i, ch=97;
//        for(i=0;i<5;i++)
//        {
//            printf("%c",ch);
//            ch++;

//        }
// return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int fun(int);
//     int i = fun(10);
//     printf("%d\n", --i);
//     return 0;
// }
// int fun(int i)
// {
//    return (i++);
// }

// #include<stdio.h>
// int main()
// {
//   int x=5,y=6;
//    x=x^y;
//    y=x^y;
//    x=x^y;
//   printf("%d,%d",y,x);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i=0;
//     while(i!=6)
//     {
//         i++;
//     if(i==2 || i==5 ||i==6)
//     {   printf("HI ");
//         continue;
//     }
//     printf("Hello ");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	char arr[]={ 'A', 'B', 'c', 'd', 'E', 'f' };
// 	int size=sizeof(arr)/sizeof(arr[0]);
// 	printf("%d\n", size);
// 	return 0;
// }
// #include <stdio.h>
// int main()
// {
// 	int arr[8];
// 	int n=0;
// 	while(n<8)
// 	{
// 		arr[n]=++n;
// 	}
// 	for(n=0; n<8; n++)
// 	{
// 		printf("%d, ",arr[n]);
// 	}
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int marks[10];
//     for (int i = 0; i <= 9; i++)
//     {
//         printf("enter %d number", i);
//         scanf(" \n%d\n",&marks[i]);
//     }

//     for(int i = 0; i<9; i++){
//         if (marks[i] <35)
//         {
//             printf("%d\n",i);
//         }

//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int size;
//     printf("How many numbers you want to add?\n");
//     scanf("%d", &size);
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter the %d number\n", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     int sum = 0;
//     for (int i = 0; i <= size-1; i++)
//     {

//         int sum = sum + arr[i];
//     }
//     printf("%d", sum);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int size;
//     printf("How many numbers do you want to add?\n");
//     scanf("%d", &size);

//     int arr[size];

//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter the %d number\n", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     printf("You entered the following numbers:\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }

// }

// #include <stdio.h>

// int main()
// {
//     int size, i;
//     printf("How many numbers do you want in array?\n");
//     scanf("%d", &size);

//     int arr[size];

//     for (int i = 0; i < size-1; i++)
//     {
//         printf("Enter the %d number\n", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < size-1; i++)
//     {
//         printf("%d",arr[i]);
//     }

//     int max = -1;

//     for (int j = 0; j <= size; j++)
//     {
//         if (max<arr[j])
//         {
//             max = arr[j];
//         }

//     }
//    printf("\n%d",max);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int size;
//     printf("How many numbers you want to add?\n");
//     scanf("%d", &size);
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter the %d number\n", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     int sum = 0;
//     for (int i = 0; i <= size - 1; i++)
//     {
//         sum = sum + arr[i];
//     }
//     printf("%d", sum);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//   int n,i,j,r;
//   printf("Enter size of array---");
//   scanf("%d",&n);
//   int a[n];
//   for(i=0;i<n;i++)
//     {
//       printf("Enter element %d---",i+1);
//       scanf("%d",&a[i]);
//     }
//   for(i=0;i<n;i++)
//     {
//       int s=0;
//       for(j=a[i];j!=0;j=j/10)
//         {
//           r=j%10;
//           s=s*10+r;
//         }
//       a[i]=s;
//     }
//   for(i=0;i<n;i++)
//     {
//       for(j=a[i];j!=0;j=j/10)
//         {
//           int rem=j%10;
//           switch(rem)
//             {
//               case 1:printf("ONE");
//               break;
//               case 2:printf("TWO");
//               break;
//               case 3:printf("THREE");
//               break;
//               case 4:printf("FOUR");
//               break;
//               case 5:printf("FIVE");
//               break;
//               case 6:printf("SIX");
//               break;
//               case 7:printf("SEVEN");
//               break;
//               case 8:printf("EIGHT");
//               break;
//               case 9:printf("NINE");
//               break;

//             }

//         }
//        printf("\n");
//     }

// }

// #include <stdio.h>
// void goodMorning(int n){
//   if(n==0) return;
//   printf("Good Morning\n");
//   goodMorning(n-1);
//   return;
// }
// int main(){
//   int n;
//   printf("Enter the value of n");
//   scanf("%d",&n);
//   goodMorning(n);
//   return 0;
// }

// #include <stdio.h>
// void incresing(int n){
//   printf("%d",1)
// }
// int main(){
// int n;
// printf("Enter the value of n");
// scanf("%d",&n);
//   incresing(n);
//   return 0;
// }

// #include <stdio.h>
// void incresing(int n)
// {
//   if (n == 0)
//     return;

//   incresing(n - 1);
//   printf("%d\n", n);
// }
// int main()
// {
//   int n;
//   printf("Enter the value of n");
//   scanf("%d", &n);
//   incresing(n);
//   return 0;
// }

// #include <stdio.h>
// int  factorial(int n)
// {
//   if (n==0 || n==1)
//   {
//     return 1;
//   }
//   return n*factorial(n-1);

// }
// int main()
// {
//   int n;
//   printf("Enter the value of n");
//   scanf("%d", &n);
//   int fact = factorial(n);
//   printf("%d", fact);
//   return 0;
// }

// #include <stdio.h>
// void  sum(int n, int x)
// {
//   if (n==0)
//   {
//     printf("%d",x);
//     return;
//   }
//   sum(n-1,x+n);

// }
// int main()
// {
//   int n;
//   printf("Enter the value of n");
//   scanf("%d", &n);
//   sum(n,0);
//   return 0;
// }

// #include <stdio.h>
// int  power(int a, int b)
// {
//   if(b==0){
//     return 1;
//   }
//   return a*power(a,b-1);
// }
// int main()
// {
//   int a,b;
//   printf("Enter the value of a");
//   scanf("%d",&a);
//   printf("Enter the value of b");
//   scanf("%d",&b);
//   int p = power(a,b);
//   printf("%d",p);
//   return 0;
// }

// #include <stdio.h>
// int  fibo(int n)
// {
//   if(n==1) return 0;
//   if (n==2) return 1;

//   return fibo(n-1)+fibo(n-2);
// }
// int main()
// {
//   int n;
//   printf("Enter the value of n");
//   scanf("%d",&n);
//   int p = fibo(n);
//   printf("%d",p);
//   return 0;
// }
// #include <stdio.h>

// // Function to calculate the sum of squares of digits
// int sum_of_squares_of_digits(int n) {
//     // Base case: If the number is a single digit, return its square
//     if (n < 10) {
//         return n * n;
//     }

//     // Recursive case: Sum of squares of digits for the remaining part of the number
//     int last_digit = n % 10;
//     int remaining_digits = n / 10;
//     return last_digit * last_digit + sum_of_squares_of_digits(remaining_digits);
// }

// int main() {
//     // Get user input for the number 'N'
//     int user_input;
//     printf("Enter a number (N): ");
//     scanf("%d", &user_input);

//     // Call the recursive function and print the result
//     int result = sum_of_squares_of_digits(user_input);
//     printf("The sum of squares of digits of %d is: %d\n", user_input, result);

//     return 0;
// }

// #include <stdio.h>
// int sum(int n){
//   if (n<10) return n*n;
//   int last = n % 10;
//   int secondlast = n/10;
//   return last*last + sum(secondlast);
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   int sume = sum(n);
//   printf("%d", sume);
//   return 0;
// }

// #include <stdio.h>
// void sum(int n){
//   if (n<0) return;
//   printf("%d",n);
//   return sum(n-2);
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   sum(n);

//   return 0;
// }

// #include <stdio.h>
// void sum(int n){
//   if (n<0) return;
//   printf("%d",n);
//   return sum(n-2);
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   sum(n);

//   return 0;
// }

// #include <stdio.h>

// // Recursive function to print the series
// void print_series(int term, int n)
// {
//   // Base case: Stop printing when the number of terms is 0
//   if (n == 0)
//   {
//     return;
//   }

//   // Print the current term
//   printf("%d", term);

//   // Print '+' if there are more terms to come
//   if (n > 1)
//   {
//     printf("+");
//   }

//   // Recursive case: Print the next term (square of the next number) and continue the series
//   print_series((term + 1) * (term + 1), n - 1);
// }

// int main()
// {
//   // Get user input for the number of terms 'N'
//   int num_terms;
//   printf("Enter the number of terms (N): ");
//   scanf("%d", &num_terms);

//   // Call the recursive function to print the series
//   printf("Series: ");
//   print_series(1, num_terms);
//   printf("\n");

//   return 0;
// }

// #include <stdio.h>
// void swap_numbers(int a, int b)
// {
//   if (a == 0 || b == 0)
//   {
//     return;
//   }
//   int temp = a;
//   a = b;
//   b = temp;
// }
// int main()
// {
//   int n1, n2;
//   printf("Enter the first number: ");
//   scanf("%d", &n1);
//   printf("Enter the second number: ");
//   scanf("%d", &n2);
//   swap_numbers(&n1, &n2);
//   printf("%d%d", n1, n2);
//   return 0;
// }
// #include <stdio.h>
// void factor(int x, int y){
//   if(y>x) return;
//   if(x%y==0){
//     printf("%d",y);
//   }
//   factor(x,y+1);
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   factor(n,1);
//   return 0;
// }

// #include <stdio.h>
// int main(){
//   int n, sum=0;
//   scanf("%d",&n);
//   int a[n];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d",&a[i]);
//     sum = a[i] + sum;
//   }
//   printf("sum=%d",sum);
//   return 0;

// }

// #include <stdio.h>
// int main()
// {
//   int n, k, max, min;
//   scanf("%d", &n);
//   int a[n];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &a[i]);
//   }

//   for (int j = (n-1); j >=0; j--)
//   {
//     printf("%d",a[j]);
//   }

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char a[100];
//   gets(a);
//   int A = 0, d = 0, s = 0;

//   for (int i = 0; a[i] != '\0'; i++) {
//     if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) {
//       A = A + 1;
//     } else if (a[i] >= '0' && a[i] <= '9') {
//       d = d + 1;
//     } else {
//       s = s + 1;
//     }
//   }

//   printf("Alphabets: %d, Digits: %d, Special characters: %d", A, d, s);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char a[100];
//   gets(a);
//   int v = 0, c = 0;

//   for (int i = 0; a[i] != '\0'; i++) {
//     if (a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')
//     {
//       if (a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='o'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='O'||a[i]=='u')
//       {
//         v=v+1;
//       }
//       else{
//         c=c+1;
//       }
//     }
//   }
//   printf("%d%d",v,c);
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   int n;
//   scanf("%d",&n);
//   for(int i=0;i<=n;i++){
//     printf("Hello World\n");
//   }
//   return 0;
// }
// #include<stdio.h>
// int main(){
//   for(int i=0;i<=100;i++){
//     printf("%d\n",i);
//   }
//   return 0;
// }
// #include<stdio.h>
// int main(){
//   for(int i=0;i<=100;i=i+2){
//     printf("%d\n",i);
//   }
//   return 0;
// }

// #include <stdio.h>
// #include <string.h>

// void sortString(char *str);

// int main() {
//     char inputString[100];

//     // Input string from the user
//     printf("Enter a string: ");
//     fgets(inputString, sizeof(inputString), stdin);

//     // Remove the newline character from the input
//     inputString[strcspn(inputString, "\n")] = '\0';

//     // Call the sorting function
//     sortString(inputString);

//     // Display the sorted string
//     printf("Sorted string: %s\n", inputString);

//     return 0;
// }

// void sortString(char *str) {
//     int length = strlen(str);

//     // Bubble sort algorithm using pointers
//     for (int i = 0; i < length - 1; i++) {
//         for (int j = 0; j < length - i - 1; j++) {
//             if (*(str + j) > *(str + j + 1)) {
//                 // Swap characters using pointers
//                 char temp = *(str + j);
//                 *(str + j) = *(str + j + 1);
//                 *(str + j + 1) = temp;
//             }
//         }
//     }
// }

// #include <stdio.h>
// int main(){
//     int n,m;
//     printf("Enter the order of matrix - ");
//     scanf("%d%d\n",&n,&m);
//     printf("you entered this order - %d,%d",n,m);
//     int a[m][n];
//     for(int i=0; i<m;i++){
//         for (int j = 0; j < n; j++)
//         {
//             printf("Enter the elements of matrix - ");
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0; i<m;i++){
//         for (int j = 0; j < n; j++)
//         {
//             printf(" %d",a[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n,m;
//     scanf("%d%d",&m,&n);
//     int a[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;

//     scanf("%d",&n);
//     int a[n], k;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int t;
//     for(int i=0;i<n/2;i++){
//         t = a[i];
//         a[i]= a[n-1-i];
//         a[n-1-i] = t;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d",t);
//     }

// }
// sum using function
// #include<stdio.h>
// void sum(int b[],int n){
//      int s=0;
//     for (int i = 0; i < n; i++)
//     {
//       s = s + b[i];
//     }
//     printf("%d",s);

// }
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     int a[n];

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     sum(a,n);

//     return 0;
// }
// #include<stdio.h>
// void reverse(int b[],int n){
//     int t;
//     for (int i = 0; i < n/2; i++)
//     {
//         t = b[i];
//         b[i] = b[n-i-1];
//         b[n-i-1] = t;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d",b[i]);
//     }

// }
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     int a[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     reverse(a,n);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i = 2; i < n; i++)
//     {
//        if (a[i]%i==0)
//        {
//         printf("%d is not prime", a[i]);
//        }
//        else
//        printf("%d is prime", a[i]);

//     }

// }

// #include<stdio.h>
// int main()
// {
//   char a[100];
//   gets(a);
//   char *p=a;
//   int i;
//   for(i=0;a[i]!='\0';i++)
//     {

//       if(*(p+i)>='A'&& *(p+i)<='Z')
//         *(p+i)+=32;
//       else if(*(p+i)>='a'&& *(p+i)<='z')
//         *(p+i)-=32;
//     }
//   puts(a);
// }

// #include <stdio.h>

// int main() {
//     int matrix[3][3];
//     int row_sums[3] = {0}; // Initialize row sums to 0
//     int max_sum = 0;
//     int max_row_index = 0;

//     // Input matrix elements
//     printf("Enter the elements of the 3x3 matrix:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             scanf("%d", &matrix[i][j]);
//             row_sums[i] += matrix[i][j]; // Calculate row sums while taking input
//         }
//     }

//     // Find the row with maximum sum
//     for (int i = 0; i < 3; i++) {
//         if (row_sums[i] > max_sum) {
//             max_sum = row_sums[i];
//             max_row_index = i;
//         }
//     }

//     // Print the maximum sum and corresponding row
//     printf("The row with the maximum sum is row %d\n", max_row_index + 1);
//     printf("The sum of its elements is %d\n", max_sum);
//     printf("The row elements are: ");
//     for (int j = 0; j < 3; j++) {
//         printf("%d ", matrix[max_row_index][j]);
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char c[20];
//     gets(c);

//     int length = strlen(c);
//     int start = 0;

//     for (int i = 0; i <= length; i++) {
//         if (c[i] == ' ' || c[i] == '\0') {
//             int end = i - 1;
//             while (start < end) {
//                 char temp = c[start];
//                 c[start] = c[end];
//                 c[end] = temp;
//                 start++;
//                 end--;
//             }

//             start = i + 1;
//         }
//     }777

//     printf("Reversed string: %s\n", c);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char a[100];
//     gets(a);
//     char b[100];
//     gets(b);
//     int l, l1, c = 0;
//     for (l = 0; a[l] != '\0'; l++)
//         ;
//     for (l1 = 0; b[l1] != '\0'; l1++)
//         ;
//     for (int i = 0; i < l - l1; i++)
//     {
//         int j;
//         for (j = 0; j < l1; j++)
//         {

//             if (b[i + j] != a[j])
//             {
//                 break;
//             }
//             if (j == l1)
//             {
//                 c = 1;
//                 break;
//             }
//         }
//     }

//     if (c == 1)
//     {
//         printf("present");
//     }
//     else
//         printf("not present");

//     return 0;
// }

// #include <stdio.h>
// void swap(int x, int y)
// {
//     int t = x;
//     x = y;
//     y = t;
//     printf("a - %d", x);
//     printf("\nb - %d", y);
// }
// int main()
// {
//     int a, b;
//     printf("a - ");
//     scanf("%d", &a);
//     printf("b - ");
//     scanf("%d", &b);
//     swap(a, b);
// }

// #include <stdio.h>
// void cat(int *);
// int main(){
//     int i = 97, *p = &i;
//     cat(&i);
//     printf("%d",*p);
// }
// void cat(int *p){
//     int j=2;
//     p = &j;
//     printf("%d",*p);
// }

#include<stdio.h>
void length(char *a,char *b){
 int l,l1;
 for ( l = 0; *(a+l) != '\0'; l++);
 for ( l1 = 0; *(b+l1) != '\0'; l1++);
 printf("%d\n",l);
 printf("%d",l1);
 int c=0;
 if (l==l1)
 {
    for (int i = 0; i < l; i++)
 {
    for (int j = 0; j < l; j++)
    {
        if (a[i]==b[j])
        {
            c++;
        }
        
    }
    
 }
 
 }
 if (c==l)
 {
     printf("anagram");
 }
 else
 printf("not");
 

 
 
}
int main(){
    char a[100];
    char b[100];
    gets(a);
    gets(b);
   length(a,b);
    return 0;
}