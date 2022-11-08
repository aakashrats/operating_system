#include<bits/stdc++.h>
using namespace std;

class DiskScheduling{

public:
  float FCFS(int arr[],int n,int init)
{
   float answer=abs(init-arr[0]);

  for(int i=1;i<n;i++)
    {
      answer=answer+abs(arr[i]-arr[i-1]);
    }

  return answer/n;
}

};
int main()
{
  int disk[]=[11,25,88,46,66,25,55,78,45,252};

  DiskScheduling obj;
  cout<<obj.FCFS(disk,9,100);
  return 0;
  
}