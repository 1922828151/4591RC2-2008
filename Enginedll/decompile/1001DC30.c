/*
 * func-name: sub_1001DC30
 * func-address: 0x1001dc30
 * callers: 0x10023c80, 0x1013edb0
 * callees: 0x101a2500, 0x101a2522, 0x101a2534
 */

_DWORD *__stdcall sub_1001DC30(int a1, int a2, int a3, int a4, char a5)
{
  _DWORD *v5; // esi
  int v7; // [esp+0h] [ebp-24h] BYREF
  CREControl *v8; // [esp+Ch] [ebp-18h]
  void *v9; // [esp+10h] [ebp-14h]
  int *v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]

  v10 = &v7;
  v5 = operator new(0x34u);
  v9 = v5;
  v11 = 1;
  v8 = (CREControl *)v5;
  if ( v5 )
  {
    v5[1] = a2;
    *v5 = a1;
    v5[2] = a3;
    std::string::string(v5 + 3, a4);
    v5[10] = *(_DWORD *)(a4 + 28);
    v5[11] = *(_DWORD *)(a4 + 32);
    *((_BYTE *)v5 + 48) = a5;
    *((_BYTE *)v5 + 49) = 0;
  }
  return v5;
}
