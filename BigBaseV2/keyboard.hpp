#pragma once

#define VK_NOTHING	0x00				/*NULL*/
#define VK_KEY_0	0x30                //('0')	0
#define VK_KEY_1	0x31                //('1')	1
#define VK_KEY_2	0x32                //('2')	2
#define VK_KEY_3	0x33                //('3')	3
#define VK_KEY_4	0x34                //('4')	4
#define VK_KEY_5	0x35                //('5')	5
#define VK_KEY_6	0x36                //('6')	6
#define VK_KEY_7	0x37                //('7')	7
#define VK_KEY_8	0x38                //('8')	8
#define VK_KEY_9	0x39                //('9')	9
#define VK_KEY_A	0x41                //('A')	A
#define VK_KEY_B	0x42                //('B')	B
#define VK_KEY_C	0x43                //('C')	C
#define VK_KEY_D	0x44                //('D')	D
#define VK_KEY_E	0x45                //('E')	E
#define VK_KEY_F	0x46                //('F')	F
#define VK_KEY_G	0x47                //('G')	G
#define VK_KEY_H	0x48                //('H')	H
#define VK_KEY_I	0x49                //('I')	I
#define VK_KEY_J	0x4A                //('J')	J
#define VK_KEY_K	0x4B                //('K')	K
#define VK_KEY_L	0x4C                //('L')	L
#define VK_KEY_M	0x4D                //('M')	M
#define VK_KEY_N	0x4E                //('N')	N
#define VK_KEY_O	0x4F                //('O')	O
#define VK_KEY_P	0x50                //('P')	P
#define VK_KEY_Q	0x51                //('Q')	Q
#define VK_KEY_R	0x52                //('R')	R
#define VK_KEY_S	0x53                //('S')	S
#define VK_KEY_T	0x54                //('T')	T
#define VK_KEY_U	0x55                //('U')	U
#define VK_KEY_V	0x56                //('V')	V
#define VK_KEY_W	0x57                //('W')	W
#define VK_KEY_X	0x58                //('X')	X
#define VK_KEY_Y	0x59                //('Y')	Y
#define VK_KEY_Z	0x5A                //('Z')	Z

#define KEYSIZE 255
namespace big {
	class Keyboard
	{
	public:
		static void OnKeyboardMessage(DWORD key, WORD repeats, uint8_t scanCode, BOOL isExtended, BOOL isWithAlt, BOOL wasDownBefore, BOOL isUpNow);
		void Update();
		bool KeyDown(DWORD key);
		bool KeyJustUp(DWORD key, bool exclusive = true);
		bool KeyJustDown(DWORD button);
		int GetLastKey() { return m_lastKey; }
		void ResetKeyState(DWORD key);

	private:
		int m_lastKey;
		const int m_NOWPERIOD = 100;
		const int m_MAXDOWN = 600000; // ms

		struct {
			DWORD time;
			BOOL m_isWithAlt;
			BOOL m_wasDownBefore;
			BOOL m_isUpNow;
			bool m_justUp;
			bool m_justDown;
		} m_keyStates[KEYSIZE];
	};

	Keyboard* GetKeyboard();

	bool KeyDown(DWORD key);
	bool KeyJustUp(DWORD key, bool exclusive = true);
	bool KeyJustDown(DWORD key);

