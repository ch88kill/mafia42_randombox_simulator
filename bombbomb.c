#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand((unsigned)time(NULL));
    int nansu, nan, luna;
start:
    printf("¸î±ø? \n");
    scanf("%d", &luna);
    switch(luna){
        case 200:
            rand();
            nan = rand();
            nansu = nan % 10000 + 1;
            printf("%d %d", nansu, nan);
            if(nansu <= 80){
                printf("¾ßÀüº´¿øÀÇ ÀÇ»ç È¹µæ\n");
            } else if(nansu <= 160){
                printf("°áÀÇ¿¡ Âù ½Ã¹Î È¹µæ\n");
            } else if(nansu <= 240){
                printf("ÃÖÀü¼±ÀÇ ÀÚ°æ´Ü¿ø È¹µæ\n");
            } else if(nansu <= 270){
                printf("»çÃá±â ¼Ò³à ¸¶´ã È¹µæ\n");
            } else if(nansu <= 300){
                printf("Ä¡Å² ÅÐÀÌ¹ü µµµÏ È¹µæ\n");
            } else if(nansu <= 330){
                printf("¼±µµºÎ¿ø Á¤Ä¡ÀÎ È¹µæ\n");
            } else if(nansu <= 360){
                printf("°úÇÐºÎ¿ø Å×·¯¸®½ºÆ® È¹µæ\n");
            } else if(nansu <= 390){
                printf("¼öÇÐ±³»ç ÀÚ°æ´Ü¿ø È¹µæ\n");
            } else if(nansu <= 420){
                printf("ÀÀ¿ø´ÜÀå ¿µ¸Å È¹µæ\n");
            } else if(nansu <= 450){
                printf("ÇÐ±³ 42 È¹µæ\n");
            } else if(nansu <= 480){
                printf("ÈÉÄ£ ´ßº­½½ È¹µæ\n");
            } else if(nansu <= 510){
                printf("»ï°¢ÀÚ Å×µÎ¸® È¹µæ\n");
            } else if(nansu <= 590){
                printf("½Å±Ô ÇÑÁ¤ÆÇ Å×µÎ¸®1 È¹µæ\n");
            } else if(nansu <= 670){
                printf("½Å±Ô ÇÑÁ¤ÆÇ Å×µÎ¸®2 È¹µæ\n");
            } else if(nansu <= 750){
                printf("½Å±Ô ÇÑÁ¤ÆÇ ¸íÆÐ1 È¹µæ\n");
            } else if(nansu <= 830){
                printf("½Å±Ô ÇÑÁ¤ÆÇ ¸íÆÐ2 È¹µæ\n");
            } else if(nansu <= 860){
                printf("½Å¿ø¹Ì»óÀÇ ÀÏÁö È¹µæ\n");
            } else if(nansu <= 870){
                printf("½ÅºñÇÑ ÇÔÃ¢ È¹µæ\n");
            } else if(nansu <= 920){
                printf("·çºí ¸¹ÀÌ È¹µæ\n");
            } else if(nansu <= 970){
                printf("·ç³ª ¸¹ÀÌ È¹µæ\n");
            } else if(nansu <= 1370){
                printf("½ºÆ÷ÀÌµå È¹µæ\n");
            } else if(nansu <= 1770){
                printf("¸¶¹ýÀÇ ¿°»ö¾à ¿©·¯°³ È¹µæ\n");
            } else if(nansu <= 2170){
                printf("½ÅºÐÁõ È¹µæ\n");
            } else if(nansu <= 2570){
                printf("»ç¸Á±¤°íÆÇ ¸¹ÀÌ È¹µæ\n");
            } else if(nansu <= 2970){
                printf("ºÎ°í±â»ç ¸¹ÀÌ È¹µæ\n");
            } else if(nansu <= 3370){
                printf("°í´ë Á¦ÀÛ¼­ ¿©·¯°³ È¹µæ\n");
            } else if(nansu <= 3770){
                printf("¿äÁ¤ÀÇ ¿¬¸¶Á¦ ¿©·¯°³ È¹µæ\n");
            } else if(nansu <= 4170){
                printf("¸íÀåÀÇ ¸ÁÄ¡ È¹µæ\n");
            } else if(nansu <= 4570){
                printf("Å¥ÇÇÆ®ÀÇ È­»ì È¹µæ\n");
            } else if(nansu <= 4970){
                printf("°í±Þ¿±¼­ ¸¹ÀÌ È¹µæ\n");
            } else if(nansu <= 5370){
                printf("Â¡¹úÀÇ ¿±¼­ È¹µæ\n");
            } else if(nansu <= 5770){
                printf("±ôÂ¦ ¿±¼­ ¿©·¯°³ È¹µæ\n");
            } else if(nansu <= 6170){
                printf("È®¼º±â ¸¹ÀÌ È¹µæ\n");
            } else if(nansu <= 6570){
                printf("3Æ¼Ä«µå ÇÑµÎ°³ È¹µæ\n");
            } else if(nansu <= 6970){
                printf("2Æ¼Ä«µå ¿©·¯°³ È¹µæ\n");
            } else if(nansu <= 7420){
                printf("¾Æ¸óµå ÁüÀÎ»§ ¿©·¯°³ È¹µæ\n");
            } else if(nansu <= 7870){
                printf("¼ö»óÇÑ »ç°úÁÖ½º ¿©·¯°³ È¹µæ\n");
            } else if(nansu <= 8320){
                printf("¸ÁÇÑ ¼ºÀûÇ¥ ¸¹ÀÌ È¹µæ\n");
            } else if(nansu <= 8770){
                printf("¹Ý¼º¹® ¿©·¯°³ È¹µæ\n");
            } else if(nansu <= 9385){
                printf("½Å±Ô ÇÑÁ¤ÆÇ Àç·Ã ¾ÆÀÌÅÛ ¿©·¯°³ È¹µæ\n");
            } else if(nansu <= 10000){
                printf("°á»ç´ëÀÇ ¹Ð¼­ ¿©·¯°³ È¹µæ\n");
            } 
            break;
        case 800:
            rand();
            nan = rand();
            nansu = nan % 1000 + 1;
            printf("%d %d", nansu, nan);

            if(nansu <= 35){
                printf("¾ßÀüº´¿øÀÇ ÀÇ»ç È¹µæ\n");
            }else if(nansu <= 70){
                printf("°áÀÇ¿¡ Âù ½Ã¹Î È¹µæ\n");
            }else if(nansu <= 105){
                printf("ÃÖÀü¼±ÀÇ ÀÚ°æ´Ü¿ø È¹µæ\n");
            }else if(nansu <= 125){
                printf("»çÃá±â ¼Ò³à ¸¶´ã È¹µæ\n");
            }else if(nansu <= 145){
                printf("Ä¡Å² ÅÐÀÌ¹ü µµµÏ È¹µæ\n");
            }else if(nansu <= 165){
                printf("¼±µµºÎ¿ø Á¤Ä¡ÀÎ È¹µæ\n");
            }else if(nansu <= 185){
                printf("°úÇÐºÎ¿ø Å×·¯¸®½ºÆ® È¹µæ\n");
            }else if(nansu <= 205){
                printf("¼öÇÐ±³»ç ÀÚ°æ´Ü¿ø\n");
            }else if(nansu <= 225){
                printf("ÀÀ¿ø´ÜÀå ¿µ¸Å È¹µæ\n");
            }else if(nansu <= 245){
                printf("ÇÐ±³ 42 È¹µæ\n");
            }else if(nansu <= 265){
                printf("ÈÉÄ£ ´ßº­½½ È¹µæ\n");
            }else if(nansu <= 285){
                printf("»ï°¢ÀÚ Å×µÎ¸® È¹µæ\n");
            }else if(nansu <= 320){
                printf("½Å±Ô ÇÑÁ¤ÆÇ Å×µÎ¸®1 È¹µæ\n");
            }else if(nansu <= 355){
                printf("½Å±Ô ÇÑÁ¤ÆÇ Å×µÎ¸®2 È¹µæ\n");
            }else if(nansu <= 390){
                printf("½Å±Ô ÇÑÁ¤ÆÇ ¸íÆÐ1 È¹µæ\n");
            }else if(nansu <= 425){
                printf("½Å±Ô ÇÑÁ¤ÆÇ ¸íÆÐ2 È¹µæ\n");
            }else if(nansu <= 450){
                printf("½Å¿ø¹Ì»óÀÇ ÀÏÁö È¹µæ\n");
            }else if(nansu <= 460){
                printf("½ÅºñÇÑÇÕÃ¢ È¹µæ\n");
            }else if(nansu <= 470){
                printf("·çºí ¸¹ÀÌ¸¹ÀÌ È¹µæ(½ÅÇÕÀÌ¶û °°Àº È®·ü)\n");
            }else if(nansu <= 480){
                printf("·ç³ª ¸¹ÀÌ¸¹ÀÌ È¹µæ(½ÅÇÕÀÌ¶û °°Àº È®·ü)\n");
            }else if(nansu <= 520){
                printf("¸¶¹ýÀÇ ¿°»ö¾à ¸¹ÀÌ È¹µæ\n");
            }else if(nansu <= 560){
                printf("Â¡¹úÀÇ ¿±¼­ ¸¹ÀÌ È¹µæ\n");
            }else if(nansu <= 600){
                printf("±ôÂ¦¿±¼­ ¸¹ÀÌ È¹µæ\n");
            }else if(nansu <= 640){
                printf("3Æ¼¾îÄ«µå ¿©·¯°³ È¹µæ\n");
            }else if(nansu <= 680){
                printf("4Æ¼¾îÄ«µå È¹µæ\n");
            }else if(nansu <= 720){
                printf("³°Àº Â¡¹úÀÇ ¿±¼­ ¸¹ÀÌ È¹µæ\n");
            }else if(nansu <= 760){
                printf("ÁÖ»çÀ§ ¿±¼­ ¸¹ÀÌ È¹µæ\n");
            }else if(nansu <= 800){
                printf("¾Æ¸óµå ÁüÀÎ»§ ¿©·¯°³ È¹µæ\n");
            }else if(nansu <= 840){
                printf("¼ö»óÇÑ »ç°úÁÖ½º ¿©·¯°³ È¹µæ\n");
            }else if(nansu <= 880){
                printf("¹Ý¼º¹® ¿©·¯°³ È¹µæ\n");
            }else if(nansu <= 920){
                printf("¸ÁÇÑ ¼ºÀûÇ¥ ¸¹ÀÌ È¹µæ\n");
            }else if(nansu <= 960){
                printf("½Å±Ô ÇÑÁ¤ÆÇ Á¦·Ã ¾ÆÀÌÅÛ ¿©·¯°³ È¹µæ\n");
            }else if(nansu <= 1000){
                printf("°á»ç´ëÀÇ ¹Ð¼­ ¿©·¯°³ È¹µæ\n");
            }
            break;
        default:
         printf("´Ù½Ã ÀÔ·ÂÇØÁà\n");
         goto start;
    }
    system("pause");
}