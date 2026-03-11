/*
 * func-name: sub_10071EC0
 * func-address: 0x10071ec0
 * callers: 0x1000253b
 * callees: 0x1000253b, 0x1001002d, 0x10010523, 0x102c9d86
 */

void *__thiscall sub_10071EC0(_DWORD *this, int a2, int a3)
{
  bool v3; // zf
  void *v4; // eax
  int *v5; // eax
  int v6; // edi
  int v8; // [esp-8h] [ebp-30h]
  _DWORD v9[5]; // [esp+0h] [ebp-28h] BYREF
  void *v10; // [esp+14h] [ebp-14h]
  _DWORD *v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+24h] [ebp-4h]

  v11 = v9;
  v9[4] = this;
  v3 = *(_BYTE *)(a2 + 21) == 0;
  v4 = (void *)this[1];
  v10 = v4;
  if ( v3 )
  {
    v5 = (int *)sub_1001002D((int)v4, a3, (int)v4, a2 + 12, *(_BYTE *)(a2 + 20));
    v6 = (int)v5;
    if ( *((_BYTE *)v10 + 21) )
      v10 = v5;
    v8 = *(_DWORD *)a2;
    v12 = 0;
    *v5 = sub_1000253B(v8, (int)v5);
    *(_DWORD *)(v6 + 8) = sub_1000253B(*(_DWORD *)(a2 + 8), v6);
  }
  return v10;
}
