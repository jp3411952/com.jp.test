#pragma once

#ifndef TV_H_
#define TV_H_

class TV;//ʹ�õ�����Ԫ������Ҫǰ������

class Remote
{
public:
	Remote();
	~Remote();
	void setChannel(TV &t, int channel);

private:

	

};



class TV
{
public:
	TV();
	~TV();
	friend void  Remote::setChannel(TV &t, int channel);  //���������Ԫ����������ʹ�ñ��� ˽�г�Ա

private:

};




inline void Remote::setChannel(TV &t, int channel) {};

#endif