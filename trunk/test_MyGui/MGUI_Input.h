#pragma once

#include "MGUI_Entry.h"

namespace Myway {

	struct MGUI_ENTRY MGUI_Input
	{
		// Windows virtual keys
		enum VirtualKey
		{
			VLK_LBUTTON = 0x01,
			VLK_RBUTTON = 0x02,
			VLK_CANCEL = 0x03,
			VLK_MBUTTON = 0x04, /* NOT contiguous with L & RBUTTON */

			VLK_XBUTTON1 = 0x05, /* NOT contiguous with L & RBUTTON */
			VLK_XBUTTON2 = 0x06, /* NOT contiguous with L & RBUTTON */

			/*
				0x07 : unassigned
			*/

			VLK_BACK = 0x08,
			VLK_TAB = 0x09,

			/*
				0x0A - 0x0B : reserved
			*/

			VLK_CLEAR = 0x0C,
			VLK_RETURN = 0x0D,

			VLK_SHIFT = 0x10,
			VLK_CONTROL = 0x11,
			VLK_MENU = 0x12,
			VLK_PAUSE = 0x13,
			VLK_CAPITAL = 0x14,

			VLK_KANA = 0x15,
			VLK_HANGEUL = 0x15, /* old name - should be here for compatibility */
			VLK_HANGUL = 0x15,
			VLK_JUNJA = 0x17,
			VLK_FINAL = 0x18,
			VLK_HANJA = 0x19,
			VLK_KANJI = 0x19,

			VLK_ESCAPE = 0x1B,

			VLK_CONVERT = 0x1C,
			VLK_NONCONVERT = 0x1D,
			VLK_ACCEPT = 0x1E,
			VLK_MODECHANGE = 0x1F,

			VLK_SPACE = 0x20,
			VLK_PRIOR = 0x21,
			VLK_NEXT = 0x22,
			VLK_END = 0x23,
			VLK_HOME = 0x24,
			VLK_LEFT = 0x25,
			VLK_UP = 0x26,
			VLK_RIGHT = 0x27,
			VLK_DOWN = 0x28,
			VLK_SELECT = 0x29,
			VLK_PRINT = 0x2A,
			VLK_EXECUTE = 0x2B,
			VLK_SNAPSHOT = 0x2C,
			VLK_INSERT = 0x2D,
			VLK_DELETE = 0x2E,
			VLK_HELP = 0x2F,

			/*
				VLK_0 - VLK_9 are the same as ASCII '0' - '9' (0x30 - 0x39)
				0x40 : unassigned
				VLK_A - VLK_Z are the same as ASCII 'A' - 'Z' (0x41 - 0x5A)
			*/

			VLK_0 = 0x30,
			VLK_1 = 0x31,
			VLK_2 = 0x32,
			VLK_3 = 0x33,
			VLK_4 = 0x34,
			VLK_5 = 0x35,
			VLK_6 = 0x36,
			VLK_7 = 0x37,
			VLK_8 = 0x38,
			VLK_9 = 0x39,
			VLK_A = 0x41,
			VLK_B = 0x42,
			VLK_C = 0x43,
			VLK_D = 0x44,
			VLK_E = 0x45,
			VLK_F = 0x46,
			VLK_G = 0x47,
			VLK_H = 0x48,
			VLK_I = 0x49,
			VLK_J = 0x4A,
			VLK_K = 0x4B,
			VLK_L = 0x4C,
			VLK_M = 0x4D,
			VLK_N = 0x4E,
			VLK_O = 0x4F,
			VLK_P = 0x50,
			VLK_Q = 0x51,
			VLK_R = 0x52,
			VLK_S = 0x53,
			VLK_T = 0x54,
			VLK_U = 0x55,
			VLK_V = 0x56,
			VLK_W = 0x57,
			VLK_X = 0x58,
			VLK_Y = 0x59,
			VLK_Z = 0x5A,

			VLK_LWIN = 0x5B,
			VLK_RWIN = 0x5C,
			VLK_APPS = 0x5D,

