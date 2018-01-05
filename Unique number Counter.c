#include <stdio.h>


int main()
{

    int arr[10]={1,1,6,1,2,7,3,3,3,4};

    int unq[100];//this will contain the unique numbers

    int count_unq[100];//this will contain the frequency of each qunique numbers
    int count=1;
//this is the counter for the unq[100]                    
    int i=0;//a counter for loop    
 
   int j=0;//another counter for loop  
 
   int ii=0;// counter for setting all elements of count_unq to 0
          

      for(ii=0;ii<10;ii++)//this sets all elements in count_unq to 0
       count_unq[ii]=0;
//This is the core of the program

        
  for(i=0;i<10;i=i+1){

          int no=arr[i];

        
        if(i==0)

                   unq[0]=no;
//set the first element of the array to the first no of the array
          for(j=0;j<count;j=j+1){
  
          if(unq[j]==no){   //if the unique element in unq  is same as element in the array arr i.e arr[i] then go to next element in unq .If not same then go ahead

              break;

     
            }

            if(j==(count-1)){ //whether no is same or not will be determined only if all elements in unq have been compared with the element arr[i].If it has been compared then add this no to array unq and also increase value of count by 1
             unq[count++]=no;
  
            }

        }

    }


//This is a simple compare and count mechanism.It will store frequency of each number in arr. Note that for any number i count_unq[i] will always contain the frequency of the number stored in arr[i]
    int k=0;

    int kk=0;
 
   for(k=0;k<count;k++){

        for(kk=0;kk<10;kk++){
 
           if(arr[kk]==unq[k]){
   
             ++count_unq[k];

            }
  
      }
 
   }

    
    
    
    
    
    
    i=0;

    for(i=0;i<count;i++){
 
       printf("No is %d which appears %d times \n",unq[i],count_unq[i]);

    }

}



