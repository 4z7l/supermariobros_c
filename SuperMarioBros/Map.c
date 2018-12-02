#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#include "info.h"

/*===============================Variables===============================*/
char Map[HEIGHT * WIDTH];
char BackGround[HEIGHT * WIDTH];
/*===============================Functions===============================*/

void loadTextMap(char *fileName, int mapNum);
void setObjectToMap(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset);


void mapInitialize(int stage)
{

	switch ((stage-1)/10)
	{
	case 0:
		loadTextMap("Map1.txt", 1);
		break;
	case 1:
		loadTextMap("Map2.txt", 1);
		break;
	case 4:
		loadTextMap("Map4.txt", 1);
		break;

	default:
		loadTextMap("Map1.txt", 1);
		break;
	}

	switch (stage)
	{
	//=====================================[WORLD 1]=====================================
	case 1:
		//���⿡ ��� ����
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 168, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 38, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 360, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 260, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);


		// ������Ʈ
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 150, 110 - PIPE_TOP_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 150, 110);

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 0, HEIGHT - BRICK_HEIGHT);
		for (int i = 0; i <8; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 64 + i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		for (int i = 0; i <3; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 380 + i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;

	case 2:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 360, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 260, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);


		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}


		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);
		break;
	case 3:


		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 420, HEIGHT - BRICK_HEIGHT * 4);

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT * 4);

		break;
	case 4:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);


		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		//���
		for (int i = 1; i < 3; i++)
		{
			for (int j = 0; j < i; j++) {
				setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, (i + 1) * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT - BRICK_HEIGHT * (j + 1));
			}
		}
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j <= i; j++) {
				setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, (i + 5) * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT - BRICK_HEIGHT * j);
			}
		}

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;
	case 5:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);


		// �ٴ�
		for (int i = 0; i < 8; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		for (int i = 12; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		//��
		for (int i = 1; i < 6; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * (i + 1));
		}

		// ���
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 3);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 5 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 5);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 3);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 5);

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;


	case 6:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);


		// �ٴ�

		for (int i = 0; i < 2; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		for (int i = 12; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}



		// ���
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 3);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 5 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 5);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 3);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 5);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 3);

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;

	case 7:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 360, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 260, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);


		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}


		for (int i = 2; i < 12; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		}

		for (int i = 13; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
		}
		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - 6 * BRICK_HEIGHT);

		break;


	case 8:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 106, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 220, 70);


		// �ٴ�
		for (int i = 0; i < 1; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 2 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 2 * BRICK_WIDTH, HEIGHT - 7 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 4 * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 4 * BRICK_WIDTH, HEIGHT - 1 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 6 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 6 * BRICK_WIDTH, HEIGHT - 7 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 12 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 420, HEIGHT - 6 * BRICK_HEIGHT);

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - 6 * BRICK_HEIGHT);

		break;

	case 9:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 360, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 260, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);


		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);


		for (int i = 13; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
		}
		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - 6 * BRICK_HEIGHT);

		break;

	case 10:

		//���⿡ ��� ����
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 168, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 38, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 360, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);

		// �ٴ�
		for (int i = 0; i < 4; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		for (int i = 11; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		//���
		for (int i = 1; i < 3; i++)
		{
			for (int j = 0; j < i; j++) {
				setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, (i + 1) * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT - BRICK_HEIGHT * (j + 1));
			}
		}
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 5 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);



		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);
		break;
	//=====================================[WORLD 2]=====================================
	case 11:

		// õ��
		for (int i = 0; i < 12; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH + 100, 0);
		}

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		// ������
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);



		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;
	case 12:

		// õ��
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
		}

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);


		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;
	case 13:

		// õ��
		for (int i = 0; i < 10; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 2 * BRICK_HEIGHT);
		}

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 12 * BRICK_WIDTH, 5 * BRICK_HEIGHT);


		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 0, 16);

		break;

	case 14:

		// õ��
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
		}

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			if ((i+1) % 2 == 0) continue;
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}


		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 445, HEIGHT - 16 - BRICK_HEIGHT);

		break;
	case 15:

		setMarioPos(0, HEIGHT - 2 * BRICK_HEIGHT);

		// õ��
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
		}

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 1 * BRICK_HEIGHT);
		}

		// �ٴ�
		for (int i = 0; i < 13; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		}
		
		setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, THORN_WIDTH, HEIGHT - 4 * THORN_HEIGHT);
		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 0, HEIGHT - 16 - 3 * BRICK_HEIGHT);

		break;
	//=====================================[WORLD 4]=====================================
	case 41:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			if (i >= 4 && i <= 6 || i >= 8 && i <= 10)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				continue;
			}
			//�����۹ڽ� �߰�
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
			if (i == 0 || i == 1)
				for (int j = 1; j<4; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - j * BRICK_HEIGHT);
			if (i == 2)
				for (int j = 1; j < 3; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - j * BRICK_HEIGHT);
		}
		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);
		break;

	case 42:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			if (i == 3)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				continue;
			}
			if (i >= 13)
				continue;
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 1 * BRICK_WIDTH, 4 * BRICK_HEIGHT);

		//������
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 5 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 5 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);

		//������ ���� ���� �߰�

		// �Ųٷε��ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITEREVERSE), 32, 16, 430, BRICK_HEIGHT);
		break;

	case 43:
		

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			if (i >= 3 && i <= 11 && i != 7)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 5 * BRICK_HEIGHT);
				continue;
			}
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		//�ź��� �߰�

		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);
		break;

	case 44:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			if (i == 4)
			{
				for (int j = 4; j <15; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, j * BRICK_WIDTH, 5 * BRICK_HEIGHT);
			}
			if (i == 5)
			{
				for (int j = 5; j < 15; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, j * BRICK_WIDTH, 4 * BRICK_HEIGHT);
			}
			if (i == 6)
			{
				for (int j = 6; j < 15; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, j * BRICK_WIDTH, 3 * BRICK_HEIGHT);
			}
			if (i == 14)
				continue;
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		//�����߰�

		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 440, 2 * BRICK_HEIGHT);
		break;

	case 45:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			if (i == 3 || i == 4 || i == 6 || i == 7 || i == 13)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				continue;
			}
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
			if (i >= 0 && i <= 2)
			{
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 3 * BRICK_HEIGHT);
				if (i == 2)
					continue;
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
			}
			if (i == 5)
			{
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
			}
			if (i == 8)
			{
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
			}
			if (i == 9)
			{
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 3 * BRICK_HEIGHT);
			}
			if (i >= 10 && i <= 11)
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 3 * BRICK_HEIGHT);
			if (i >= 11 && i <= 12)
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 4 * BRICK_HEIGHT);
			if (i == 14)
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);

		}
		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 20 + 10 * BRICK_WIDTH, 2 * BRICK_HEIGHT);
		break;

	case 46:

	
		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);

			if (i >= 0 && i <= 2 || i >= 6 && i <= 9 || i >= 13 && i <= 14)
			{
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 3 * BRICK_HEIGHT);
				if (i >= 0 && i <= 2)
					continue;
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 4 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 5 * BRICK_HEIGHT);
			}
		}
		//�ź��� 3�����߰�

		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 435, HEIGHT - 16 - BRICK_HEIGHT);
		break;

	case 47:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			if (i == 4 || i == 8)
				for (int j = 1; j <= 6; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - j * BRICK_HEIGHT);
			if (i >= 5 && i <= 7)
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
			if (i == 11)
				for (int j = 4; j <= 7; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - j * BRICK_HEIGHT);
			if (i >= 5 && i <= 7)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				continue;
			}
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 1 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 12 * BRICK_WIDTH, HEIGHT - 8 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 13 * BRICK_WIDTH, HEIGHT - 8 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 14 * BRICK_WIDTH, HEIGHT - 8 * BRICK_HEIGHT);

		//����2�����߰�

		//������
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 13 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 13 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);

		// �Ųٷε��ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITEREVERSE), 32, 16, 430, HEIGHT - 7 * BRICK_HEIGHT);
		break;
	case 48:

		for (int i = 0; i < 15; i++)
		{
			if (i >= 4 && i <= 8 && i != 6)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				continue;
			}
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		for (int i = 12; i <= 14; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		}
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		for (int i = 2; i <= 9; i++)
		{
			if (i == 4 || i == 6 || i == 8)
				continue;
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
		}
		for (int i = 0; i <= 1; i++)
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 7 * BRICK_HEIGHT);
		//�ź��� �θ���

		//������-������
		setObjectToMap(getBackGroundObject(DOORBOSS), 64, 16, 0, HEIGHT - 8 * BRICK_HEIGHT);

		break;
	case 49:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 2 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 4 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 4 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 4 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);

		// ���� ���̴� ��ġ
		setObjectToMap(getBackGroundObject(HAMMER), 32, 16, 435, HEIGHT - 16 - BRICK_HEIGHT);
		//���ĺҷ�����
		break;

	case 50:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		//���ֺҷ�����
		break;
	default:
		break;
	}







	//��� ���� �����صα�
	memcpy(BackGround, Map, HEIGHT * WIDTH * sizeof(char));
}

