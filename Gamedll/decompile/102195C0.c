/*
 * func-name: sub_102195C0
 * func-address: 0x102195c0
 * callers: 0x100045f2
 * callees: 0x10001e42, 0x100093fe, 0x1000b50a, 0x1000f99d, 0x10011af9, 0x10014452, 0x10015b22, 0x1001624d, 0x100186d8, 0x10019b91, 0x102c9d50, 0x102c9d86
 */

void __thiscall sub_102195C0(int this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  int v22; // edi
  int v23; // [esp-Ch] [ebp-44h]
  int v24; // [esp-8h] [ebp-40h]
  int v25; // [esp-8h] [ebp-40h]
  int v26[4]; // [esp+0h] [ebp-38h] BYREF
  _BYTE v27[4]; // [esp+10h] [ebp-28h] BYREF
  void *v28; // [esp+14h] [ebp-24h]
  int v29; // [esp+20h] [ebp-18h]
  int v30; // [esp+24h] [ebp-14h]
  int *v31; // [esp+28h] [ebp-10h]
  int v32; // [esp+34h] [ebp-4h]
  char *v33; // [esp+4Ch] [ebp+14h]

  v31 = v26;
  v30 = this;
  sub_1000B50A((int)a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v32 = 0;
  if ( v6 )
    v8 = (*(_DWORD *)(this + 12) - v6) >> 4;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v6 )
      v7 = (*(_DWORD *)(this + 8) - v6) >> 4;
    if ( 0xFFFFFFF - v7 < a4 )
      sub_10014452(v26[0], v26[1]);
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) >> 4;
    else
      v9 = 0;
    if ( v8 >= a4 + v9 )
    {
      v21 = *(_DWORD *)(this + 8);
      v29 = v21;
      if ( (v21 - a3) >> 4 >= a4 )
      {
        v22 = v21 - 16 * a4;
        *(_DWORD *)(this + 8) = sub_100186D8(v22, v21, v21);
        sub_1000F99D(a3, v22, v29);
        sub_10001E42(a3, a3 + 16 * a4, (int)v27);
      }
      else
      {
        sub_100186D8(a3, v21, a3 + 16 * a4);
        v24 = a4 - ((*(_DWORD *)(this + 8) - a3) >> 4);
        v23 = *(_DWORD *)(this + 8);
        LOBYTE(v32) = 3;
        sub_1001624D(v23, v24, (int)v27);
        *(_DWORD *)(this + 8) += 16 * a4;
        v25 = *(_DWORD *)(this + 8) - 16 * a4;
        v32 = 0;
        sub_10001E42(a3, v25, (int)v27);
      }
    }
    else
    {
      if ( 0xFFFFFFF - (v8 >> 1) >= v8 )
        v10 = (v8 >> 1) + v8;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) >> 4;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
      {
        if ( v6 )
          v12 = (*(_DWORD *)(this + 8) - v6) >> 4;
        else
          v12 = 0;
        v10 = v12 + a4;
      }
      v13 = sub_10015B22(v10);
      v14 = *(_DWORD *)(this + 4);
      LOBYTE(v29) = 0;
      v33 = (char *)v13;
      LOBYTE(v32) = 1;
      v15 = sub_10019B91(v14, a3, v13, this);
      v16 = sub_1001624D(v15, a4, (int)v27);
      v17 = *(_DWORD *)(this + 8);
      LOBYTE(v29) = 0;
      sub_10019B91(a3, v17, v16, this);
      v18 = *(_DWORD *)(this + 4);
      if ( v18 )
        v19 = (*(_DWORD *)(this + 8) - v18) >> 4;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
      {
        sub_100093FE(v18, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = &v33[16 * v10];
      *(_DWORD *)(this + 8) = &v33[16 * v20];
      *(_DWORD *)(this + 4) = v33;
    }
  }
  if ( v28 )
    operator delete(v28);
}
