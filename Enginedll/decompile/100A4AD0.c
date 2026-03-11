/*
 * func-name: ?TruncateCompString@CREIMEEditBox@@IAEX_NH@Z
 * func-address: 0x100a4ad0
 * callers: 0x100acec0
 * callees: 0x100971c0
 */

void __thiscall CREIMEEditBox::TruncateCompString(CREIMEEditBox *this, bool a2, int a3)
{
  signed int v4; // edi
  int i; // ebx
  struct Engine *v6; // eax
  struct Engine *v7; // eax
  int v8; // ebx
  int v9; // edi
  struct Engine *v10; // eax
  struct Engine *v11; // eax
  struct Engine *v12; // eax
  int v13; // edi
  struct Engine *v14; // eax
  struct Engine *v15; // eax

  if ( CREIMEEditBox::s_bInsertOnType )
  {
    v4 = wcslen(CREIMEEditBox::s_CompString);
    for ( i = 0; i < v4 - CREIMEEditBox::s_nCompCaret; ++i )
    {
      v6 = Engine::Instance();
      SendMessageW(*((HWND *)v6 + 35), 0x100u, 0x27u, 0);
    }
    v7 = Engine::Instance();
    SendMessageW(*((HWND *)v7 + 35), 0x101u, 0x27u, 0);
    if ( a2 || *((_BYTE *)this + 752) )
      v8 = 0;
    else
      v8 = a3;
    if ( v8 >= v4 )
    {
      v8 = v4;
    }
    else
    {
      v9 = v4 - v8;
      if ( v9 > 0 )
      {
        do
        {
          v10 = Engine::Instance();
          SendMessageW(*((HWND *)v10 + 35), 0x100u, 8u, 0);
          v11 = Engine::Instance();
          SendMessageW(*((HWND *)v11 + 35), 0x102u, 8u, 0);
          --v9;
        }
        while ( v9 );
      }
      v12 = Engine::Instance();
      SendMessageW(*((HWND *)v12 + 35), 0x101u, 8u, 0);
    }
    if ( v8 > 0 )
    {
      v13 = v8;
      do
      {
        v14 = Engine::Instance();
        SendMessageW(*((HWND *)v14 + 35), 0x100u, 0x25u, 0);
        --v13;
      }
      while ( v13 );
    }
    v15 = Engine::Instance();
    SendMessageW(*((HWND *)v15 + 35), 0x101u, 0x25u, 0);
  }
}
