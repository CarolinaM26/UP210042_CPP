# include <iostream>
using namespace std;

int main (int argc, char const *argv[] )
{
    int n=5;
    int r=0;
    int e=1;
    for (int i=1; i<=10; i++)
    {
        r = n*i;
        cout<<n<<" x "<<i<<" = "<<r<<endl;
    }
    cout<<"\n";
    for (int i=10; i>=1; i--)
    {
        r=n*i;
        cout<<n<<" x "<<i<<" = "<<r<<endl;
    }
    cout<<"\n";
    while (e<=10)
    {
        r=n*e;
        cout<<n<<" x "<<e<<" = "<<r<<endl;
        e++;
    }
    cout<<"\n";
    e=10;
    while (e>=1)
    {
        r=n*e;
        cout<<n<<" x "<<e<<" = "<<r<<endl;
        e--;
    }
    do
    {
        r=n*e;
        cout<<n<<" x "<<e<<" = "<<r<<endl;
        e++;
    }while(e<=10);
    return 0;
}