			/*
				0x5E : reserved
			*/

			VLK_SLEEP = 0x5F,

			VLK_NUMPAD0 = 0x60,
			VLK_NUMPAD1 = 0x61,
			VLK_NUMPAD2 = 0x62,
			VLK_NUMPAD3 = 0x63,
			VLK_NUMPAD4 = 0x64,
			VLK_NUMPAD5 = 0x65,
			VLK_NUMPAD6 = 0x66,
			VLK_NUMPAD7 = 0x67,
			VLK_NUMPAD8 = 0x68,
			VLK_NUMPAD9 = 0x69,
			VLK_MULTIPLY = 0x6A,
			VLK_ADD = 0x6B,
			VLK_SEPARATOR = 0x6C,
			VLK_SUBTRACT = 0x6D,
			VLK_DECIMAL = 0x6E,
			VLK_DIVIDE = 0x6F,
			VLK_F1 = 0x70,
			VLK_F2 = 0x71,
			VLK_F3 = 0x72,
			VLK_F4 = 0x73,
			VLK_F5 = 0x74,
			VLK_F6 = 0x75,
			VLK_F7 = 0x76,
			VLK_F8 = 0x77,
			VLK_F9 = 0x78,
			VLK_F10 = 0x79,
			VLK_F11 = 0x7A,
			VLK_F12 = 0x7B,
			VLK_F13 = 0x7C,
			VLK_F14 = 0x7D,
			VLK_F15 = 0x7E,
			VLK_F16 = 0x7F,
			VLK_F17 = 0x80,
			VLK_F18 = 0x81,
			VLK_F19 = 0x82,
			VLK_F20 = 0x83,
			VLK_F21 = 0x84,
			VLK_F22 = 0x85,
			VLK_F23 = 0x86,
			VLK_F24 = 0x87,

			/*
				0x88 - 0x8F : unassigned
			*/

			VLK_NUMLOCK = 0x90,
			VLK_SCROLL = 0x91,

			/*
				NEC PC-9800 kbd definitions
			*/
			VLK_OEM_NEC_EQUAL = 0x92, // '=' key on numpad

			/*
				Fujitsu/OASYS kbd definitions
			*/
			VLK_OEM_FJ_JISHO = 0x92, // 'Dictionary' key
			VLK_OEM_FJ_MASSHOU = 0x93, // 'Unregister word' key
			VLK_OEM_FJ_TOUROKU = 0x94, // 'Register word' key
			VLK_OEM_FJ_LOYA = 0x95, // 'Left OYAYUBI' key
			VLK_OEM_FJ_ROYA = 0x96, // 'Right OYAYUBI' key

			/*
				0x97 - 0x9F : unassigned
			*/

			/*
				VLK_L* & VLK_R* - left and right Alt, Ctrl and Shift virtual keys.
				Used only as parameters to GetAsyncKeyState() and GetKeyState().
				No other API or message will distinguish left and right keys in this way.
			*/
			VLK_LSHIFT = 0xA0,
			VLK_RSHIFT = 0xA1,
			VLK_LCONTROL = 0xA2,
			VLK_RCONTROL = 0xA3,
			VLK_LMENU = 0xA4,
			VLK_RMENU = 0xA5,

			VLK_BROWSER_BACK = 0xA6,
			VLK_BROWSER_FORWARD = 0xA7,
			VLK_BROWSER_REFRESH = 0xA8,
			VLK_BROWSER_STOP = 0xA9,
			VLK_BROWSER_SEARCH = 0xAA,
			VLK_BROWSER_FAVORITES = 0xAB,
			VLK_BROWSER_HOME = 0xAC,

