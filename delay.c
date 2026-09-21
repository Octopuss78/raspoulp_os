void delay(unsigned int n)
{
  volatile unsigned int x = n;
  while (x>0)
    x--;
}