void loadTextMap(char *fileName, int mapNum)
{
	char tmp;
	int k = 0;
	FILE *fp = fopen(fileName, "r");

	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH + 1; x++)
		{
			fscanf(fp, "%c", &tmp);
			if (tmp >= '0' && tmp <= '9')
				Map[x + WIDTH * y] = tmp;
		}
	}
	fclose(fp);
}

char getMapPixel(int x, int y) {
	return Map[x + WIDTH * y];
}

void setMapPixel(int x, int y, char p)
{
	Map[x + WIDTH * y] = p;
}


void setObjectToMap(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset)
{
	char tmp;

	for (int y = 0; y < imageHeight; y++)
	{
		for (int x = 0; x < imageWidth; x++)
		{
			tmp = img[x + imageWidth * y];
			if (tmp == '0') {
				continue;		// 0 �̸� �������� �ٲ��� ����(��ĭǥ��)
			}
			Map[(x + xoffset) + WIDTH * (y + yoffset)] = tmp;
		}
	}

}

void deleteObjectFromMap(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset) {
	char tmp;

	for (int y = 0; y < imageHeight; ++y)
	{
		for (int x = 0; x < imageWidth; ++x)
		{
			tmp = img[x + imageWidth * y];

			// ��ġ�ºκ� ó��.. ������ �׸������� �������� �ܻ��� ����

			//if (tmp == '0') {
			//	continue;
			//}

			Map[(x + xoffset) + WIDTH * (y + yoffset)] = BackGround[(x + xoffset) + WIDTH * (y + yoffset)];
		}
	}
}

