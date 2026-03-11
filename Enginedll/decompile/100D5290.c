/*
 * func-name: sub_100D5290
 * func-address: 0x100d5290
 * callers: 0x100d5580
 * callees: 0x1006c000, 0x1006c4d0, 0x1006fd90, 0x1006fe50, 0x10075de0, 0x10075f50, 0x10075fb0, 0x10075fe0, 0x100a1af0, 0x100d50e0, 0x100d5130, 0x100d5200, 0x101a2500, 0x101a2522
 */

void __thiscall sub_100D5290(int this, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  CREControl *v12; // eax
  int v13; // ecx
  CREControl *v14; // eax
  char *v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // edi
  CREControl *v20; // ecx
  int v21; // edi
  CREControl *v22; // [esp-Ch] [ebp-44h]
  int v23; // [esp-8h] [ebp-40h]
  int v24; // [esp-8h] [ebp-40h]
  int v25; // [esp+0h] [ebp-38h] BYREF
  _DWORD v26[5]; // [esp+Ch] [ebp-2Ch] BYREF
  int v27; // [esp+20h] [ebp-18h]
  int v28; // [esp+24h] [ebp-14h]
  int *v29; // [esp+28h] [ebp-10h]
  int v30; // [esp+34h] [ebp-4h]
  int v31; // [esp+48h] [ebp+10h]
  CREControl *v32; // [esp+4Ch] [ebp+14h]
  CREControl *v33; // [esp+4Ch] [ebp+14h]

  v29 = &v25;
  v28 = this;
  sub_1006FE50(v26, (int)a5);
  v26[4] = a5[4];
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v30 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 20;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 20;
    else
      v8 = 0;
    if ( 214748364 - v8 < a4 )
      sub_1006C000();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 20;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(CREControl **)(this + 8);
      v33 = v20;
      if ( ((int)v20 - a3) / 20 >= a4 )
      {
        v21 = 20 * a4;
        v31 = (int)v20 - 20 * a4;
        *(_DWORD *)(this + 8) = sub_10075FB0((int)v20 - v21, (int)v20, v20);
        sub_100D5130(a3, v31, (int)v33);
        sub_100D50E0(a3, a3 + v21, (int)v26);
      }
      else
      {
        sub_10075FB0(a3, (int)v20, (CREControl *)(a3 + 20 * a4));
        v23 = a4 - (*(_DWORD *)(this + 8) - a3) / 20;
        v22 = *(CREControl **)(this + 8);
        LOBYTE(v30) = 3;
        sub_100D5200(v22, v23, (int)v26);
        *(_DWORD *)(this + 8) += 20 * a4;
        v24 = *(_DWORD *)(this + 8) - 20 * a4;
        v30 = 0;
        sub_100D50E0(a3, v24, (int)v26);
      }
    }
    else
    {
      if ( 214748364 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 20;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + std::vector<AttributeRange>::size((_DWORD *)this);
      v12 = (CREControl *)sub_1006C4D0(v10);
      v13 = *(_DWORD *)(this + 4);
      LOBYTE(v27) = 0;
      v32 = v12;
      LOBYTE(v30) = 1;
      v14 = sub_10075DE0(v13, a3, v12);
      v15 = sub_100D5200(v14, a4, (int)v26);
      v16 = *(_DWORD *)(this + 8);
      LOBYTE(v27) = 0;
      sub_10075DE0(a3, v16, (CREControl *)v15);
      v17 = *(_DWORD *)(this + 4);
      v18 = 0;
      v30 = 0;
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) / 20;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_10075F50(v17, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v32 + 20 * v10;
      *(_DWORD *)(this + 8) = (char *)v32 + 20 * v19;
      *(_DWORD *)(this + 4) = v32;
    }
  }
  v30 = -1;
  sub_1006FD90((int)v26);
}