			VLK_VOLUME_MUTE = 0xAD,
			VLK_VOLUME_DOWN = 0xAE,
			VLK_VOLUME_UP = 0xAF,
			VLK_MEDIA_NEXT_TRACK = 0xB0,
			VLK_MEDIA_PREV_TRACK = 0xB1,
			VLK_MEDIA_STOP = 0xB2,
			VLK_MEDIA_PLAY_PAUSE = 0xB3,
			VLK_LAUNCH_MAIL = 0xB4,
			VLK_LAUNCH_MEDIA_SELECT = 0xB5,
			VLK_LAUNCH_APP1 = 0xB6,
			VLK_LAUNCH_APP2 = 0xB7,

			/*
				0xB8 - 0xB9 : reserved
			*/

			VLK_OEM_1 = 0xBA, // ';:' for US
			VLK_OEM_PLUS = 0xBB, // '+' any country
			VLK_OEM_COMMA = 0xBC, // ',' any country
			VLK_OEM_MINUS = 0xBD, // '-' any country
			VLK_OEM_PERIOD = 0xBE, // '.' any country
			VLK_OEM_2 = 0xBF, // '/?' for US
			VLK_OEM_3 = 0xC0, // '`~' for US

			/*
				0xC1 - 0xD7 : reserved
			*/

			/*
				0xD8 - 0xDA : unassigned
			*/

			VLK_OEM_4 = 0xDB, //  '[{' for US
			VLK_OEM_5 = 0xDC, //  '\|' for US
			VLK_OEM_6 = 0xDD, //  ']}' for US
			VLK_OEM_7 = 0xDE, //  ''"' for US
			VLK_OEM_8 = 0xDF,

			/*
				0xE0 : reserved
			*/

			/*
				Various extended or enhanced keyboards
			*/
			VLK_OEM_AX = 0xE1, //  'AX' key on Japanese AX kbd
			VLK_OEM_102 = 0xE2, //  "<>" or "\|" on RT 102-key kbd.
			VLK_ICO_HELP = 0xE3, //  Help key on ICO
			VLK_ICO_00 = 0xE4, //  00 key on ICO

			VLK_PROCESSKEY = 0xE5,

			VLK_ICO_CLEAR = 0xE6,

			VLK_PACKET = 0xE7,

			/*
				0xE8 : unassigned
			*/

			/*
				Nokia/Ericsson definitions
			*/
			VLK_OEM_RESET = 0xE9,
			VLK_OEM_JUMP = 0xEA,
			VLK_OEM_PA1 = 0xEB,
			VLK_OEM_PA2 = 0xEC,
			VLK_OEM_PA3 = 0xED,
			VLK_OEM_WSCTRL = 0xEE,
			VLK_OEM_CUSEL = 0xEF,
			VLK_OEM_ATTN = 0xF0,
			VLK_OEM_FINISH = 0xF1,
			VLK_OEM_COPY = 0xF2,
			VLK_OEM_AUTO = 0xF3,
			VLK_OEM_ENLW = 0xF4,
			VLK_OEM_BACKTAB = 0xF5,

			VLK_ATTN = 0xF6,
			VLK_CRSEL = 0xF7,
			VLK_EXSEL = 0xF8,
			VLK_EREOF = 0xF9,
			VLK_PLAY = 0xFA,
			VLK_ZOOM = 0xFB,
			VLK_NONAME = 0xFC,
			VLK_PA1 = 0xFD,
			VLK_OEM_CLEAR = 0xFE,

			VLK_MAX
		};

