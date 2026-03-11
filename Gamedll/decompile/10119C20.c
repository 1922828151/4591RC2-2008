/*
 * func-name: sub_10119C20
 * func-address: 0x10119c20
 * callers: 0x10017b9d
 * callees: 0x1000b014, 0x1000c42d, 0x1000c5fe, 0x1000d09e, 0x1000d701, 0x10011b7b, 0x10011c61, 0x10011ce8, 0x1001461e, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

void __thiscall sub_10119C20(int this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // eax
  int v12; // ecx
  void *v13; // eax
  int v14; // ecx
  void *v15; // ebx
  int v16; // eax
  unsigned int v17; // edi
  char *v18; // eax
  char *v19; // ecx
  int v20; // eax
  int v21; // edi
  void *v22; // [esp-Ch] [ebp-60h]
  int v23; // [esp-8h] [ebp-5Ch]
  int v24; // [esp-8h] [ebp-5Ch]
  int v25[5]; // [esp+0h] [ebp-54h] BYREF
  void *v26; // [esp+14h] [ebp-40h]
  char *v27; // [esp+18h] [ebp-3Ch]
  int v28; // [esp+1Ch] [ebp-38h]
  unsigned int v29; // [esp+20h] [ebp-34h]
  _BYTE v30[28]; // [esp+24h] [ebp-30h] BYREF
  int *v31; // [esp+44h] [ebp-10h]
  int v32; // [esp+50h] [ebp-4h]

  v31 = v25;
  v25[4] = this;
  std::string::string(v30, a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v32 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 28;
  v29 = v7;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 28;
    else
      v8 = 0;
    if ( 153391689 - v8 < a4 )
      sub_1001461E(v25[0], v25[1]);
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 28;
    else
      v9 = 0;
    if ( v29 >= a4 + v9 )
    {
      v19 = *(char **)(this + 8);
      v27 = &v19[-a3];
      v26 = v19;
      if ( (int)&v19[-a3] / 28 >= a4 )
      {
        v21 = (int)&v19[-28 * a4];
        v28 = 28 * a4;
        *(_DWORD *)(this + 8) = sub_1000D701(v21, (int)v19, v19);
        sub_10011C61(a3, v21, (int)v26);
        sub_1000D09E(a3, a3 + v28, (int)v30);
      }
      else
      {
        v28 = 28 * a4;
        sub_1000D701(a3, (int)v19, (void *)(a3 + 28 * a4));
        v23 = a4 - (*(_DWORD *)(this + 8) - a3) / 28;
        v22 = *(void **)(this + 8);
        LOBYTE(v32) = 3;
        sub_10011CE8(v22, v23, v30);
        v20 = v28;
        *(_DWORD *)(this + 8) += v28;
        v24 = *(_DWORD *)(this + 8) - v20;
        v32 = 0;
        sub_1000D09E(a3, v24, (int)v30);
      }
    }
    else
    {
      if ( 153391689 - (v29 >> 1) >= v29 )
        v29 += v29 >> 1;
      else
        v29 = 0;
      if ( v6 )
        v10 = (*(_DWORD *)(this + 8) - v6) / 28;
      else
        v10 = 0;
      if ( v29 < a4 + v10 )
        v29 = a4 + sub_10011B7B();
      v11 = (void *)sub_1000C42D(v29);
      v12 = *(_DWORD *)(this + 4);
      LOBYTE(v27) = 0;
      v26 = v11;
      v28 = (int)v11;
      LOBYTE(v32) = 1;
      v28 = sub_1000C5FE(v12, a3, v11);
      v13 = (void *)sub_10011CE8((void *)v28, a4, v30);
      v14 = *(_DWORD *)(this + 8);
      LOBYTE(v27) = 0;
      v28 = (int)v13;
      sub_1000C5FE(a3, v14, v13);
      v15 = *(void **)(this + 4);
      v16 = 0;
      v32 = 0;
      if ( v15 )
        v16 = (*(_DWORD *)(this + 8) - (int)v15) / 28;
      v17 = v16 + a4;
      if ( v15 )
      {
        sub_1000B014(v15, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      v18 = (char *)v26;
      *(_DWORD *)(this + 12) = (char *)v26 + 28 * v29;
      *(_DWORD *)(this + 8) = &v18[28 * v17];
      *(_DWORD *)(this + 4) = v18;
    }
  }
  v32 = -1;
  std::string::~string(v30);
}
