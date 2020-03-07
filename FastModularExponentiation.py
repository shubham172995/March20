def FastModularExponentiation(b, k, m):
  # your code here
  ans=1
  for i in range(0, k):
    ans=(ans*b)%m
  return ans