		// Keyboard scan codes - OIS, DirectInput
		enum ScanCode
		{
			SC_UNASSIGNED = 0x00,
			SC_ESCAPE = 0x01,
			SC_1 = 0x02,
			SC_2 = 0x03,
			SC_3 = 0x04,
			SC_4 = 0x05,
			SC_5 = 0x06,
			SC_6 = 0x07,
			SC_7 = 0x08,
			SC_8 = 0x09,
			SC_9 = 0x0A,
			SC_0 = 0x0B,
			SC_MINUS = 0x0C,    // - on main keyboard
			SC_EQUALS = 0x0D,
			SC_BACK = 0x0E,    // backspace
			SC_TAB = 0x0F,
			SC_Q = 0x10,
			SC_W = 0x11,
			SC_E = 0x12,
			SC_R = 0x13,
			SC_T = 0x14,
			SC_Y = 0x15,
			SC_U = 0x16,
			SC_I = 0x17,
			SC_O = 0x18,
			SC_P = 0x19,
			SC_LBRACKET = 0x1A,
			SC_RBRACKET = 0x1B,
			SC_RETURN = 0x1C,    // Enter on main keyboard
			SC_LCONTROL = 0x1D,
			SC_A = 0x1E,
			SC_S = 0x1F,
			SC_D = 0x20,
			SC_F = 0x21,
			SC_G = 0x22,
			SC_H = 0x23,
			SC_J = 0x24,
			SC_K = 0x25,
			SC_L = 0x26,
			SC_SEMICOLON = 0x27,
			SC_APOSTROPHE = 0x28,
			SC_GRAVE = 0x29,    // accent
			SC_LSHIFT = 0x2A,
			SC_BACKSLASH = 0x2B,
			SC_Z = 0x2C,
			SC_X = 0x2D,
			SC_C = 0x2E,
			SC_V = 0x2F,
			SC_B = 0x30,
			SC_N = 0x31,
			SC_M = 0x32,
			SC_COMMA = 0x33,
			SC_PERIOD = 0x34,    // . on main keyboard
			SC_SLASH = 0x35,    // / on main keyboard
			SC_RSHIFT = 0x36,
			SC_MULTIPLY = 0x37,    // * on numeric keypad
			SC_LMENU = 0x38,    // left Alt
			SC_SPACE = 0x39,
			SC_CAPITAL = 0x3A,
			SC_F1 = 0x3B,
			SC_F2 = 0x3C,
			SC_F3 = 0x3D,
			SC_F4 = 0x3E,
			SC_F5 = 0x3F,
			SC_F6 = 0x40,
			SC_F7 = 0x41,
			SC_F8 = 0x42,
			SC_F9 = 0x43,
			SC_F10 = 0x44,
			SC_NUMLOCK = 0x45,
			SC_SCROLL = 0x46,    // Scroll Lock
			SC_NUMPAD7 = 0x47,
			SC_NUMPAD8 = 0x48,
			SC_NUMPAD9 = 0x49,
			SC_SUBTRACT = 0x4A,    // - on numeric keypad
			SC_NUMPAD4 = 0x4B,
			SC_NUMPAD5 = 0x4C,
			SC_NUMPAD6 = 0x4D,
			SC_ADD = 0x4E,    // + on numeric keypad
			SC_NUMPAD1 = 0x4F,
			SC_NUMPAD2 = 0x50,
			SC_NUMPAD3 = 0x51,
			SC_NUMPAD0 = 0x52,
			SC_DECIMAL = 0x53,    // . on numeric keypad
			SC_OEM_102 = 0x56,    // < > | on UK/Germany keyboards
			SC_F11 = 0x57,
			SC_F12 = 0x58,
			SC_F13 = 0x64,    //                     (NEC PC98)
			SC_F14 = 0x65,    //                     (NEC PC98)
			SC_F15 = 0x66,    //                     (NEC PC98)
			SC_KANA = 0x70,    // (Japanese keyboard)
			SC_ABNT_C1 = 0x73,    // / ? on Portugese (Brazilian) keyboards
			SC_CONVERT = 0x79,    // (Japanese keyboard)
			SC_NOCONVERT = 0x7B,    // (Japanese keyboard)
			SC_YEN = 0x7D,    // (Japanese keyboard)
			SC_ABNT_C2 = 0x7E,    // Numpad . on Portugese (Brazilian) keyboards
			SC_NUMPADEQUALS = 0x8D,    // = on numeric keypad (NEC PC98)
			SC_PREVTRACK = 0x90,    // Previous Track (SC_CIRCUMFLEX on Japanese keyboard)
			SC_AT = 0x91,    //                     (NEC PC98)
			SC_COLON = 0x92,    //                     (NEC PC98)
			SC_UNDERLINE = 0x93,    //                     (NEC PC98)
			SC_KANJI = 0x94,    // (Japanese keyboard)
			SC_STOP = 0x95,    //                     (NEC PC98)
			SC_AX = 0x96,    //                     (Japan AX)
			SC_UNLABELED = 0x97,    //                        (J3100)
			SC_NEXTTRACK = 0x99,    // Next Track
			SC_NUMPADENTER = 0x9C,    // Enter on numeric keypad
			SC_RCONTROL = 0x9D,
			SC_MUTE = 0xA0,    // Mute
			SC_CALCULATOR = 0xA1,    // Calculator
			SC_PLAYPAUSE = 0xA2,    // Play / Pause
			SC_MEDIASTOP = 0xA4,    // Media Stop
			SC_VOLUMEDOWN = 0xAE,    // Volume -
			SC_VOLUMEUP = 0xB0,    // Volume +
			SC_WEBHOME = 0xB2,    // Web home
			SC_NUMPADCOMMA = 0xB3,    // , on numeric keypad (NEC PC98)
			SC_DIVIDE = 0xB5,    // / on numeric keypad
			SC_SYSRQ = 0xB7,
			SC_RMENU = 0xB8,    // right Alt
			SC_PAUSE = 0xC5,    // Pause
			SC_HOME = 0xC7,    // Home on arrow keypad
			SC_UP = 0xC8,    // UpArrow on arrow keypad
			SC_PGUP = 0xC9,    // PgUp on arrow keypad
			SC_LEFT = 0xCB,    // LeftArrow on arrow keypad
			SC_RIGHT = 0xCD,    // RightArrow on arrow keypad
			SC_END = 0xCF,    // End on arrow keypad
			SC_DOWN = 0xD0,    // DownArrow on arrow keypad
			SC_PGDOWN = 0xD1,    // PgDn on arrow keypad
			SC_INSERT = 0xD2,    // Insert on arrow keypad
			SC_DELETE = 0xD3,    // Delete on arrow keypad
			SC_LWIN = 0xDB,    // Left Windows key
			SC_RWIN = 0xDC,    // Right Windows key
			SC_APPS = 0xDD,    // AppMenu key
			SC_POWER = 0xDE,    // System Power
			SC_SLEEP = 0xDF,    // System Sleep
			SC_WAKE = 0xE3,    // System Wake
			SC_WEBSEARCH = 0xE5,    // Web Search
			SC_WEBFAVORITES = 0xE6,    // Web Favorites
			SC_WEBREFRESH = 0xE7,    // Web Refresh
			SC_WEBSTOP = 0xE8,    // Web Stop
			SC_WEBFORWARD = 0xE9,    // Web Forward
			SC_WEBBACK = 0xEA,    // Web Back
			SC_MYCOMPUTER = 0xEB,    // My Computer
			SC_MAIL = 0xEC,    // Mail
			SC_MEDIASELECT = 0xED,     // Media Select
			SC_MAX
		};

