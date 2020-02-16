#include <kipr/wombat.h>

int main()
{
	printf("Start\n");
    create_connect();                   //connect to create
    while ( (get_create_rbump () ==0) && (get_create_lbump () ==0) )      //drive until create bumps with either sensor
    {
        create_drive_direct(100, 100);  //drive
    }
	printf("turn ccw\n");
    create_spin_CCW(200);              //create spin counter clock wise hopefully 90 degrees
    msleep(1000);
    create_stop();

    create_drive_direct(100,100);      //drive exactly 900mm
    get_create_distance(900);
    msleep(1000);

    printf("the create turned 90 degrees\n");
    printf("the create drove 0.9 meters\n");

    create_stop();
    create_disconnect();

    printf("1st Training Challenge\n");
    return 0;
}
