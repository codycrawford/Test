
void timer(void)
{
   int x, y;
   int result;
   
   x = 3; 
   y = 4; 
   
   result = x + y;
   
   int i;
   for (i = 0; i < 10; i++)
   {
       if (result == i)
       {
          x = i;
       }
   }
}
