/*
 * func-name: sub_10060030
 * func-address: 0x10060030
 * callers: 0x10060160, 0x10060360
 * callees: 0x100619e0, 0x10061a80
 */

int __thiscall sub_10060030(int this, unsigned __int16 a2)
{
  int v3; // ecx
  int result; // eax
  _DWORD *v5; // esi
  int v6; // ebx
  unsigned __int16 v7; // di
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // edx
  unsigned __int16 v11; // di
  __int16 v12; // [esp-10h] [ebp-20h]
  unsigned int v13; // [esp+4h] [ebp-Ch]
  __int16 v14; // [esp+8h] [ebp-8h]
  int v15; // [esp+Ch] [ebp-4h]
  __int16 v16; // [esp+14h] [ebp+4h]

  v3 = 12 * a2;
  result = *(unsigned __int16 *)(*(_DWORD *)(this + 24) + v3 + 4);
  v15 = v3;
  v16 = *(_WORD *)(*(_DWORD *)(this + 24) + v3 + 4);
  if ( (_WORD)result == 0xFFFF )
  {
    *(_WORD *)(*(_DWORD *)(this + 24) + v3 + 4) = -1;
  }
  else
  {
    v5 = (_DWORD *)(this + 80);
    while ( 1 )
    {
      v6 = 12 * (unsigned __int16)result;
      v7 = *(_WORD *)(v6 + *v5 + 4);
      v8 = *(_DWORD *)(v6 + *v5);
      v9 = *(_DWORD *)(this + 12);
      v13 = v8;
      if ( !v9 || v8 >= (*(_DWORD *)(this + 16) - v9) >> 1 )
      {
        invalid_parameter_noinfo();
        v8 = v13;
      }
      if ( v7 == *(_WORD *)(*(_DWORD *)(this + 12) + 2 * v8) )
      {
        v10 = *(_DWORD *)(this + 12);
        v14 = *(_WORD *)(*(_DWORD *)(this + 52) + 6 * v7 + 4);
        if ( !v10 || v8 >= (*(_DWORD *)(this + 16) - v10) >> 1 )
        {
          invalid_parameter_noinfo();
          v8 = v13;
        }
        *(_WORD *)(*(_DWORD *)(this + 12) + 2 * v8) = v14;
      }
      sub_10061A80(v7);
      *(_WORD *)(*(_DWORD *)(this + 52) + 6 * v7 + 4) = *(_WORD *)(this + 68);
      *(_WORD *)(this + 68) = v7;
      v11 = v16;
      v12 = v16;
      v16 = *(_WORD *)(v6 + *v5 + 10);
      sub_100619E0(v12);
      *(_WORD *)(*v5 + 12 * v11 + 10) = *(_WORD *)(this + 96);
      *(_WORD *)(this + 96) = v11;
      if ( v16 == -1 )
        break;
      LOWORD(result) = v16;
    }
    result = v15;
    *(_WORD *)(*(_DWORD *)(this + 24) + v15 + 4) = -1;
  }
  return result;
}
