//https://practice.geeksforgeeks.org/problems/circular-tour/1


class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int k=0, b=0, s=0;
       for(int i=0;i<n;i++){
           b+= p[i].petrol - p[i].distance;
           if(b<0){
               k+=b;
               s=i+1;
               b=0;
           }
       }
       if(k+b>=0) return s;
       else return -1;
    }
};