extern int isGameOver;
int detectCollisionMap(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset)
{
	char tmp;

	for (int y = 0; y < imageHeight; y++)
	{
		for (int x = 0; x < imageWidth; x++)
		{
			tmp = img[x + imageWidth * y];
			// ���� ���� ���..
			//if (tmp == '0')
			//	continue;
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == '1')	// 1�� ��������
				return YES;
		}
	}
	return NO;
}

int detectCollisionObject(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset)
{
	char tmp;

	for (int y = 0; y < imageHeight; y++)
	{
		for (int x = 0; x < imageWidth; x++)
		{
			//if (img[x + imageWidth * y] == '0') continue;	//���� �и�������� �ּ�Ǯ�� (���ٴ� detect �ϴµ� ��Ǯ, '9' �� detect ����)

			// '9' �� �ٴ�(��������)
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == '9') return 1;

			// A~P�� NPC 
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] >= 'A' && Map[(x + xoffset) + WIDTH * (y + yoffset)] <= 'P') return 1;

			// '8' �� ��
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == '8') return 2;	//��������

																				// 'W' �� �ϾṮ
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == 'W') return 2;	//��������

																				// '7'�� �����׵θ�
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == '7') return 3;	//���� ȹ��
		}
	}
	return 0;
}

int GumbadetectCollisionObject(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset)
{
	char tmp;

	for (int y = 0; y < imageHeight; y++)
	{
		for (int x = 0; x < imageWidth; x++)
		{
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == '9') return YES;
		}
	}
	return NO;
}


void drawMap()	// should be replaced with camera
{
	setConsoleBuffer(Map, WIDTH, HEIGHT, 0, 0);
}