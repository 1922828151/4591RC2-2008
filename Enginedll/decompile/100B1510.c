/*
 * func-name: ?HandleKeyboard@CREPropertiesList@@UAE_NIIJ@Z
 * func-address: 0x100b1510
 * callers: none
 * callees: 0x100a3ce0
 */

char __thiscall CREPropertiesList::HandleKeyboard(CREPropertiesList *this, unsigned int a2, unsigned int a3, int a4)
{
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  void (__stdcall *v20)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD); // ecx

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
  v6 = 0;
  if ( *((int *)this + 306) <= 0 )
  {
LABEL_9:
    if ( a2 == 256 && a3 - 33 <= 7 )
    {
      switch ( byte_100B1730[a3 - 33] )
      {
        case 0:
          v8 = *((_DWORD *)this + 306);
          if ( v8 )
          {
            v9 = *((_DWORD *)this + 300);
            v10 = v9;
            switch ( a3 )
            {
              case '!':
                v9 -= *((_DWORD *)this + 292);
                goto LABEL_17;
              case '"':
                v11 = *((_DWORD *)this + 292) + v9 - 1;
                goto LABEL_20;
              case '#':
                v11 = v8 - 1;
                goto LABEL_20;
              case '$':
                *((_DWORD *)this + 300) = 0;
                goto LABEL_21;
              case '%':
              case '\'':
                goto LABEL_21;
              case '&':
                v11 = v9 - 1;
                goto LABEL_20;
              case '(':
LABEL_17:
                v11 = v9 + 1;
LABEL_20:
                *((_DWORD *)this + 300) = v11;
LABEL_21:
                if ( *((int *)this + 300) < 0 )
                  *((_DWORD *)this + 300) = 0;
                if ( *((_DWORD *)this + 300) >= v8 )
                  *((_DWORD *)this + 300) = v8 - 1;
                v12 = *((_DWORD *)this + 300);
                if ( v10 == v12 )
                  return 1;
                if ( (*((_BYTE *)this + 1196) & 1) == 0 )
                  goto LABEL_37;
                v13 = 0;
                if ( v8 > 0 )
                {
                  do
                  {
                    v14 = *(_DWORD *)(*((_DWORD *)this + 305) + 4 * v13++);
                    *(_BYTE *)(v14 + 540) = 0;
                  }
                  while ( v13 < *((_DWORD *)this + 306) );
                }
                if ( GetKeyState(16) >= 0 )
                {
                  *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 305) + 4 * *((_DWORD *)this + 300)) + 540) = 1;
                  v12 = *((_DWORD *)this + 300);
LABEL_37:
                  *((_DWORD *)this + 301) = v12;
                }
                else
                {
                  v15 = *((_DWORD *)this + 301);
                  v16 = *((_DWORD *)this + 300);
                  v17 = v15;
                  if ( v15 > v16 || (v17 = *((_DWORD *)this + 300), v15 >= v16) )
                    v15 = *((_DWORD *)this + 300);
                  for ( ; v15 <= v17; *(_BYTE *)(v18 + 540) = 1 )
                    v18 = *(_DWORD *)(*((_DWORD *)this + 305) + 4 * v15++);
                }
                CREScrollBar::ShowItem((CREPropertiesList *)((char *)this + 564), *((_DWORD *)this + 300));
                v19 = *((_DWORD *)this + 28);
                v20 = *(void (__stdcall **)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD))(v19 + 736);
                if ( v20 )
                  v20(v19, 1794, *((_DWORD *)this + 34), this, 0, 0);
                break;
              default:
                return 0;
            }
          }
          return 1;
        case 1:
          return 0;
      }
    }
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 305) + 4 * v6) + 512);
      if ( (*(unsigned __int8 (__thiscall **)(int, unsigned int, unsigned int, int))(*(_DWORD *)v7 + 88))(
             v7,
             a2,
             a3,
             a4) )
      {
        return 1;
      }
      if ( ++v6 >= *((_DWORD *)this + 306) )
        goto LABEL_9;
    }
  }
}
