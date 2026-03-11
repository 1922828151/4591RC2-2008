/*
 * func-name: sub_1023B8A0
 * func-address: 0x1023b8a0
 * callers: 0x10009796
 * callees: 0x10001654, 0x100035d5, 0x10005b00, 0x10006127, 0x10007491, 0x1000ac4f, 0x1000ee7b, 0x100126a2, 0x10014696, 0x100164d7, 0x100167de, 0x10017256, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_1023B8A0(int this, int a2, _BYTE *a3, unsigned int a4, void *a5)
{
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  void *v13; // eax
  int v14; // ecx
  void *v15; // edi
  int v16; // eax
  unsigned int v17; // ebx
  char *v18; // eax
  _BYTE *v19; // ecx
  int v20; // eax
  char *v21; // ebx
  void *v23; // [esp-Ch] [ebp-7Ch]
  int v24; // [esp-8h] [ebp-78h]
  int v25; // [esp-8h] [ebp-78h]
  int v26; // [esp+0h] [ebp-70h] BYREF
  int v27; // [esp+4h] [ebp-6Ch]
  int v28; // [esp+10h] [ebp-60h]
  void *v29; // [esp+14h] [ebp-5Ch]
  int v30; // [esp+18h] [ebp-58h]
  unsigned int v31; // [esp+1Ch] [ebp-54h]
  int v32; // [esp+20h] [ebp-50h]
  _BYTE v33[56]; // [esp+24h] [ebp-4Ch] BYREF
  int *v34; // [esp+60h] [ebp-10h]
  int v35; // [esp+6Ch] [ebp-4h]

  v34 = &v26;
  v28 = this;
  sub_1000EE7B(a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v35 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 56;
  v31 = v7;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 56;
    else
      v8 = 0;
    if ( 76695844 - v8 < a4 )
      sub_100167DE(v26, v27);
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 56;
    else
      v9 = 0;
    if ( v31 >= a4 + v9 )
    {
      v19 = *(_BYTE **)(this + 8);
      v32 = v19 - a3;
      v29 = v19;
      if ( (v19 - a3) / 56 >= a4 )
      {
        v21 = &v19[-56 * a4];
        v30 = 56 * a4;
        *(_DWORD *)(this + 8) = sub_10005B00(v21, (int)v19, v19);
        sub_100126A2((int)a3, (int)v21, (int)v29);
        sub_100035D5((int)a3, (int)&a3[v30], (int)v33);
      }
      else
      {
        v30 = 56 * a4;
        sub_10005B00(a3, (int)v19, &a3[56 * a4]);
        v24 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 56;
        v23 = *(void **)(this + 8);
        LOBYTE(v35) = 3;
        sub_1000AC4F(v23, v24, v33);
        v20 = v30;
        *(_DWORD *)(this + 8) += v30;
        v25 = *(_DWORD *)(this + 8) - v20;
        v35 = 0;
        sub_100035D5((int)a3, v25, (int)v33);
      }
    }
    else
    {
      if ( 76695844 - (v31 >> 1) >= v31 )
        v31 += v31 >> 1;
      else
        v31 = 0;
      if ( v6 )
        v10 = (*(_DWORD *)(this + 8) - v6) / 56;
      else
        v10 = 0;
      if ( v31 < a4 + v10 )
        v31 = a4 + sub_10007491();
      v11 = (void *)sub_10001654(v31);
      v12 = *(void **)(this + 4);
      LOBYTE(v32) = 0;
      v29 = v11;
      v30 = (int)v11;
      LOBYTE(v35) = 1;
      v30 = sub_10017256(v12, (int)a3, v11);
      v13 = (void *)sub_1000AC4F((void *)v30, a4, v33);
      v14 = *(_DWORD *)(this + 8);
      LOBYTE(v32) = 0;
      v30 = (int)v13;
      sub_10017256(a3, v14, v13);
      v15 = *(void **)(this + 4);
      v16 = 0;
      v35 = 0;
      if ( v15 )
        v16 = (*(_DWORD *)(this + 8) - (int)v15) / 56;
      v17 = v16 + a4;
      if ( v15 )
      {
        sub_10006127(v15, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      v18 = (char *)v29;
      *(_DWORD *)(this + 12) = (char *)v29 + 56 * v31;
      *(_DWORD *)(this + 8) = &v18[56 * v17];
      *(_DWORD *)(this + 4) = v18;
    }
  }
  v35 = -1;
  return sub_100164D7(v26, v27);
}
