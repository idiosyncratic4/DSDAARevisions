#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, t, a[100005], max=0, l=0, count=0;
    scanf("%d %d", &n, &t);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        while(t<a[i])
        {
          t+=a[l];
          l++;
          count--;
          t-=a[i];
          count++;
          if(count>max)
          {
            max=count;
           }
          }
    }
    printf("%d", max);
    return 0;
}
