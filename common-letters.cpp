#include<iostream>



int common_letters(const char a[], const char b[], char out[]){
    int alpha[26]={0};
    int alpha2[26]={0};
    int i =0;
    int j =0;
    int counter=0;
    while(a[i]!=0){

        if(a[i]>='a'&& a[i]<='z'){
            alpha[a[i]-'a']=1;
        }
        else if(a[i]>='A'&& a[i]<='Z'){
            alpha[a[i]-'A']=1;
        }
        i++;
    }
    

    while(b[j]!=0){

        if(b[j]>='a'&& b[j]<='z'){
            alpha2[b[j]-'a']=1;
        }
        else if(b[j]>='A'&& b[j]<='Z'){
            alpha2[b[j]-'A']=1;
        }
        j++;
    }

    for(int g=0; g<26;g++){

        if(alpha[g] == alpha2[g] && alpha[g]==1){
            out[counter]=(g+'a');
            counter++;
        }

    }

    return counter;
}






int main(){ char out[26+1];
  int n = common_letters("+LEIC", "c++", out);
  std::cout << n << " \"" << out << "\"\n"; 
  return 0;}