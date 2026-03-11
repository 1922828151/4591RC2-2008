/*
 * func-name: sub_10072860
 * func-address: 0x10072860
 * callers: 0x1001a3ac
 * callees: 0x10007bd0, 0x10013a5c, 0x1001a3ac, 0x102c9d86
 */

void *__thiscall sub_10072860(_DWORD *this, int a2, int a3)
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
  v3 = *(_BYTE *)(a2 + 17) == 0;
  v4 = (void *)this[1];
  v10 = v4;
  if ( v3 )
  {
    v5 = (int *)sub_10007BD0((int)v4, a3, (int)v4, a2 + 12, *(_BYTE *)(a2 + 16));
    v6 = (int)v5;
    if ( *((_BYTE *)v10 + 17) )
      v10 = v5;
    v8 = *(_DWORD *)a2;
    v12 = 0;
    *v5 = sub_1001A3AC(v8, (int)v5);
    *(_DWORD *)(v6 + 8) = sub_1001A3AC(*(_DWORD *)(a2 + 8), v6);
  }
  return v10;
}
