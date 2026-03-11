/*
 * func-name: sub_10002630
 * func-address: 0x10002630
 * callers: none
 * callees: 0x100016f0, 0x10001830, 0x10001f10
 */

char __thiscall sub_10002630(void *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // ecx
  char v5; // cl
  _DWORD *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // ecx
  int v12; // [esp+4h] [ebp-4h] BYREF

  LOBYTE(v2) = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 12))(this);
  if ( (_BYTE)v2 && *((_DWORD *)this + 8216) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = (_DWORD *)*((_DWORD *)this + 8216);
        LOBYTE(v2) = sub_100016F0(v3, 1);
        if ( !(_BYTE)v2 )
          return v2;
        v2 = v3[3];
        if ( v3[5] - v2 < 1 )
          return v2;
        v4 = v3[4];
        if ( !v4 )
          return v2;
        v5 = *(_BYTE *)(v4 + v2);
        v3[3] = v2 + 1;
        LOBYTE(v2) = v5 - 42;
        if ( v5 == 42 )
        {
          v10 = (_DWORD *)*((_DWORD *)this + 8215);
          if ( v10 )
          {
            LOBYTE(v12) = 0;
            sub_10001830(v10, (int)&v12, 1u);
            LOBYTE(v2) = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 8215) + 8))(*((_DWORD *)this + 8215));
          }
          return v2;
        }
        if ( v5 == 43 )
          break;
        if ( v5 == 44 )
          goto LABEL_9;
      }
      v6 = (_DWORD *)*((_DWORD *)this + 8216);
      if ( sub_100016F0(v6, 4) )
      {
        v7 = v6[3];
        if ( v6[5] - v7 >= 4 )
        {
          v8 = v6[4];
          if ( v8 )
          {
            v9 = *(_DWORD *)(v8 + v7);
            v6[3] = v7 + 4;
            *((_DWORD *)this + 8218) = v9;
            if ( v9 )
LABEL_9:
              sub_10001F10(*((_DWORD **)this + 8216), (float *)this + 8219);
          }
        }
      }
    }
  }
  return v2;
}