		class Table
		{
		public:
			Table()
			{
				memset(mVirtualKeyToScanCode, 0, VLK_MAX);
				memset(mScanCodeToVirtualKey, 0, SC_MAX);

				#define ADD_MAP(_keyName) \
					mVirtualKeyToScanCode[VLK_##_keyName] = SC_##_keyName; \
					mScanCodeToVirtualKey[SC_##_keyName] = VLK_##_keyName;
				#define ADD_MAP2(_virtualKey, _scanCode) \
					mVirtualKeyToScanCode[VLK_##_virtualKey] = SC_##_scanCode; \
					mScanCodeToVirtualKey[SC_##_scanCode] = VLK_##_virtualKey;

				ADD_MAP(0)
				ADD_MAP(1)
				ADD_MAP(2)
				ADD_MAP(3)
				ADD_MAP(4)
				ADD_MAP(5)
				ADD_MAP(6)
				ADD_MAP(7)
				ADD_MAP(8)
				ADD_MAP(9)

				ADD_MAP(A)
				ADD_MAP(B)
				ADD_MAP(C)
				ADD_MAP(D)
				ADD_MAP(E)
				ADD_MAP(F)
				ADD_MAP(G)
				ADD_MAP(H)
				ADD_MAP(I)
				ADD_MAP(J)
				ADD_MAP(K)
				ADD_MAP(L)
				ADD_MAP(M)
				ADD_MAP(N)
				ADD_MAP(O)
				ADD_MAP(P)
				ADD_MAP(Q)
				ADD_MAP(R)
				ADD_MAP(S)
				ADD_MAP(T)
				ADD_MAP(U)
				ADD_MAP(V)
				ADD_MAP(W)
				ADD_MAP(X)
				ADD_MAP(Y)
				ADD_MAP(Z)

				ADD_MAP(F1)
				ADD_MAP(F2)
				ADD_MAP(F3)
				ADD_MAP(F4)
				ADD_MAP(F5)
				ADD_MAP(F6)
				ADD_MAP(F7)
				ADD_MAP(F8)
				ADD_MAP(F9)
				ADD_MAP(F10)
				ADD_MAP(F11)
				ADD_MAP(F12)
				ADD_MAP(F13)
				ADD_MAP(F14)
				ADD_MAP(F15)

				ADD_MAP(NUMPAD0)
				ADD_MAP(NUMPAD1)
				ADD_MAP(NUMPAD2)
				ADD_MAP(NUMPAD3)
				ADD_MAP(NUMPAD4)
				ADD_MAP(NUMPAD5)
				ADD_MAP(NUMPAD6)
				ADD_MAP(NUMPAD7)
				ADD_MAP(NUMPAD8)
				ADD_MAP(NUMPAD9)

				ADD_MAP(ESCAPE)
				ADD_MAP(TAB)
				ADD_MAP(RETURN)
				ADD_MAP(SPACE)
				ADD_MAP(BACK)

				ADD_MAP2(SCROLL, SCROLL)
				ADD_MAP2(PAUSE, PAUSE)
				ADD_MAP2(OEM_3, GRAVE)
				ADD_MAP2(OEM_MINUS, MINUS)
				ADD_MAP2(OEM_PLUS, EQUALS)
				ADD_MAP2(OEM_5, BACKSLASH)
				ADD_MAP2(OEM_4, LBRACKET)
				ADD_MAP2(OEM_6, RBRACKET)
				ADD_MAP2(CAPITAL, CAPITAL)
				ADD_MAP2(OEM_1, SEMICOLON)
				ADD_MAP2(OEM_7, APOSTROPHE)
				ADD_MAP2(SHIFT, LSHIFT)
				ADD_MAP2(OEM_COMMA, COMMA)
				ADD_MAP2(OEM_PERIOD, PERIOD)
				ADD_MAP2(OEM_2, SLASH)
				ADD_MAP2(CONTROL, LCONTROL)
				ADD_MAP2(LWIN, LWIN)
				ADD_MAP2(RWIN, RWIN)
				ADD_MAP2(APPS, APPS)
				ADD_MAP2(MENU, LMENU)

				ADD_MAP2(LEFT, LEFT)
				ADD_MAP2(RIGHT, RIGHT)
				ADD_MAP2(UP, UP)
				ADD_MAP2(DOWN, DOWN)
				ADD_MAP2(INSERT, INSERT)
				ADD_MAP2(DELETE, DELETE)
				ADD_MAP2(HOME, HOME)
				ADD_MAP2(END, END)
				ADD_MAP2(PRIOR, PGUP)
				ADD_MAP2(NEXT, PGDOWN)
				ADD_MAP2(SNAPSHOT, SYSRQ)

				ADD_MAP2(NUMLOCK, NUMLOCK)
				ADD_MAP2(DIVIDE, DIVIDE)
				ADD_MAP2(MULTIPLY, MULTIPLY)
				ADD_MAP2(SUBTRACT, SUBTRACT)
				ADD_MAP2(ADD, ADD)
				ADD_MAP2(DECIMAL, DECIMAL)

				ADD_MAP(NUMPAD0)
				ADD_MAP(NUMPAD1)
				ADD_MAP(NUMPAD2)
				ADD_MAP(NUMPAD3)
				ADD_MAP(NUMPAD4)
				ADD_MAP(NUMPAD5)
				ADD_MAP(NUMPAD6)
				ADD_MAP(NUMPAD7)
				ADD_MAP(NUMPAD8)
				ADD_MAP(NUMPAD9)


				#undef ADD_MAP
				#undef ADD_MAP2
			}

			int VirtualKeyToScanCode(WPARAM _virtualKey) const
			{
				if (_virtualKey < VLK_MAX)
					return (int)mVirtualKeyToScanCode[_virtualKey];
				return 0;
			}

			int ScanCodeToVirtualKey(int _scanCode) const
			{
				if (_scanCode < SC_MAX)
					return (int)mScanCodeToVirtualKey[_scanCode];
				return 0;
			}

		private:
			unsigned char mVirtualKeyToScanCode[VLK_MAX];
			unsigned char mScanCodeToVirtualKey[SC_MAX];
		};

		static const Table& getTable()
		{
			static Table table;
			return table;
		}

		static int VirtualKeyToScanCode(WPARAM _virtualKey)
		{
			const Table& table = getTable();
			return table.VirtualKeyToScanCode(_virtualKey);
		}

		static int ScanCodeToVirtualKey(int _scanCode)
		{
			const Table& table = getTable();
			return table.ScanCodeToVirtualKey(_scanCode);
		}

		static int VirtualKeyToText(WPARAM _virtualKey)
		{
			static WCHAR deadKey = 0;

			BYTE keyState[256];
			HKL  layout = GetKeyboardLayout(0);
			if (GetKeyboardState(keyState) == 0)
				return 0;

			WCHAR buff[3] = { 0, 0, 0 };
			int ascii = ToUnicodeEx((UINT)_virtualKey, 0, keyState, buff, 3, 0, layout);
			if (ascii == 1 && deadKey != '\0' )
			{
				// A dead key is stored and we have just converted a character key
				// Combine the two into a single character
				WCHAR wcBuff[3] = { buff[0], deadKey, '\0' };
				WCHAR out[3];

				deadKey = '\0';
				if (FoldStringW(MAP_PRECOMPOSED, (LPWSTR)wcBuff, 3, (LPWSTR)out, 3))
					return out[0];
			}
			else if (ascii == 1)
			{
				// We have a single character
				deadKey = '\0';
				return buff[0];
			}
			else if (ascii == 2)
			{
				// Convert a non-combining diacritical mark into a combining diacritical mark
				// Combining versions range from 0x300 to 0x36F; only 5 (for French) have been mapped below
				// http://www.fileformat.info/info/unicode/block/combining_diacritical_marks/images.htm
				switch (buff[0])
				{
				case 0x5E: // Circumflex accent: ��
					deadKey = 0x302;
					break;
				case 0x60: // Grave accent: ��
					deadKey = 0x300;
					break;
				case 0xA8: // Diaeresis: ��
					deadKey = 0x308;
					break;
				case 0xB4: // Acute accent: ��
					deadKey = 0x301;
					break;
				case 0xB8: // Cedilla: ��
					deadKey = 0x327;
					break;
				default:
					deadKey = buff[0];
					break;
				}
			}
			return 0;
		}

		static int ScanCodeToText(int _scanCode)
		{
			HKL  layout = GetKeyboardLayout(0);
			unsigned int vk = MapVirtualKeyEx((UINT)_scanCode, 3 /*MAPVK_VSC_TO_VK_EX*/, layout);
			if (vk == 0)
				return 0;

			return VirtualKeyToText(vk);
		}
	};

}