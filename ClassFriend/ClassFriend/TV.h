#pragma once

#ifndef TV_H_
#define TV_H_

class TV;//使用单个友元函数需要前向声明

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
	friend void  Remote::setChannel(TV &t, int channel);  //其他类的友元函数，可以使用本类 私有成员

private:

};




inline void Remote::setChannel(TV &t, int channel) {};

#endif