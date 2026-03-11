/*
 * func-name: ?LogPrintf@@YAXPBDZZ
 * func-address: 0x100e2550
 * callers: 0x10008c60, 0x1000b390, 0x10015b30, 0x100163e0, 0x100192e0, 0x100193a0, 0x10037b30, 0x1003dda0, 0x100477a0, 0x10048730, 0x1007c450, 0x1007dcf0, 0x1007e7c0, 0x1007e880, 0x10095720, 0x100958f0, 0x10095cf0, 0x10096550, 0x10096e60, 0x10097220, 0x100977a0, 0x10097800, 0x10097ea0, 0x1009dc90, 0x100d6440, 0x100e26b0, 0x100f4f50, 0x10103770, 0x1010cb00, 0x1010d330, 0x1011b1a0, 0x1011b2a0, 0x1011b780, 0x1011b870, 0x1011d270, 0x1011ed60, 0x1011ef20, 0x10123eb0, 0x10124f00, 0x10125a30, 0x10136400, 0x10138880, 0x10139890, 0x1013e2e0, 0x10141cd0, 0x10146500, 0x10146520, 0x10146540, 0x1015c210, 0x10167c60, 0x10169020, 0x10169700, 0x1016e310, 0x10173030
 * callees: 0x100116a0, 0x1007ec70, 0x100971c0, 0x100e23a0, 0x100e2470, 0x101a2780
 */

void LogPrintf(char *Format, ...)
{
  int v1; // eax
  struct Editor *v2; // eax
  EngineLog *v3; // eax
  char *v4; // eax
  char *v6; // eax
  void *v8; // [esp-4h] [ebp-1F88h]
  _BYTE v9[28]; // [esp+0h] [ebp-1F84h] BYREF
  _BYTE v10[27]; // [esp+1Ch] [ebp-1F68h] BYREF
  char v11; // [esp+37h] [ebp-1F4Dh] BYREF
  char Buffer[8000]; // [esp+38h] [ebp-1F4Ch] BYREF
  int v13; // [esp+1F80h] [ebp-4h]
  va_list ArgList; // [esp+1F8Ch] [ebp+8h] BYREF

  va_start(ArgList, Format);
  if ( *((_DWORD *)Engine::Instance() + 1) )
  {
    vsprintf(Buffer, Format, ArgList);
    if ( Editor::Instance() && *((_BYTE *)Editor::Instance() + 2122) )
    {
      v1 = std::string::string(v9, Buffer);
      v13 = 0;
      v8 = (void *)std::operator+<char>(v10, v1, "\n");
      LOBYTE(v13) = 1;
      v2 = Editor::Instance();
      sub_100116A0((_DWORD *)v2 + 557, v8);
      LOBYTE(v13) = 0;
      std::string::~string(v10);
      v13 = -1;
      std::string::~string(v9);
    }
    v3 = EngineLog::Instance();
    EngineLog::Out(v3, Buffer);
    v4 = &v11;
    while ( *++v4 )
      ;
    strcpy(v4, "\r\n");
    v6 = &v11;
    while ( *++v6 )
      ;
    strcpy(v6, "\t\t");
    OutputDebugStringA(Buffer);
  }
}
