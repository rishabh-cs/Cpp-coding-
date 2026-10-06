#include<iostream>
#include<cmath>
using namespace std;
class Point{
        int x,y;
        public:
        friend void distance(Point ,Point );
        Point(int a,int b){
                x=a;
                y=b;
                
        }
        void printcord(){
                cout<<x<<","<<y<<endl;
                
        }
};

        void distance(Point o1,Point o2){ float axis1=0,axis2=0,dist=0;
                axis1= o1.x-o2.x;
                axis2=o1.y-o2.y;
                               
                dist=sqrt((axis1*axis1)+(axis2*axis2));
               // or direct
                  // dist=sqrt(pow(axis1,2 ) +pow(axis2,2)) ;                    
                        cout<<dist<<endl;
                
        }
        int main(){
                Point p(1,1);
                p.printcord();

                Point q(2,2);
                q.printcord();

                distance(p,q);
                return 0;
        }
