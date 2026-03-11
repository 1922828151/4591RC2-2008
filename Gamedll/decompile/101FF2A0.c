/*
 * func-name: sub_101FF2A0
 * func-address: 0x101ff2a0
 * callers: 0x1000d454
 * callees: 0x1000108c, 0x100041d8, 0x10009278, 0x1000cf95, 0x1000dc38, 0x10016211, 0x10016a0e, 0x10017657, 0x100177fb, 0x10017f1c, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

void __thiscall sub_101FF2A0(int this, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ebx
  void *v19; // eax
  char *v20; // ebx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // [esp-Ch] [ebp-94h]
  int v26; // [esp-8h] [ebp-90h]
  int v27; // [esp-8h] [ebp-90h]
  int v28[4]; // [esp+0h] [ebp-88h] BYREF
  void *v29; // [esp+10h] [ebp-78h]
  int v30; // [esp+14h] [ebp-74h]
  unsigned int v31; // [esp+18h] [ebp-70h]
  unsigned int v32; // [esp+1Ch] [ebp-6Ch]
  char v33[4]; // [esp+20h] [ebp-68h] BYREF
  char v34[80]; // [esp+24h] [ebp-64h] BYREF
  int *v35; // [esp+78h] [ebp-10h]
  int v36; // [esp+84h] [ebp-4h]

  v35 = v28;
  v31 = this;
  sub_10016211(a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v36 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 84;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 84;
    else
      v8 = 0;
    if ( 51130563 - v8 < a4 )
      sub_1000DC38(v28[0], v28[1]);
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 84;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v21 = *(_DWORD *)(this + 8);
      v32 = v21;
      if ( (v21 - a3) / 84 >= a4 )
      {
        v31 = v21 - 84 * a4;
        v23 = sub_100177FB(v31, v21, v21);
        v24 = v31;
        *(_DWORD *)(this + 8) = v23;
        sub_10016A0E(a3, v24, v32);
        sub_10017657(a3, a3 + 84 * a4, (int)v33);
      }
      else
      {
        v32 = 84 * a4;
        sub_100177FB(a3, v21, a3 + 84 * a4);
        v26 = a4 - (*(_DWORD *)(this + 8) - a3) / 84;
        v25 = *(_DWORD *)(this + 8);
        LOBYTE(v36) = 3;
        sub_10017F1C(v25, v26, (int)v33);
        v22 = v32;
        *(_DWORD *)(this + 8) += v32;
        v27 = *(_DWORD *)(this + 8) - v22;
        v36 = 0;
        sub_10017657(a3, v27, (int)v33);
      }
    }
    else
    {
      if ( 51130563 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 84;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_1000108C();
      v12 = (void *)sub_100041D8(v10);
      v13 = *(_DWORD *)(this + 4);
      LOBYTE(v32) = 0;
      v29 = v12;
      v30 = (int)v12;
      LOBYTE(v36) = 1;
      v30 = sub_10009278(v13, a3, (int)v12);
      v14 = sub_10017F1C(v30, a4, (int)v33);
      v15 = *(_DWORD *)(this + 8);
      LOBYTE(v32) = 0;
      v30 = v14;
      sub_10009278(a3, v15, v14);
      v16 = *(_DWORD *)(this + 4);
      v17 = 0;
      v36 = 0;
      if ( v16 )
        v17 = (*(_DWORD *)(this + 8) - v16) / 84;
      v18 = v17 + a4;
      if ( v16 )
      {
        sub_1000CF95(v16, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      v19 = v29;
      v20 = (char *)v29 + 84 * v18;
      *(_DWORD *)(this + 12) = (char *)v29 + 84 * v10;
      *(_DWORD *)(this + 8) = v20;
      *(_DWORD *)(this + 4) = v19;
    }
  }
  v36 = -1;
  std::string::~string(v34);
}
