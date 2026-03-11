/*
 * func-name: sub_100D03F0
 * func-address: 0x100d03f0
 * callers: 0x100d35b0, 0x100d36c0, 0x100d37d0, 0x100d38e0, 0x100d39f0, 0x100d3b00
 * callees: 0x100ce4e0, 0x100cf7e0
 */

int __thiscall sub_100D03F0(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int *v5; // esi
  char v6; // al
  _DWORD *v7; // esi
  int *v8; // ecx
  int v9; // edx
  int result; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // edx
  char v13; // [esp+10h] [ebp-Ch]
  _DWORD *v14; // [esp+14h] [ebp-8h] BYREF
  _DWORD *v15; // [esp+18h] [ebp-4h]

  v4 = (_DWORD *)this[1];
  v5 = (int *)v4[1];
  v6 = 1;
  v13 = 1;
  while ( !*((_BYTE *)v5 + 81) )
  {
    v4 = v5;
    v6 = std::operator<<char>(a3, v5 + 3);
    v13 = v6;
    if ( v6 )
      v5 = (int *)*v5;
    else
      v5 = (int *)v5[2];
  }
  v7 = v4;
  v15 = v4;
  v14 = this;
  if ( v6 )
  {
    if ( v4 == *(_DWORD **)this[1] )
    {
      v8 = sub_100CF7E0(this, &v14, 1, v4, a3);
      v9 = *v8;
      result = a2;
      *(_DWORD *)(a2 + 4) = v8[1];
      *(_BYTE *)(a2 + 8) = 1;
      *(_DWORD *)a2 = v9;
      return result;
    }
    sub_100CE4E0(&v14);
    v7 = v15;
  }
  if ( (unsigned __int8)std::operator<<char>(v7 + 3, a3) )
  {
    v11 = sub_100CF7E0(this, &v14, v13, v4, a3);
    v12 = (_DWORD *)*v11;
    result = a2;
    *(_DWORD *)(a2 + 4) = v11[1];
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    result = a2;
    v12 = v14;
    *(_DWORD *)(a2 + 4) = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  *(_DWORD *)a2 = v12;
  return result;
}
