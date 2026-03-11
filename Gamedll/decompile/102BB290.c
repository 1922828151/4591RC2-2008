/*
 * func-name: ?MsgKeyDown@GUIConsole@@QAEXI@Z_0
 * func-address: 0x102bb290
 * callers: 0x10013796
 * callees: 0x100052ae, 0x1000b50f, 0x10011ae0, 0x10019b69, 0x1001a2cb
 */

void __thiscall GUIConsole::MsgKeyDown(GUIConsole *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // edi

  if ( *((_BYTE *)this + 32) )
  {
    GetKeyState(16);
    switch ( a2 )
    {
      case 8u:
      case 0x2Eu:
        GUIConsole::KeyBackspace(this);
        break;
      case 9u:
        if ( *((_BYTE *)this + 32) )
          GUIConsole::KeyTab(this);
        break;
      case 0xDu:
        if ( *((_BYTE *)this + 32) )
          GUIConsole::KeyReturn(this);
        break;
      case 0x25u:
        if ( *((_BYTE *)this + 32) )
        {
          v3 = *((_DWORD *)this + 47);
          if ( v3 > 0 )
            *((_DWORD *)this + 47) = v3 - 1;
        }
        break;
      case 0x26u:
        if ( *((_BYTE *)this + 32) )
          GUIConsole::KeyArrowUp(this);
        break;
      case 0x27u:
        if ( *((_BYTE *)this + 32) )
        {
          v4 = *((_DWORD *)this + 47);
          if ( v4 < std::string::length((char *)this + 144) )
            *((_DWORD *)this + 47) = v4 + 1;
        }
        break;
      case 0x28u:
        if ( *((_BYTE *)this + 32) )
          GUIConsole::KeyArrowDown(this);
        break;
      default:
        return;
    }
  }
}
