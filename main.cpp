#include <iostream>
#include<stdio.h>
#include<graphics.h>
#define ScreenHeight getmaxx()
#define ScreenWidth getmaxy()
#define YGround ScreenHeight*0.65

using namespace std;

int clock();
int intro();
int main()
{
    initwindow(800,800);
	clock();
	cleardevice();
	intro();
	cleardevice();


    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    initwindow(1550,1500);
    int page=0;

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,2);
    rectangle(600,450,950,460);
    floodfill(605,455,WHITE);
    rectangle(590,460,960,470);
    floodfill(595,465,WHITE);
    rectangle(575,470,970,480);
    floodfill(585,475,WHITE);

    //1st Minar
    rectangle(610,350,645,450);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(620,360,635,458);
    floodfill(620,353,WHITE);

    //2nd Minar
    rectangle(675,325,715,450);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(685,335,705,458);
    floodfill(685,327,WHITE);

    //3rd Minar
    rectangle(740,300,750,450);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(745,307,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(770,300,780,450);
    floodfill(775,307,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(800,300,810,450);
    floodfill(805,307,WHITE);
    setcolor (WHITE);

    //1st upper side

    line(740,300,785,240);
    line(741,300,785,241);
    line(742,300,785,242);
    line(743,300,785,243);
    line(744,300,785,244);
    line(745,300,785,245);
    line(746,300,785,246);
    line(747,300,785,247);
    line(748,300,785,248);
    line(749,300,785,249);
    line(750,300,785,250);
    line(751,300,785,251);

    //2nd side

    line(770,300,805,253);
    line(771,300,806,253);
    line(772,300,807,253);
    line(773,300,808,253);
    line(774,300,809,253);
    line(775,300,810,253);
    line(776,300,811,253);
    line(777,300,812,253);
    line(778,300,813,253);
    line(779,300,814,253);
    line(780,300,815,253);

    //3rd side

    line(810,300,855,240);
    line(800,300,835,253);

    line(800,300,845,240);
    line(801,300,846,240);
    line(802,300,847,240);
    line(803,300,848,240);
    line(804,300,849,240);
    line(805,300,850,240);
    line(806,300,851,240);
    line(807,300,852,240);
    line(808,300,853,240);
    line(809,300,854,240);
    line(810,300,855,240);

    //upper side all 1st line joint

    line(785,240,855,240);
    line(786,241,845,241);
    line(786,242,846,242);
    line(786,243,847,243);
    line(786,244,848,244);
    line(786,245,849,245);
    line(786,246,850,246);
    line(786,247,851,247);

    line(786,247,850,247);
    line(786,248,849,248);
    line(786,249,848,249);
    line(786,250,847,250);
    line(786,251,846,251);
    line(786,252,845,252);

    //Joint side


    line(785,253,805,253);
    line(815,253,835,253);


    //circle draw

    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(775,375,50);
    floodfill(775,375,RED);

    //4th Minar

    setcolor(WHITE);
    rectangle(835,325,875,450);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(845,335,865,450);
    floodfill(845,327,WHITE);

    //5th Minar

    rectangle(900,350,940,450);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(910,360,930,450);
    floodfill(910,353,WHITE);


    getch();
    closegraph();
    return 0;

}

int clock()
{
	for(int i=0;i<200;i+=15)
	{
		circle(400,400,250);
		setcolor(rand());
		settextstyle(EUROPEAN_FONT,0,4);
		outtextxy(380,180,"12");
		outtextxy(380,600,"06");
		outtextxy(600,380,"03");
		outtextxy(180,380,"09");
		outtextxy(400,380,".");
		delay(500);
		Beep(2100,250);
		cleardevice();
		line(400,400,200+(i+10),380-i);

	}
		Beep(2500,200);
}


int intro()
{
	int k=0,l;
	settextstyle(EUROPEAN_FONT,0,4);
	setcolor(RED);
	outtextxy(20,300, "* 21st February,Language Martyr's Day");
	settextstyle(EUROPEAN_FONT,0,4);
	setcolor(WHITE);
	outtextxy(20,350, "* 21st February,International Mother ");
	settextstyle(EUROPEAN_FONT,0,4);
	setcolor(WHITE);
	outtextxy(20,400, "Language Day");
	settextstyle(EUROPEAN_FONT,0,4);
	setcolor(GREEN);
	outtextxy(20,450, "* 21st February,Language Movement Day");
	delay(7000);
	return 0;
}
