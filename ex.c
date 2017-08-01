int main()
{
  /*
  _Bool c;
  int x=0;
  //__CPROVER_assume(c==0);
  c=0;
  if(c)
    x=x-1;
  else
    x=x+1;
  assert(x>0);
  */
  unsigned y;
  int x=0;
  __CPROVER_assume(y>=0 && y<=10);
  if(y==0)
    x=y+1;
  else if(y==1)
    x=y+1;
  else if(y==2)
    x=x*2+y;
  else if(y==3)
    x=x-y;
  else 
    x=1;
  assert(x>0);
}

