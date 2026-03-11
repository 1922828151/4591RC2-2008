/*
 * func-name: sub_102739A0
 * func-address: 0x102739a0
 * callers: 0x100048d6
 * callees: 0x10001fc8, 0x100028d8, 0x10003c29, 0x10003dff, 0x10006ee2, 0x1000a7bd, 0x100110d6, 0x1001177f, 0x10013f11, 0x10016e55, 0x1001963c, 0x102c9d50, 0x102c9d86
 */

void __thiscall sub_102739A0(int this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // edi
  int v20; // ecx
  int v21; // edi
  int v22; // [esp-Ch] [ebp-84h]
  int v23; // [esp-8h] [ebp-80h]
  int v24; // [esp-8h] [ebp-80h]
  int v25[4]; // [esp+0h] [ebp-78h] BYREF
  _BYTE v26[44]; // [esp+10h] [ebp-68h] BYREF
  void *v27; // [esp+3Ch] [ebp-3Ch]
  void *v28; // [esp+4Ch] [ebp-2Ch]
  int v29; // [esp+50h] [ebp-28h]
  int v30; // [esp+54h] [ebp-24h]
  int v31; // [esp+60h] [ebp-18h]
  int v32; // [esp+64h] [ebp-14h]
  int *v33; // [esp+68h] [ebp-10h]
  int v34; // [esp+74h] [ebp-4h]
  int v35; // [esp+88h] [ebp+10h]
  char *v36; // [esp+8Ch] [ebp+14h]
  void *v37; // [esp+8Ch] [ebp+14h]

  v33 = v25;
  v32 = this;
  sub_10001FC8((int)a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v34 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 80;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 80;
    else
      v8 = 0;
    if ( 53687091 - v8 < a4 )
      sub_1001177F(v25[0], v25[1]);
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 80;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(_DWORD *)(this + 8);
      v37 = (void *)v20;
      if ( (v20 - a3) / 80 >= a4 )
      {
        v21 = 80 * a4;
        v35 = v20 - 80 * a4;
        *(_DWORD *)(this + 8) = sub_100110D6(v20 - v21, v20, v20);
        sub_10013F11(a3, v35, (int)v37);
        sub_10003C29(a3, a3 + v21, (int)v26);
      }
      else
      {
        sub_100110D6(a3, v20, a3 + 80 * a4);
        v23 = a4 - (*(_DWORD *)(this + 8) - a3) / 80;
        v22 = *(_DWORD *)(this + 8);
        LOBYTE(v34) = 3;
        sub_10006EE2(v22, v23, (int)v26);
        *(_DWORD *)(this + 8) += 80 * a4;
        v24 = *(_DWORD *)(this + 8) - 80 * a4;
        v34 = 0;
        sub_10003C29(a3, v24, (int)v26);
      }
    }
    else
    {
      if ( 53687091 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 80;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_1000A7BD();
      v12 = sub_1001963C(v10);
      v13 = *(_DWORD *)(this + 4);
      LOBYTE(v31) = 0;
      v36 = (char *)v12;
      LOBYTE(v34) = 1;
      v14 = sub_10016E55(v13, a3, v12, this);
      v15 = sub_10006EE2(v14, a4, (int)v26);
      v16 = *(_DWORD *)(this + 8);
      LOBYTE(v31) = 0;
      sub_10016E55(a3, v16, v15, this);
      v17 = *(_DWORD *)(this + 4);
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) / 80;
      else
        v18 = 0;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_10003DFF(v17, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = &v36[80 * v10];
      *(_DWORD *)(this + 8) = &v36[80 * v19];
      *(_DWORD *)(this + 4) = v36;
    }
  }
  if ( v28 )
    operator delete(v28);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  if ( v27 )
    operator delete(v27);
}
