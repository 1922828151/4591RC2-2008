/*
 * func-name: sub_100A3260
 * func-address: 0x100a3260
 * callers: 0x10017bfc
 * callees: 0x102c9d50, 0x102c9d86, 0x102c9d98
 */

_DWORD *__stdcall sub_100A3260(int a1, int a2, int a3, void *a4, char a5)
{
  _DWORD *v5; // esi
  _DWORD v7[10]; // [esp+0h] [ebp-28h] BYREF

  v7[6] = v7;
  v5 = operator new(0x30u);
  v7[5] = v5;
  v7[9] = 1;
  v7[4] = v5;
  if ( v5 )
  {
    v5[1] = a2;
    *v5 = a1;
    v5[2] = a3;
    std::string::string(v5 + 3, a4);
    v5[10] = *((_DWORD *)a4 + 7);
    *((_BYTE *)v5 + 44) = a5;
    *((_BYTE *)v5 + 45) = 0;
  }
  return v5;
}
