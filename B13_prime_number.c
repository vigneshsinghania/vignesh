
    #include<iostream.h>
    #include<conio.h>
            void main()
            {
             //clrscr();
             int number,count=0;
               cin>>number;
               for(int a=1;a<=number;a++)
                   {
                    if(number%a==0)
                       {
                      count++;
                       }
                   }
           if(count==2)
             {
              cout<<" PRIME NUMBER \n";
             }
           else
             {
              cout<<" NOT A PRIME NUMBER \n";
             }
          getch();
           }
