#ifndef _PLACE_H_
#define _PLACE_H_

#include "player.h"
#include <vector>
#include<stack>

class Place
{
private:
	char placeSign;	//�ؿ���ʾ�ַ�
	unsigned int level; //�ؿ鼶��
	int placeType;	//�ؿ������
	int placePrice;	//�ؿ�ļ۸�

	stack<vector<Player>::iterator > stayPlayers;//פ���û�

	vector<Player>::iterator placeOwner;	//�ؿ�ӵ����
	unsigned int x_place;	//�ؿ�x����
	unsigned int y_place;	//�ؿ�y����

public:
	Place() {}
	~Place() {}
	
	void setPlaceX(unsigned int x);
	void setPlaceY(unsigned int y);
	void setPlaceType(int type);
	void setPlaceOwner(vector<Player>::iterator it);
	void setPlaceSign(char sign);
	void setPlaceLevel(int m_level);
	void setPlacePrice(int price);
	/*
	*������ getPlaceType()
	*����˵������
	*���ܣ���ȡ�ؿ�����
	*����ֵ��int: tyoe
	*���ߣ�
	*/
	int getPlaceType();

	int getPlacePrice();
	unsigned int getPlaceLevel();

	unsigned int getPlaceX();
	unsigned int getPlaceY();
	char getPlaceSign();
	string getPlaceOwnerName();

	/**
	*����:charge(int money)
	*����˵����int:�շ�Ǯ��
	*�������ܣ��ؿ��շ�
	*����ֵ����
	*���ߣ�����
	*/
	void charge(int money);

	//���פ�����
	void pushStayPlayers(vector<Player>::iterator it);


	//��ȡ���פ���û�
	vector<Player>::iterator topStayPlayers();

	//��ջ�����פ���û�
	void popStayPlayers();

	//פ����
	int getStayPlayerNum();

};
#endif
