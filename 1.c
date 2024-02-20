class Solution {
public:
    bool isValid(string x) {
        int top = -1,p=0,cr=0,cu=0;
        char str[x.length()];
        int i=0;
        while(x[i] != '\0'){
        	if(x[i]=='{' || x[i]=='(' || x[i]=='[' ){
        		str[++top]=x[i];
        		if(x[i]=='{')
        			cr++;
        		else if(x[i]=='(')
        			cu++;
        		else
        			p++;
        	}else if(x[i]=='}' || x[i]==']' || x[i]==')'){
                if(top==-1){
        	    	return false;
        	    }
        		
        		if(x[i]=='}' && str[top]=='{')
        			cr--;
        		else if(x[i]==')' && str[top]=='(')
        			cu--;
        		else if(x[i]==']' && str[top]=='[')
        			p--;
        		top--;
        	}
        	i++;
        }
        if(top==-1 && cr==0 && cu==0 && p==0){
        	return true;
        }
        return false;
    }
};