/*
 * func-name: sub_100CFEA0
 * func-address: 0x100cfea0
 * callers: 0x10016f09
 * callees: 0x10001aaf, 0x10004d95, 0x100073fb, 0x10009e58, 0x1000c1b2, 0x1000d445, 0x1001050f, 0x10010a1e, 0x10014213, 0x10015159, 0x10015370, 0x102c9d50, 0x102c9d86
 */

void __thiscall sub_100CFEA0(int this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // ecx
  int v21; // ebx
  int v22; // [esp-Ch] [ebp-ECh]
  int v23; // [esp-8h] [ebp-E8h]
  int v24; // [esp-8h] [ebp-E8h]
  int v25[4]; // [esp+0h] [ebp-E0h] BYREF
  _BYTE v26[104]; // [esp+10h] [ebp-D0h] BYREF
  void *v27; // [esp+78h] [ebp-68h]
  int v28; // [esp+C8h] [ebp-18h]
  int v29; // [esp+CCh] [ebp-14h]
  int *v30; // [esp+D0h] [ebp-10h]
  int v31; // [esp+DCh] [ebp-4h]
  int v32; // [esp+F0h] [ebp+10h]
  char *v33; // [esp+F4h] [ebp+14h]

  v30 = v25;
  v28 = this;
  sub_1000D445((int)a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v31 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 184;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 184;
    else
      v8 = 0;
    if ( 23342213 - v8 < a4 )
      sub_10015370(v25[0], v25[1]);
    if ( *(_DWORD *)(this + 4) )
      v9 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 184;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(_DWORD *)(this + 8);
      v29 = v20;
      if ( (v20 - a3) / 184 >= a4 )
      {
        v21 = 184 * a4;
        v32 = v20 - 184 * a4;
        *(_DWORD *)(this + 8) = sub_10004D95(v20 - v21, v20, v20);
        sub_10014213(a3, v32, v29);
        sub_1001050F(a3, a3 + v21, (int)v26);
      }
      else
      {
        sub_10004D95(a3, v20, a3 + 184 * a4);
        v23 = a4 - (*(_DWORD *)(this + 8) - a3) / 184;
        v22 = *(_DWORD *)(this + 8);
        LOBYTE(v31) = 3;
        sub_1000C1B2(v22, v23, (int)v26);
        *(_DWORD *)(this + 8) += 184 * a4;
        v24 = *(_DWORD *)(this + 8) - 184 * a4;
        v31 = 0;
        sub_1001050F(a3, v24, (int)v26);
      }
    }
    else
    {
      if ( 23342213 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( *(_DWORD *)(this + 4) )
        v11 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 184;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_10001AAF();
      v12 = sub_100073FB(v10);
      v13 = *(_DWORD *)(this + 4);
      LOBYTE(v29) = 0;
      v33 = (char *)v12;
      LOBYTE(v31) = 1;
      v14 = sub_10009E58(v13, a3, v12, this);
      v15 = sub_1000C1B2(v14, a4, (int)v26);
      v16 = *(_DWORD *)(this + 8);
      LOBYTE(v29) = 0;
      sub_10009E58(a3, v16, v15, this);
      v17 = *(_DWORD *)(this + 4);
      if ( v17 )
        v17 = (*(_DWORD *)(this + 8) - v17) / 184;
      v18 = v17 + a4;
      v19 = *(_DWORD *)(this + 4);
      if ( v19 )
      {
        sub_10010A1E(v19, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = &v33[184 * v10];
      *(_DWORD *)(this + 8) = &v33[184 * v18];
      *(_DWORD *)(this + 4) = v33;
    }
  }
  if ( v27 )
    operator delete(v27);
}
