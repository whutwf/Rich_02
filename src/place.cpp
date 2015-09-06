#include "place.h"

void Place::setPlaceX(unsigned int x)
{
	x_place = x;
}

void Place::setPlaceY(unsigned int y)
{
	y_place = y;
}

/**
*����:setPlaceType(int type)
*����˵�������ͣ�
*�������ܣ����õؿ�����
		0���յأ�1��ռ�У�2����أ�3������
*����ֵ����
*���ߣ�����
*/
void Place::setPlaceType(int type)
{
	placeType = type;
}

void Place::setPlaceOwner(vector<Player>::iterator it)
{
	placeOwner = it;
}

/**
*����:setPlaceSign(char sign)
*����˵����char
*�������ܣ�������ʾ�ַ�
     0���յأ�1��һ���ؿ飻2��2���ؿ飻3��3���ؿ�
*����ֵ����
*���ߣ�����
*/
void Place::setPlaceSign(char sign)
{
	placeSign = sign;
}

/**
*����:setPlaceLevel(int m_level)
*����˵����m_level:������
*�������ܣ����õؿ鼶��
*����ֵ����
*���ߣ�����
*/
void Place::setPlaceLevel(int m_level)
{
	level = m_level;
}

void Place::setPlacePrice(int price)
{
	placePrice = price;
}

int Place::getPlaceType()
{
	return placeType;
}

int Place::getPlacePrice()
{
	return placePrice;
}

unsigned int Place::getPlaceLevel()
{
	return level;
}

unsigned int Place::getPlaceX()
{
	return x_place;
}

unsigned int Place::getPlaceY()
{
	return y_place;
}

char Place::getPlaceSign()
{
	return placeSign;
}

string Place::getPlaceOwnerName()
{
	return placeOwner->getPlayerName();
}

/**
*����:charge(int money)
*����˵����int:�շ�Ǯ��
*�������ܣ��ؿ��շ�,ӵ��������
*����ֵ����
*���ߣ�����
*/
void Place::charge(int money)
{
	int currAssets = placeOwner->getPlayerAssets();
	placeOwner->setPlayerAssets(currAssets + money);
}


//���פ���û�
void Place::pushStayPlayers(vector<Player>::iterator it)
{
	stayPlayers.push(it);
}

vector<Player>::iterator Place::topStayPlayers()
{
	vector<Player>::iterator it;
	it = stayPlayers.top();
	return it;
}

//��ջ�����פ���û�
void Place::popStayPlayers()
{
	stayPlayers.pop();
}

//פ����
int Place::getStayPlayerNum()
{
	return stayPlayers.size();
}
