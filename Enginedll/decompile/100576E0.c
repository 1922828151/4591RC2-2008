/*
 * func-name: sub_100576E0
 * func-address: 0x100576e0
 * callers: 0x10059520, 0x10131d30
 * callees: 0x101a2500, 0x101a2522, 0x101a2534
 */

_DWORD *__stdcall sub_100576E0(int a1, int a2, int a3, int a4, char a5)
{
  _DWORD *v5; // esi
  int v7; // [esp+0h] [ebp-24h] BYREF
  CREControl *v8; // [esp+Ch] [ebp-18h]
  void *v9; // [esp+10h] [ebp-14h]
  int *v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]

  v10 = &v7;
  v5 = operator new(0x30u);
  v9 = v5;
  v11 = 1;
  v8 = (CREControl *)v5;
  if ( v5 )
  {
    v5[1] = a2;
    *v5 = a1;
    v5[2] = a3;
    std::string::string(v5 + 3, a4);
    *((float *)v5 + 10) = *(float *)(a4 + 28);
    *((_BYTE *)v5 + 44) = a5;
    *((_BYTE *)v5 + 45) = 0;
  }
  return v5;
}
