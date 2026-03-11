/*
 * func-name: ?HandleKeyboard@CREListBox@@UAE_NIIJ@Z
 * func-address: 0x100b0c30
 * callers: none
 * callees: 0x100a3ce0
 */

bool __thiscall CREListBox::HandleKeyboard(CREListBox *this, unsigned int a2, unsigned int a3, int a4)
{
  int v5; // edx
  bool result; // al
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  void (__stdcall *v17)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD); // ecx

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(char *, unsigned int, unsigned int, int))(*((_DWORD *)this + 141) + 88))(
         (char *)this + 564,
         a2,
         a3,
         a4) )
  {
    return 1;
  }
  if ( a2 != 256 )
    return 0;
  switch ( a3 )
  {
    case '!':
    case '"':
    case '#':
    case '$':
    case '&':
    case '(':
      v5 = *((_DWORD *)this + 304);
      if ( !v5 )
        return 1;
      v7 = *((_DWORD *)this + 300);
      v8 = v7;
      switch ( a3 )
      {
        case '!':
          *((_DWORD *)this + 300) = v7 - *((_DWORD *)this + 292) + 1;
          break;
        case '"':
          *((_DWORD *)this + 300) = *((_DWORD *)this + 292) + v7 - 1;
          break;
        case '#':
          *((_DWORD *)this + 300) = v5 - 1;
          break;
        case '$':
          *((_DWORD *)this + 300) = 0;
          break;
        case '%':
        case '\'':
          break;
        case '&':
          *((_DWORD *)this + 300) = v7 - 1;
          break;
        case '(':
          *((_DWORD *)this + 300) = v7 + 1;
          break;
        default:
          return 0;
      }
      if ( *((int *)this + 300) < 0 )
        *((_DWORD *)this + 300) = 0;
      if ( *((_DWORD *)this + 300) >= v5 )
        *((_DWORD *)this + 300) = v5 - 1;
      v9 = *((_DWORD *)this + 300);
      if ( v8 == v9 )
        goto LABEL_35;
      if ( (*((_BYTE *)this + 1196) & 1) == 0 )
        goto LABEL_32;
      v10 = 0;
      if ( v5 > 0 )
      {
        do
        {
          v11 = *(_DWORD *)(*((_DWORD *)this + 303) + 4 * v10++);
          *(_BYTE *)(v11 + 532) = 0;
        }
        while ( v10 < *((_DWORD *)this + 304) );
      }
      if ( GetKeyState(16) >= 0 )
      {
        *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 303) + 4 * *((_DWORD *)this + 300)) + 532) = 1;
        v9 = *((_DWORD *)this + 300);
LABEL_32:
        *((_DWORD *)this + 301) = v9;
      }
      else
      {
        v12 = *((_DWORD *)this + 301);
        v13 = *((_DWORD *)this + 300);
        v14 = v12;
        if ( v12 > v13 || (v14 = *((_DWORD *)this + 300), v12 >= v13) )
          v12 = *((_DWORD *)this + 300);
        for ( ; v12 <= v14; *(_BYTE *)(v15 + 532) = 1 )
          v15 = *(_DWORD *)(*((_DWORD *)this + 303) + 4 * v12++);
      }
      CREScrollBar::ShowItem((CREListBox *)((char *)this + 564), *((_DWORD *)this + 300));
      v16 = *((_DWORD *)this + 28);
      v17 = *(void (__stdcall **)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD))(v16 + 736);
      if ( v17 )
        v17(v16, 1794, *((_DWORD *)this + 34), this, 0, 0);
LABEL_35:
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}
