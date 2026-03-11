/*
 * func-name: sub_101163A0
 * func-address: 0x101163a0
 * callers: 0x101166b0
 * callees: 0x100fdfe0, 0x1010e3d0, 0x10115c20, 0x10115c90, 0x10116020, 0x101160e0, 0x10116170, 0x10116230, 0x10116270, 0x10116370, 0x10126510, 0x101a2500, 0x101a2522
 */

int __thiscall sub_101163A0(int this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  CREControl *v12; // eax
  int v13; // ecx
  CREControl *v14; // eax
  char *v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  CREControl *v20; // ecx
  int v21; // ebx
  CREControl *v23; // [esp-Ch] [ebp-6Ch]
  int v24; // [esp-8h] [ebp-68h]
  int v25; // [esp-8h] [ebp-68h]
  int v26; // [esp+0h] [ebp-60h] BYREF
  int v27[15]; // [esp+Ch] [ebp-54h] BYREF
  CREControl *v28; // [esp+48h] [ebp-18h]
  int v29; // [esp+4Ch] [ebp-14h]
  int *v30; // [esp+50h] [ebp-10h]
  int v31; // [esp+5Ch] [ebp-4h]
  CREControl *v32; // [esp+74h] [ebp+14h]

  v30 = &v26;
  v29 = this;
  sub_10115C20(v27, (int)a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v31 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 60;
  if ( a4 )
  {
    v8 = *(_DWORD *)(this + 4);
    if ( v8 )
      v8 = (*(_DWORD *)(this + 8) - v8) / 60;
    if ( 71582788 - v8 < a4 )
      sub_1010E3D0();
    v9 = *(_DWORD *)(this + 4);
    if ( v9 )
      v9 = (*(_DWORD *)(this + 8) - v9) / 60;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(CREControl **)(this + 8);
      v28 = v20;
      if ( ((int)v20 - a3) / 60 >= a4 )
      {
        v21 = (int)v20 - 60 * a4;
        *(_DWORD *)(this + 8) = sub_10116370(v21, (int)v20, v20);
        sub_10116170(a3, v21, (int)v28);
        sub_10116020(a3, 60 * a4 + a3, (int)v27);
      }
      else
      {
        sub_10116370(a3, (int)v20, (CREControl *)(a3 + 60 * a4));
        v24 = a4 - (*(_DWORD *)(this + 8) - a3) / 60;
        v23 = *(CREControl **)(this + 8);
        LOBYTE(v31) = 3;
        sub_10116230(v23, v24, (int)v27);
        *(_DWORD *)(this + 8) += 60 * a4;
        v25 = *(_DWORD *)(this + 8) - 60 * a4;
        v31 = 0;
        sub_10116020(a3, v25, (int)v27);
      }
    }
    else
    {
      if ( 71582788 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      v11 = *(_DWORD *)(this + 4);
      if ( v11 )
        v11 = (*(_DWORD *)(this + 8) - v11) / 60;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_10126510(this);
      v12 = (CREControl *)sub_100FDFE0(v10);
      v13 = *(_DWORD *)(this + 4);
      LOBYTE(v28) = 0;
      v32 = v12;
      LOBYTE(v31) = 1;
      v14 = sub_101160E0(v13, a3, v12);
      v15 = sub_10116230(v14, a4, (int)v27);
      v16 = *(_DWORD *)(this + 8);
      LOBYTE(v28) = 0;
      sub_101160E0(a3, v16, (CREControl *)v15);
      v17 = *(_DWORD *)(this + 4);
      v31 = 0;
      if ( v17 )
        v17 = (*(_DWORD *)(this + 8) - v17) / 60;
      v18 = v17 + a4;
      v19 = *(_DWORD *)(this + 4);
      if ( v19 )
      {
        sub_10116270(v19, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v32 + 60 * v10;
      *(_DWORD *)(this + 8) = (char *)v32 + 60 * v18;
      *(_DWORD *)(this + 4) = v32;
    }
  }
  v31 = -1;
  return sub_10115C90((int)v27);
}
