int power(int a, int b){
    if(b==0)return;
    int ans = 1;
    if(b>0){
        for(int i=0;i<b;i++){
            ans*=a;
        }
    }
    else if(b<0){
        for(int i =0;i<-a;i++){
            ans/=a;
        }
    }

    return ans;
    
}