/*
 * func-name: ?MsgChar@GUIConsole@@QAEXI@Z_0
 * func-address: 0x102b9040
 * callers: 0x1000d7dd
 * callees: 0x102c9d62
 */

void __thiscall GUIConsole::MsgChar(GUIConsole *this, unsigned int a2)
{
  _BYTE v3[28]; // [esp+10h] [ebp-2Ch] BYREF
  int v4; // [esp+38h] [ebp-4h]

  if ( (_BYTE)a2 == 96 || a2 == 192 || a2 == 223 )
    *((_BYTE *)this + 32) = *((_BYTE *)this + 32) == 0;
  if ( *((_BYTE *)this + 32) && (char)a2 > 0 && isprint((char)a2) && (_BYTE)a2 != 96 )
  {
    std::string::string(v3, &unk_103252AA);
    v4 = 0;
    std::string::operator+=(v3, a2);
    std::string::insert((char *)this + 144, *((_DWORD *)this + 47), v3);
    std::string::operator=(this, (char *)this + 144);
    ++*((_DWORD *)this + 47);
    v4 = -1;
    std::string::~string(v3);
  }
}
