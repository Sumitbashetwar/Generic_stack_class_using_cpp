#include<iostream>
using namespace std;
#define RED "\e[31;2m"
#define GREEN "\e[32;2m"
#define MAG "\e[35m"
#define BROWN "\e[34m"
#define CYAN "\e[36m"
#define YELLOW "\e[33m"
#define RESET "\e[0m"
template <class t1>
class stack
{
	t1 stk[5];
	int top,size;
	public:
	stack()
	{
		top=-1;
		size=5;
	}
	void push()
	{
		if(top==size-1)
			cout<<RED<<"the stack is overflow or stack is full"<<RESET<<endl;
		else
		{
			t1 ele;
			cout<<"enter the elements you want to push into stack:"<<endl;
		        cin>>ele;
			top++;
			stk[top]=ele;
			cout<<GREEN<<stk[top]<<" is stored into stack"<<RESET<<endl;
		}
	}
	void pop()
	{
		if(top<0)
			cout<<RED<<"stack underflow or stack is empty"<<RESET<<endl;
		else
		{
			t1 ele;
			ele=stk[top];
			top--;
			cout<<GREEN<<"the popped element of stack is: "<<ele<<RESET<<endl;
		}
	}
        void display()
	{
		if(top<0)
			cout<<RED<<"stack is empty...."<<RESET<<endl;
		else
		{
		cout<<"the content of stack are:"<<endl;
		for(int i=0;i<=top;i++)
			cout<<stk[i]<<"  ";
		cout<<endl;
		}
	}
	~stack()
	{ }
};
main()
{
	int op,ch,t=0,d,c2=0,c1;
	while(1)
	{
		
label:	       c1=0;
		cout<<YELLOW<<"main menu: select data type:- 1) int 2) char 3)float 4)double 5)exit"<<RESET<<endl;
		cin>>op;
	switch(op)
	{        
		case 1 :
		{	c2=0;
			static int i=0; 
			cout<<BROWN<<"integer stack application is ready to use..."<<RESET<<endl;
			if(i>0)
			{
			cout<<CYAN<<"do you want to continue with previous stack or new 1)continue 2)new"<<RESET<<endl;
	       	        cin>>d;
			if(d==1)
				i--;
			}
			static stack<int> s[5];
			while(1)
			{
				cout<<YELLOW<<"menu: enter operation which you want to perform on stack:-"<<endl;
				cout<<"1)push 2)pop 3)display 4)main menu..."<<RESET<<endl;
                                cin>>ch;
				switch(ch)
				{
					case 1: s[i].push();
						break;
					case 2: s[i].pop();
						break;
					case 3: s[i].display();
						break;
					case 4: i++;
						goto label;
					default: c1++;
						if(c1>=3)
							goto label;
						cout<<MAG<<"invalid choice plz enter valid choice...."<<RESET<<endl;	
				}
			}		
		}
			 break;
		case 2 : 
	        {       c2=0;
			static int c=0; 
			if(c>0)
			{
			cout<<CYAN<<"do you want to continue with previous stack or new 1)continue 2)new"<<RESET<<endl;
	       	        cin>>d;
			if(d==1)
				c--;
			}
			static stack<char> s[5];
			cout<<BROWN<<"char stack application is ready to use..."<<RESET<<endl;
			while(1)
			{
				cout<<YELLOW<<"menu: enter operation which you want to perform on stack:-"<<endl;
				cout<<"1)push 2)pop 3)display 4)main menu..."<<RESET<<endl;
                                cin>>ch;
				switch(ch)
				{
					case 1: s[c].push();
						break;
					case 2: s[c].pop();
						break;
					case 3: s[c].display();
						break;
					case 4: c++;
						goto label;
					default:c1++; 
						if(c1>=3)
							goto label;
						cout<<MAG<<"invalid choice plz enter valid choice...."<<RESET<<endl;	

				}
			}
         	 }
			 break;
		case 3: 
		{       c2=0;
			static int f=0; 
			if(f>0)
			{
			cout<<CYAN<<"do you want to continue with previous stack or0 new 1)continue 2)new"<<RESET<<endl;
	       	        cin>>d;
			if(d==1)
				f--;
			}
			 stack<float> s[5];
			cout<<BROWN<<"float stack application is ready to use..."<<RESET<<endl;
			while(1)
			{
				cout<<YELLOW<<"menu: enter operation which you want to perform on stack:-"<<endl;
				cout<<"1)push 2)pop 3)display 4)main menu..."<<RESET<<endl;
                                cin>>ch;
				switch(ch)
				{
					case 1: s[f].push();
						break;
					case 2: s[f].pop();
						break;
					case 3: s[f].display();
						break;
					case 4: f++;
						goto label;
					default:c1++; 
						if(c1>=3)
							goto label;
						cout<<MAG<<"invalid choice plz enter valid choice...."<<RESET<<endl;	
				}
			}
		}
			 break;
		case 4: 
		{       c2=0;
			static int a=0; 
			if(a>0)
			{
			cout<<CYAN<<"do you want to continue with previous stack or new 1)continue 2)new"<<RESET<<endl;
	       	        cin>>d;
			if(d==1)
				a--;
			}
			 stack<double> s[5];
			cout<<BROWN<<"double stack application is ready to use..."<<RESET<<endl;
			while(1)
			{
				cout<<YELLOW<<"menu: enter operation which you want to perform on stack:-"<<endl;
				cout<<"1)push 2)pop 3)display 4)main menu..."<<RESET<<endl;
                                cin>>ch;
				switch(ch)
				{
					case 1: s[a].push();
						break;
					case 2: s[a].pop();
						break;
					case 3: s[a].display();
						break;
					case 4: a++;
						goto label;
					default:c1++; 
						if(c1>=3)
							goto label;
						cout<<MAG<<"invalid choice plz enter valid choice...."<<RESET<<endl;	
				}
			}
		 }
			 break;
		case 5: 
		          t=1;
		          break;	  
		default: c2++;
			 if(c2==2)
				 cout<<RED<<"last attempt plz enter valid option..."<<RESET<<endl;
			 if(c2>=3)
				 t=1;
			 cout<<MAG<<"invalid choice plz enter valid option....."<<RESET<<endl;
	                 break;
	}
          if(t==1)
		  break;
	}
cout<<YELLOW<<"thanks for visiting.........visit again"<<RESET<<endl;	
}