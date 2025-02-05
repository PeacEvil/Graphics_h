    #include<stdio.h>
    #include<graphics.h>
    #include<math.h>


    int main()
    {   int xc=250,yc=250;
        int gd=DETECT, gm;
        initgraph (&gd,&gm," ");
        circle(xc, yc, 30);
        for(int j=0;j<3;j++)
        {
            for(int i=0;i<50;i++)
                {
                    line(0,330,900,330);
                    xc=xc+1;
                    yc=yc+1;

                    setfillstyle(1,RED);
                    circle(xc, yc, 30);
                    floodfill(xc, yc, WHITE);
                    delay(30);
                    cleardevice();
                    line(0,330,900,330);
                }
             for(int i=0;i<50;i++)
                {
                    line(0,330,900,330);
                    xc=xc+1;
                    yc=yc-1;

                    setfillstyle(1,RED);
                    circle(xc, yc, 30);
                    floodfill(xc, yc, WHITE);
                    delay(30);
                    cleardevice();
                    line(0,330,900,330);
                }
        }

        getch();
        return 0;

    }
