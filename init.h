#ifndef _INIT_H
    #include <project.h>

    #include <uart485.h>
    #include <Datadispose.h>

    
    
    //left
    #define LampL  led1     //左床灯
    #define Colmp  led2     //廊灯
    #define Bklmp  led3     //背景灯
    #define Rllmp  led4     //休闲灯
    #define Clear  led5     //清理
    #define Nofaz  led6     //勿扰
    //right
    #define Lmpbl  led1     //灯带
    #define Tplmp  led2     //顶灯
    #define LampR  led3     //右床灯
    #define Check  led4     //退房
    #define Gnctr  led5     //总控
    #define Ntlmp  led6     //夜灯
    
    #define REGISTER 0
    #define DEV      3
    
    typedef struct {
        uint8 name;
        uint8 ismasteron;
        uint8 ispoweron;
        uint8 status;
        uint8 hcrelation;// 互斥关系，没有为0，有的话为相关按键代号
        uint8 kgorfw;//==1 为复位按键
    }KEY;
    /*
        S1 1
        S2 2
        S3 3
        S4 12
        S5 11
        S6 10
        S7 14
    */
    
    
     uint8 ledstate,devnum,funcode,dateadd;
     uint8 key1trg,key2trg,key3trg,key4trg,key5trg,
      key6trg,key7trg,key8trg,key9trg,key10trg;                   //按键触发
     uint8 keybuff1,keybuff2,keybuff3,keybuff4,keybuff5,
      keybuff6,keybuff7,keybuff8,keybuff9,keybuff10;                  //按键缓存
     uint8 keycont1,keycont2,keycont3,keycont4,keycont5,
      keycont6,keycont7,keycont8,keycont9,keycont10;                  //按键连续触发
     uint8 led1,led2,led3,led4,led5,led6,led7,led8,led9,led10;
     uint8 S1,S2,S3,S4,S5,S6,S7,S8,S9,S10;
     uint8 power;
    
     void init();
     uint8 dat,sign;
    extern  uint8 NAME;
    extern  uint8 ONOFF;

extern void init(void);
extern void test_cps(void);

#endif 