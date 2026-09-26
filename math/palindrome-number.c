bool isPalindrome(int x){
long r,pal=x,sum=0;
 while(x!=0)
 {
     r=x%10;
     if(r>=0){
     sum=sum*10+r;}
     x=x/10;
 }
if(sum==pal)
{
    return true;
} 
else
return false;
}