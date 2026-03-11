/*
 * func-name: sub_10001160
 * func-address: 0x10001160
 * callers: 0x10001830, 0x1000d700, 0x1000d7a0, 0x1000d7e0, 0x1000d820, 0x1000d860, 0x1000d8a0, 0x1000d8e0, 0x1000f900, 0x1000f970, 0x1000f9e0, 0x1000fa50, 0x100115c0, 0x10013840, 0x10014300, 0x10014380, 0x100233d0, 0x10023410, 0x10023450, 0x10023490, 0x100234d0, 0x10023510, 0x10023e50, 0x1002dfa0, 0x1002e280, 0x1002e590, 0x1002ecc0, 0x1002ee60, 0x1002f150, 0x1002f4a0, 0x1002fc50
 * callees: 0x10001520, 0x10001550, 0x10034c89, 0x10034ca4
 */

char __thiscall sub_10001160(_DWORD *this, int a2, int a3, int a4, _BYTE *a5, char *Format, va_list a7)
{
  _DWORD *v8; // esi
  bool v9; // zf
  int v10; // ecx
  int v11; // eax
  char *v13; // edi
  signed int v14; // esi
  int *v15; // ebx
  int v16; // edx
  _DWORD *v17; // [esp+18h] [ebp-B4h]
  char Buffer[164]; // [esp+24h] [ebp-A8h] BYREF

  v8 = this + 13;
  v17 = this + 13;
  sub_10001520(this + 13);
  v9 = this[9] == 0;
  this[10] = a2;
  if ( v9 )
    this[9] = a2;
  v10 = this[7];
  if ( v10 )
  {
    if ( a2 == 107 )
    {
      v11 = (*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)v10 + 4))(v10, Format, a3, a4) - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          sub_10001550(v8);
          return 1;
        }
      }
      else
      {
        *a5 = 1;
      }
    }
    else
    {
      v13 = Buffer;
      v14 = 160;
      if ( _vsnprintf(Buffer, 0xA0u, Format, a7) == -1 )
      {
        do
        {
          if ( v14 >= 1000000 )
            break;
          v14 *= 2;
          v13 = (char *)(*(int (__thiscall **)(int, char *, int))(*(_DWORD *)dword_100580A0 + 16))(
                          dword_100580A0,
                          v13,
                          v14 + 1);
        }
        while ( _vsnprintf(v13, v14, Format, a7) == -1 );
      }
      v15 = (int *)this[7];
      v16 = *v15;
      if ( a2 == 208 )
        (*(void (__thiscall **)(int *, char *))(v16 + 8))(v15, v13);
      else
        (*(void (__thiscall **)(int *, int, char *, int, int))v16)(v15, a2, v13, a3, a4);
      v8 = v17;
    }
  }
  sub_10001550(v8);
  return 0;
}
