int s[20];
int top=-1;
void push(int ch)
{
   top++;
   s[top]=ch;
}

int pop()
{

  char ch;
  ch=s[top];
  top--;
  return(ch);
}

int  topelement()
{
  
  return(s[top]);
 
}
int empty()
{

 if(top==-1)

   return 1;
 else
   return 0;

}

