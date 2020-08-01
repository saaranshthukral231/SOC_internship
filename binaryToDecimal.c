int binaryToDecimal(int n)
{
  int dec=0, i=1,dig;
  while(n!=0){
    dig = n % 10;
    dec = dec + dig*i;
    n = n/10;
   i = i*2; 
  }
  return dec;
}
