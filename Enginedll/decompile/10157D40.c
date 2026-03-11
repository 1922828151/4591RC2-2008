/*
 * func-name: sub_10157D40
 * func-address: 0x10157d40
 * callers: 0x10158360
 * callees: 0x10051fd0, 0x10052210, 0x1006bd90, 0x100cded0, 0x100d0040, 0x100fe6a0, 0x100fec20, 0x101466d0, 0x101a2500, 0x101a2522
 */

int __thiscall sub_10157D40(int this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v5; // edx
  int result; // eax
  int v8; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // edi
  _DWORD *v19; // ecx
  int v20; // edi
  _DWORD *v21; // [esp-20h] [ebp-48h]
  _DWORD *v22; // [esp-Ch] [ebp-34h]
  int v23; // [esp-8h] [ebp-30h]
  int v24; // [esp+0h] [ebp-28h] BYREF
  _DWORD v25[4]; // [esp+Ch] [ebp-1Ch] BYREF
  int v26; // [esp+24h] [ebp-4h]
  int v27; // [esp+38h] [ebp+10h]
  _DWORD *v28; // [esp+3Ch] [ebp+14h]
  void *v29; // [esp+3Ch] [ebp+14h]

  v5 = a5[1];
  result = a5[2];
  v25[0] = *a5;
  v8 = *(_DWORD *)(this + 4);
  v25[3] = &v24;
  v25[1] = v5;
  v25[2] = result;
  if ( v8 )
  {
    result = 715827883 * (*(_DWORD *)(this + 12) - v8);
    v9 = (*(_DWORD *)(this + 12) - v8) / 12;
  }
  else
  {
    v9 = 0;
  }
  if ( a4 )
  {
    if ( v8 )
      v10 = (*(_DWORD *)(this + 8) - v8) / 12;
    else
      v10 = 0;
    if ( 357913941 - v10 < a4 )
      sub_100CDED0();
    if ( v8 )
      v11 = (*(_DWORD *)(this + 8) - v8) / 12;
    else
      v11 = 0;
    if ( v9 >= a4 + v11 )
    {
      v19 = *(_DWORD **)(this + 8);
      v29 = v19;
      if ( ((char *)v19 - a3) / 12 >= a4 )
      {
        v20 = 12 * a4;
        v27 = (int)&v19[-3 * a4];
        *(_DWORD *)(this + 8) = sub_101466D0(&v19[v20 / 0xFFFFFFFC], v19, v19);
        sub_100FEC20((int)a3, v27, (int)v29);
        return (int)sub_100FE6A0(a3, &a3[v20], v25);
      }
      else
      {
        sub_101466D0(a3, v19, &a3[12 * a4]);
        v23 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 12;
        v22 = *(_DWORD **)(this + 8);
        v26 = 2;
        sub_100D0040(v22, v23, v25);
        *(_DWORD *)(this + 8) += 12 * a4;
        return (int)sub_100FE6A0(a3, (_DWORD *)(*(_DWORD *)(this + 8) - 12 * a4), v25);
      }
    }
    else
    {
      if ( 357913941 - (v9 >> 1) >= v9 )
        v12 = (v9 >> 1) + v9;
      else
        v12 = 0;
      if ( v8 )
        v13 = (*(_DWORD *)(this + 8) - v8) / 12;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
        v12 = a4 + sub_1006BD90((_DWORD *)this);
      v28 = sub_10051FD0(v12);
      v21 = *(_DWORD **)(this + 4);
      v26 = 0;
      v14 = sub_10052210(v21, a3, v28);
      v15 = sub_100D0040(v14, a4, v25);
      sub_10052210(a3, *(_DWORD **)(this + 8), v15);
      v16 = *(_DWORD *)(this + 4);
      if ( v16 )
        v17 = (*(_DWORD *)(this + 8) - v16) / 12;
      else
        v17 = 0;
      v18 = v17 + a4;
      if ( v16 )
        operator delete(*(void **)(this + 4));
      result = (int)v28;
      *(_DWORD *)(this + 12) = &v28[3 * v12];
      *(_DWORD *)(this + 8) = &v28[3 * v18];
      *(_DWORD *)(this + 4) = v28;
    }
  }
  return result;
}
