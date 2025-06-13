#pragma once
#include<Windows.h>
using namespace System;
class PlayingKeys
{
public:
	int count = 0;
	void PlayButton1()  //22click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("1.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton2()   //19click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("2.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton3()    //1click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("3.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton4()   //2click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("4.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton5()   //3click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("5.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton6()    //4click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("6.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton7()    //5click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("7.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton8()     //6click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("8.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton9()    //7click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("9.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton10()    //8click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("10.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton11()   //9click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("11.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton12()   //10click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("12.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton13()   //11click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("13.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton14()   //20click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("14.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton15()  //21click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("15.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton16()   //23click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("16.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton17()  //24click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("17.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton18()   //28click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("18.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton19()  //27click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("19.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton20()  //26click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("20.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton21()  //25click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("21.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton22()  //37click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("22.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton23()  //36click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("23.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton24()   //35click
	{
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("24.wav");
		player->Load();
		player->PlaySync();
	}
	void PlayButton25()          //34click
	{
		Beep(480, 700);
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void playBlack1()  //17click
	{
	    Console::Beep(110, 700);
	}
	void playBlack2()  //18click
	{
	    Console::Beep(115, 700);
	}
	void playBlack3()   //16click
	{
	    Console::Beep(121, 700);
	}
	void playBlack4()   //14click
	{
	    Console::Beep(132, 700);
	}
	void playBlack5()   //13click
	{
	    Console::Beep(139, 700);
	}
	void playBlack6()  //15click
	{
		Console::Beep(154, 700);
	}
	void playBlack7()  //12click
	{
		Console::Beep(165, 700);
	}
	void playBlack8()  //39click
	{
		Console::Beep(178, 700);
	}
	void playBlack9()  //38click
	{
		Console::Beep(200, 700);
	}
	void playBlack10() //40click
	{
		Console::Beep(217, 700);
	}
	void playBlack11()  //42click
	{
		Console::Beep(247, 700);
	}
	void playBlack12()  //43click
	{
		Console::Beep(269, 700);
	}
	void playBlack13()  //30click
	{
		Console::Beep(295, 700);
	}
	void playBlack14()  //45click
	{
		Console::Beep(339, 700);
	}
	void playBlack15()  //46click
	{
		Console::Beep(373, 700);
	}
	void playBlack16()  //47click
	{
		Console::Beep(431, 700);
	}
	void playBlack17()  //48click
	{
		Console::Beep(477, 700);
	}
	void playBlack18()  //29click
	{
		Console::Beep(528, 700);
	}
};
