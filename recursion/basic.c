//print name 5 times using recursion
 
//#include<stdio.h>
 //count=0;
 //print()
 //{
  //if(count==5)
  //return;
  //printf("NISHI\n");
  //count++;
  //print();
 //}
 //main()
 //{
  //print();
 //}

 //print linearly from 1 to n
 #include<stdio.h>
 
 count=1;
 Linear(n)
 {
  if(count<=n)
  return;
  printf("%d\n",count);
  count++;
  Linear(n);
 }
 main()
 {
  int n;
  printf("Enter n: \n");
  scanf("%d",&n);
  Linear(n);
 }
 
