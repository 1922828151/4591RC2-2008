/*
 * func-name: sub_10059520
 * func-address: 0x10059520
 * callers: 0x10059520, 0x1005a090
 * callees: 0x100576e0, 0x10059520, 0x1006e070, 0x101a2522
 */

void *__thiscall sub_10059520(_DWORD *this, int *a2, int a3)
{
  bool v3; // zf
  void *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v8; // [esp-8h] [ebp-2Ch]
  _DWORD v9[4]; // [esp+0h] [ebp-24h] BYREF
  void *v10; // [esp+10h] [ebp-14h]
  _DWORD *v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+20h] [ebp-4h]

  v3 = *((_BYTE *)a2 + 45) == 0;
  v4 = (void *)this[1];
  v11 = v9;
  v9[3] = this;
  v10 = v4;
  if ( v3 )
  {
    v5 = sub_100576E0((int)v4, a3, (int)v4, (int)(a2 + 3), *((_BYTE *)a2 + 44));
    v6 = v5;
    if ( *((_BYTE *)v10 + 45) )
      v10 = v5;
    v8 = *a2;
    v12 = 0;
    *v5 = sub_10059520(v8, v5);
    v6[2] = sub_10059520(a2[2], v6);
  }
  return v10;
}
