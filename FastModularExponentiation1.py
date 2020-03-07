def FastModularExponentiation(b, k, m):
  # your code here
  ans=1
  while(k>1):
  	if(k&1):
  		ans=(ans*b)%m
    b=(b*b)%m
    k=k//2
  return (b*ans)%m