	static const char* g_keyNamesInstructional[254] = {
		"F10",
		"F10",
		"F10",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"BACKSPACE",
		"TAB",
		"TAB",
		"TAB",
		"NUM 5",
		"ENTER",
		"ENTER",
		"ENTER",
		"SHIFT",
		"CTRL",
		"ALT",
		"ALT",
		"CAPSLOCK",
		"CAPSLOCK",
		"CAPSLOCK",
		"CAPSLOCK",
		"CAPSLOCK",
		"CAPSLOCK",
		"CAPSLOCK",
		"ESC",
		"ESC",
		"ESC",
		"ESC",
		"ESC",
		"SPACE",
		"NUM 9",
		"NUM 3",
		"NUM 1",
		"NUM 7",
		"LEFT",
		"UP",
		"RIGHT",
		"DOWN",
		"NUM 2",
		"NUM 2",
		"NUM 2",
		"NUM 2",
		"NUM 0",
		"DELETE",
		"NUM DECIMAL",
		"0",
		"1",
		"2",
		"3",
		"4",
		"5",
		"6",
		"7",
		"8",
		"9",
		"9",
		"9",
		"9",
		"9",
		"9",
		"9",
		"9",
		"A",
		"B",
		"C",
		"D",
		"E",
		"F",
		"G",
		"H",
		"I",
		"J",
		"K",
		"L",
		"M",
		"N",
		"O",
		"P",
		"Q",
		"R",
		"S",
		"T",
		"U",
		"V",
		"W",
		"X",
		"Y",
		"Z",
		"Z",
		"Z",
		"Z",
		"Z",
		"Z",
		"N0",
		"N1",
		"N2",
		"N3",
		"N4",
		"N5",
		"N6",
		"N7",
		"N8",
		"N9",
		"*",
		"NUM PLUS",
		"NUM PLUS",
		"NUM SUB",
		"NUM DECIMAL",
		"/",
		"F1",
		"F2",
		"F3",
		"F4",
		"F5",
		"F6",
		"F7",
		"F8",
		"F9",
		"F10",
		"F11",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"Pause",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SHIFT",
		"RIGHT SHIFT",
		"CTRL",
		"CTRL",
		"ALT",
		"ALT",
		"ALT",
		"ALT",
		"ALT",
		"ALT",
		"ALT",
		"ALT",
		"M",
		"D",
		"C",
		"B",
		"P",
		"Q",
		"J",
		"G",
		"G",
		"G",
		"G",
		"F",
		"F",
		"F",
		";",
		"=",
		",",
		"-",
		".",
		"/",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"[",
		"null",
		"]",
		"ACUTE/CEDILLA",
		"ACUTE/CEDILLA",
		"ACUTE/CEDILLA",
		"ACUTE/CEDILLA",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null"
	};
	static const char* g_keyNames[254] = {
		"",
		"F10",
		"F10",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"BACKSPACE",
		"TAB",
		"TAB",
		"TAB",
		"NUM 5",
		"ENTER",
		"ENTER",
		"ENTER",
		"SHIFT",
		"CTRL",
		"ALT",
		"ALT",
		"CAPSLOCK",
		"CAPSLOCK",
		"CAPSLOCK",
		"CAPSLOCK",
		"CAPSLOCK",
		"CAPSLOCK",
		"CAPSLOCK",
		"ESC",
		"ESC",
		"ESC",
		"ESC",
		"ESC",
		"SPACE",
		"NUM 9",
		"NUM 3",
		"NUM 1",
		"NUM 7",
		"LEFT",
		"UP",
		"RIGHT",
		"DOWN",
		"NUM 2",
		"NUM 2",
		"NUM 2",
		"NUM 2",
		"NUM 0",
		"DELETE",
		"NUM DECIMAL",
		"0",
		"1",
		"2",
		"3",
		"4",
		"5",
		"6",
		"7",
		"8",
		"9",
		"9",
		"9",
		"9",
		"9",
		"9",
		"9",
		"9",
		"A",
		"B",
		"C",
		"D",
		"E",
		"F",
		"G",
		"H",
		"I",
		"J",
		"K",
		"L",
		"M",
		"N",
		"O",
		"P",
		"Q",
		"R",
		"S",
		"T",
		"U",
		"V",
		"W",
		"X",
		"Y",
		"Z",
		"Z",
		"Z",
		"Z",
		"Z",
		"Z",
		"NUM 0",
		"NUM 1",
		"NUM 2",
		"NUM 3",
		"NUM 4",
		"NUM 5",
		"NUM 6",
		"NUM 7",
		"NUM 8",
		"NUM 9",
		"*",
		"NUM PLUS",
		"NUM PLUS",
		"NUM SUB",
		"NUM DECIMAL",
		"/",
		"F1",
		"F2",
		"F3",
		"F4",
		"F5",
		"F6",
		"F7",
		"F8",
		"F9",
		"F10",
		"F11",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"F12",
		"Pause",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SCROLL LOCK",
		"SHIFT",
		"RIGHT SHIFT",
		"CTRL",
		"CTRL",
		"ALT",
		"ALT",
		"ALT",
		"ALT",
		"ALT",
		"ALT",
		"ALT",
		"ALT",
		"M",
		"D",
		"C",
		"B",
		"P",
		"Q",
		"J",
		"G",
		"G",
		"G",
		"G",
		"F",
		"F",
		"F",
		";",
		"=",
		",",
		"-",
		".",
		"/",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"A",
		"B",
		"X",
		"Y",
		"Left button",
		"Right button",
		"Left trigger",
		"Right trigger",
		"Left stick",
		"Right stick",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"GRAVE",
		"[",
		"null",
		"]",
		"ACUTE/CEDILLA",
		"ACUTE/CEDILLA",
		"ACUTE/CEDILLA",
		"ACUTE/CEDILLA",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null",
		"null"
	};
}