int mirrorDistance(int n)
 {
 int rev=0;
 int a=n;
 while(a >0)
 {
    rev=rev*10+a %10;
    a=a/10;
 }
 return abs(n-rev);
}