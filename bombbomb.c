#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand((unsigned)time(NULL));
    int nansu, nan, luna;
start:
    printf("���? \n");
    scanf("%d", &luna);
    switch(luna){
        case 200:
            rand();
            nan = rand();
            nansu = nan % 10000 + 1;
            printf("%d %d", nansu, nan);
            if(nansu <= 80){
                printf("���������� �ǻ� ȹ��\n");
            } else if(nansu <= 160){
                printf("���ǿ� �� �ù� ȹ��\n");
            } else if(nansu <= 240){
                printf("�������� �ڰ�ܿ� ȹ��\n");
            } else if(nansu <= 270){
                printf("����� �ҳ� ���� ȹ��\n");
            } else if(nansu <= 300){
                printf("ġŲ ���̹� ���� ȹ��\n");
            } else if(nansu <= 330){
                printf("�����ο� ��ġ�� ȹ��\n");
            } else if(nansu <= 360){
                printf("���кο� �׷�����Ʈ ȹ��\n");
            } else if(nansu <= 390){
                printf("���б��� �ڰ�ܿ� ȹ��\n");
            } else if(nansu <= 420){
                printf("�������� ���� ȹ��\n");
            } else if(nansu <= 450){
                printf("�б� 42 ȹ��\n");
            } else if(nansu <= 480){
                printf("��ģ �ߺ��� ȹ��\n");
            } else if(nansu <= 510){
                printf("�ﰢ�� �׵θ� ȹ��\n");
            } else if(nansu <= 590){
                printf("�ű� ������ �׵θ�1 ȹ��\n");
            } else if(nansu <= 670){
                printf("�ű� ������ �׵θ�2 ȹ��\n");
            } else if(nansu <= 750){
                printf("�ű� ������ ����1 ȹ��\n");
            } else if(nansu <= 830){
                printf("�ű� ������ ����2 ȹ��\n");
            } else if(nansu <= 860){
                printf("�ſ��̻��� ���� ȹ��\n");
            } else if(nansu <= 870){
                printf("�ź��� ��â ȹ��\n");
            } else if(nansu <= 920){
                printf("��� ���� ȹ��\n");
            } else if(nansu <= 970){
                printf("�糪 ���� ȹ��\n");
            } else if(nansu <= 1370){
                printf("�����̵� ȹ��\n");
            } else if(nansu <= 1770){
                printf("������ ������ ������ ȹ��\n");
            } else if(nansu <= 2170){
                printf("�ź��� ȹ��\n");
            } else if(nansu <= 2570){
                printf("��������� ���� ȹ��\n");
            } else if(nansu <= 2970){
                printf("�ΰ��� ���� ȹ��\n");
            } else if(nansu <= 3370){
                printf("��� ���ۼ� ������ ȹ��\n");
            } else if(nansu <= 3770){
                printf("������ ������ ������ ȹ��\n");
            } else if(nansu <= 4170){
                printf("������ ��ġ ȹ��\n");
            } else if(nansu <= 4570){
                printf("ť��Ʈ�� ȭ�� ȹ��\n");
            } else if(nansu <= 4970){
                printf("��޿��� ���� ȹ��\n");
            } else if(nansu <= 5370){
                printf("¡���� ���� ȹ��\n");
            } else if(nansu <= 5770){
                printf("��¦ ���� ������ ȹ��\n");
            } else if(nansu <= 6170){
                printf("Ȯ���� ���� ȹ��\n");
            } else if(nansu <= 6570){
                printf("3Ƽī�� �ѵΰ� ȹ��\n");
            } else if(nansu <= 6970){
                printf("2Ƽī�� ������ ȹ��\n");
            } else if(nansu <= 7420){
                printf("�Ƹ�� ���λ� ������ ȹ��\n");
            } else if(nansu <= 7870){
                printf("������ ����ֽ� ������ ȹ��\n");
            } else if(nansu <= 8320){
                printf("���� ����ǥ ���� ȹ��\n");
            } else if(nansu <= 8770){
                printf("�ݼ��� ������ ȹ��\n");
            } else if(nansu <= 9385){
                printf("�ű� ������ ��� ������ ������ ȹ��\n");
            } else if(nansu <= 10000){
                printf("������ �м� ������ ȹ��\n");
            } 
            break;
        case 800:
            rand();
            nan = rand();
            nansu = nan % 1000 + 1;
            printf("%d %d", nansu, nan);

            if(nansu <= 35){
                printf("���������� �ǻ� ȹ��\n");
            }else if(nansu <= 70){
                printf("���ǿ� �� �ù� ȹ��\n");
            }else if(nansu <= 105){
                printf("�������� �ڰ�ܿ� ȹ��\n");
            }else if(nansu <= 125){
                printf("����� �ҳ� ���� ȹ��\n");
            }else if(nansu <= 145){
                printf("ġŲ ���̹� ���� ȹ��\n");
            }else if(nansu <= 165){
                printf("�����ο� ��ġ�� ȹ��\n");
            }else if(nansu <= 185){
                printf("���кο� �׷�����Ʈ ȹ��\n");
            }else if(nansu <= 205){
                printf("���б��� �ڰ�ܿ�\n");
            }else if(nansu <= 225){
                printf("�������� ���� ȹ��\n");
            }else if(nansu <= 245){
                printf("�б� 42 ȹ��\n");
            }else if(nansu <= 265){
                printf("��ģ �ߺ��� ȹ��\n");
            }else if(nansu <= 285){
                printf("�ﰢ�� �׵θ� ȹ��\n");
            }else if(nansu <= 320){
                printf("�ű� ������ �׵θ�1 ȹ��\n");
            }else if(nansu <= 355){
                printf("�ű� ������ �׵θ�2 ȹ��\n");
            }else if(nansu <= 390){
                printf("�ű� ������ ����1 ȹ��\n");
            }else if(nansu <= 425){
                printf("�ű� ������ ����2 ȹ��\n");
            }else if(nansu <= 450){
                printf("�ſ��̻��� ���� ȹ��\n");
            }else if(nansu <= 460){
                printf("�ź�����â ȹ��\n");
            }else if(nansu <= 470){
                printf("��� ���̸��� ȹ��(�����̶� ���� Ȯ��)\n");
            }else if(nansu <= 480){
                printf("�糪 ���̸��� ȹ��(�����̶� ���� Ȯ��)\n");
            }else if(nansu <= 520){
                printf("������ ������ ���� ȹ��\n");
            }else if(nansu <= 560){
                printf("¡���� ���� ���� ȹ��\n");
            }else if(nansu <= 600){
                printf("��¦���� ���� ȹ��\n");
            }else if(nansu <= 640){
                printf("3Ƽ��ī�� ������ ȹ��\n");
            }else if(nansu <= 680){
                printf("4Ƽ��ī�� ȹ��\n");
            }else if(nansu <= 720){
                printf("���� ¡���� ���� ���� ȹ��\n");
            }else if(nansu <= 760){
                printf("�ֻ��� ���� ���� ȹ��\n");
            }else if(nansu <= 800){
                printf("�Ƹ�� ���λ� ������ ȹ��\n");
            }else if(nansu <= 840){
                printf("������ ����ֽ� ������ ȹ��\n");
            }else if(nansu <= 880){
                printf("�ݼ��� ������ ȹ��\n");
            }else if(nansu <= 920){
                printf("���� ����ǥ ���� ȹ��\n");
            }else if(nansu <= 960){
                printf("�ű� ������ ���� ������ ������ ȹ��\n");
            }else if(nansu <= 1000){
                printf("������ �м� ������ ȹ��\n");
            }
            break;
        default:
         printf("�ٽ� �Է�����\n");
         goto start;
    }
    system("pause");
}