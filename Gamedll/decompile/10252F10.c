/*
 * func-name: sub_10252F10
 * func-address: 0x10252f10
 * callers: 0x100185cf
 * callees: 0x10005a1f, 0x1000b753, 0x1000d1d4, 0x1000d350, 0x1000e971, 0x100111d5, 0x10013b79, 0x10014718, 0x1001a0af, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

void __thiscall sub_10252F10(int this, int a2, int a3, unsigned int a4, float *a5)
{
  float v5; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  void *v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  unsigned int v21; // ebx
  char *v22; // eax
  char *v23; // ecx
  int v24; // eax
  int v25; // ebx
  int v26; // [esp-Ch] [ebp-7Ch]
  int v27; // [esp-8h] [ebp-78h]
  int v28; // [esp-8h] [ebp-78h]
  int v29[5]; // [esp+0h] [ebp-70h] BYREF
  void *v30; // [esp+14h] [ebp-5Ch]
  char *v31; // [esp+18h] [ebp-58h]
  int v32; // [esp+1Ch] [ebp-54h]
  unsigned int v33; // [esp+20h] [ebp-50h]
  float v34; // [esp+24h] [ebp-4Ch] BYREF
  _BYTE v35[28]; // [esp+28h] [ebp-48h] BYREF
  int v36; // [esp+44h] [ebp-2Ch]
  float v37; // [esp+48h] [ebp-28h]
  float v38; // [esp+4Ch] [ebp-24h]
  int v39; // [esp+50h] [ebp-20h]
  int v40; // [esp+54h] [ebp-1Ch]
  char v41; // [esp+58h] [ebp-18h]
  int *v42; // [esp+60h] [ebp-10h]
  int v43; // [esp+6Ch] [ebp-4h]

  v42 = v29;
  v5 = *a5;
  v29[4] = this;
  v34 = v5;
  std::wstring::wstring(v35, a5 + 1);
  v7 = *((_DWORD *)a5 + 8);
  v37 = a5[9];
  v8 = *((_DWORD *)a5 + 11);
  v9 = *((_DWORD *)a5 + 12);
  v38 = a5[10];
  v36 = v7;
  LOBYTE(v7) = *((_BYTE *)a5 + 52);
  v39 = v8;
  v40 = v9;
  v41 = v7;
  v10 = *(_DWORD *)(this + 4);
  v11 = 0;
  v43 = 0;
  if ( v10 )
    v11 = (*(_DWORD *)(this + 12) - v10) / 56;
  v33 = v11;
  if ( a4 )
  {
    if ( v10 )
      v12 = (*(_DWORD *)(this + 8) - v10) / 56;
    else
      v12 = 0;
    if ( 76695844 - v12 < a4 )
      sub_100111D5(v29[0], v29[1]);
    if ( v10 )
      v13 = (*(_DWORD *)(this + 8) - v10) / 56;
    else
      v13 = 0;
    if ( v33 >= a4 + v13 )
    {
      v23 = *(char **)(this + 8);
      v31 = &v23[-a3];
      v30 = v23;
      if ( (int)&v23[-a3] / 56 >= a4 )
      {
        v25 = (int)&v23[-56 * a4];
        v32 = 56 * a4;
        *(_DWORD *)(this + 8) = sub_10005A1F(v25, (int)v23, (int)v23);
        sub_1001A0AF(a3, v25, (int)v30);
        sub_1000E971(a3, v32 + a3, (int)&v34);
      }
      else
      {
        v32 = 56 * a4;
        sub_10005A1F(a3, (int)v23, a3 + 56 * a4);
        v27 = a4 - (*(_DWORD *)(this + 8) - a3) / 56;
        v26 = *(_DWORD *)(this + 8);
        LOBYTE(v43) = 3;
        sub_10014718(v26, v27, (int)&v34);
        v24 = v32;
        *(_DWORD *)(this + 8) += v32;
        v28 = *(_DWORD *)(this + 8) - v24;
        v43 = 0;
        sub_1000E971(a3, v28, (int)&v34);
      }
    }
    else
    {
      if ( 76695844 - (v33 >> 1) >= v33 )
        v33 += v33 >> 1;
      else
        v33 = 0;
      if ( v10 )
        v14 = (*(_DWORD *)(this + 8) - v10) / 56;
      else
        v14 = 0;
      if ( v33 < a4 + v14 )
        v33 = a4 + sub_10013B79();
      v15 = (void *)sub_1000D1D4(v33);
      v16 = *(_DWORD *)(this + 4);
      LOBYTE(v31) = 0;
      v30 = v15;
      v32 = (int)v15;
      LOBYTE(v43) = 1;
      v32 = sub_1000B753(v16, a3, (int)v15);
      v17 = sub_10014718(v32, a4, (int)&v34);
      v18 = *(_DWORD *)(this + 8);
      LOBYTE(v31) = 0;
      v32 = v17;
      sub_1000B753(a3, v18, v17);
      v19 = *(_DWORD *)(this + 4);
      v20 = 0;
      v43 = 0;
      if ( v19 )
        v20 = (*(_DWORD *)(this + 8) - v19) / 56;
      v21 = v20 + a4;
      if ( v19 )
      {
        sub_1000D350(v19, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      v22 = (char *)v30;
      *(_DWORD *)(this + 12) = (char *)v30 + 56 * v33;
      *(_DWORD *)(this + 8) = &v22[56 * v21];
      *(_DWORD *)(this + 4) = v22;
    }
  }
  v43 = -1;
  std::wstring::~wstring(v35);
}
