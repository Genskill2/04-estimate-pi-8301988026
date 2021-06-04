[6/3, 3:55 PM] Varun Sct: float wallis_pi(int n) 
{
float ans=1.0;
for(int i=1;i<=n;i++) 
{float nr= 4*i*i;

ans= ans*(nr/(nr-1));

} 

return ans*2; 
}
[6/3, 3:55 PM] Varun Sct: float mc_pi(int n) 
{float c=0.0;
float ans; 

for(int i=1;i<=n;i++) 
{ 
float x= frandom(); 
float y= frandom(); 
if(sqrt(x*x+y*y)<1) 
c++; 
} 

ans = 4*c/n;
return ans; 
}
