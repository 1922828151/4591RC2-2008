/*
 * func-name: sub_102B44C0
 * func-address: 0x102b44c0
 * callers: 0x1000c3e2
 * callees: 0x100013f2, 0x100035c6, 0x10004025, 0x10012977
 */

unsigned int __thiscall sub_102B44C0(char *this)
{
  char *v1; // edi
  unsigned int v2; // ecx
  unsigned int result; // eax
  unsigned int v4; // ebx
  bool v5; // cf
  int v6; // ebx
  int v7; // ebp
  _DWORD v8[2]; // [esp+10h] [ebp-20h] BYREF
  int v9; // [esp+18h] [ebp-18h] BYREF
  int v10; // [esp+20h] [ebp-10h] BYREF
  void *v11; // [esp+24h] [ebp-Ch]
  int v12; // [esp+28h] [ebp-8h]
  int v13; // [esp+2Ch] [ebp-4h]

  v8[1] = this;
  v1 = this + 48;
  while ( 1 )
  {
    v2 = *((_DWORD *)v1 + 1);
    if ( !v2 )
      break;
    result = (int)(*((_DWORD *)v1 + 2) - v2) >> 2;
    if ( result <= 0x400 )
      break;
    v4 = *((_DWORD *)v1 + 1);
    v5 = v2 < *((_DWORD *)v1 + 2);
    if ( v2 > *((_DWORD *)v1 + 2) )
    {
      _invalid_parameter_noinfo();
      v5 = v4 < *((_DWORD *)v1 + 2);
    }
    if ( !v5 )
      _invalid_parameter_noinfo();
    sub_100013F2((int)&v10, v4);
    v6 = v13;
    v7 = v12;
    v8[0] = 0;
    sub_10004025(v10, (int)v11, v12, v13, (int)v8);
    sub_10012977((int)&v9, v10, v11, v7, v6);
    result = sub_100035C6();
  }
  return result;
}
