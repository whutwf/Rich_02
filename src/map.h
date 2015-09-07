#ifndef _MAP_H_
#define _MAP_H_
#include "place.h"
//��ͼ���
const int WIDTH = 29;
const int HEIGHT = 8;
//����ؿ��Ӧ��ϵ
const int _X_Y_PLACE[70][2] = {
	{0,0},{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{0,9},
	{0,10},{0,11},{0,12},{0,13},{0,14},{0,15},{0,16},{0,17},{0,18},{0,19},
	{0,20},{0,21},{0,22},{0,23},{0,24},{0,25},{0,26},{0,27},{0,28},
	{1,28},{2,28},{3,28},{4,28},{5,28},{6,28},
	{7,28},{7,27},{7,26},{7,25},{7,24},{7,23},{7,22},{7,21},{7,20},
	{7,19},{7,18},{7,17},{7,16},{7,15},{7,14},{7,13},{7,12},{7,11},{7,10},
	{7,9},{7,8},{7,7},{7,6},{7,5},{7,4},{7,3},{7,2},{7,1},{7,0},
	{6,0},{5,0},{4,0},{3,0},{2,0},{1,0}
};

//�ڼ������ֿմ���
const int NO_ACTION_PRISION_TIMES = 3;

class Map
{
private:
	Place places[70];
	char mapGraph[HEIGHT][WIDTH];	//�洢��ͼ����
	void init0();
	const int POS_OF_PRISION = 10;
	const int PLACE_NUM = 70;

public:
	Map();
	~Map();

	/*
	*������initMap()
	*����˵������
	*���ܣ���ʼ����ͼ
	*����ֵ����
	*���ߣ�
	*/
	void initMap();

	/*
	*������setMapHereSign(int x, int y, char sign)
	*����˵����x,y����λ�ã�sign���õ�ͼ��ʾ����
	*���ܣ���������Ϊx,y�ĵ�ͼλ����ʾΪ�ƶ��ַ�
	*����ֵ����
	*���ߣ�
	*/
	void setMapHereSign(int x, int y, char sign);

	/*
	*������getMapHereSign(int x, in y)
	*����˵����x,y����λ��
	*���ܣ���ȡx,y�����µ��ַ�
	*����ֵ��char:��ʾ�ַ�
	*���ߣ�
	*/
	char getMapHereSign(int position);

	/*
	*������ printMap()
	*����˵������
	*���ܣ���ӡ��ͼ
	*����ֵ����
	*���ߣ�
	*/
	void printMap();

	//��ȡ�ܵĵؿ���
	int getPlaceNum();

	int getPlaceType(int positio);

	int getPlaceLevel(int position);

	//��ʼ���ؿ�����
	void initPlaceType();
	//��ʼ���ؿ鼶��
	void initPlaceLevel();

	//0���յأ�1��ռ�У�2����أ� -1��ԭ��
	void setPlaceType(int type, int pos);

	//�������صļ���0���յأ�1��һ����2��2��
	void setPlaceLevel(int level, int pos);

	int getPlacePrice(int pos);

	void setPlaceOwner(vector<Player>::iterator it, int pos);
	
	void setPlaceSign(char sign, int pos);

	string getPlaceOwnerName(int pos);

	void charge(int stayCost, int pos);

	//����������������Ϣ
	void cleanMapOfPlayer(vector<Player>::iterator it);

	//פ����
	int getHerePlayerNum(int pos);
	
	vector<Player>::iterator topHerePlayer(int pos);
	void popHerePlayer(int pos);

	void pushHerePlayer(vector<Player>::iterator it, int pos);


};
#endif

