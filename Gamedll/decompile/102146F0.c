/*
 * func-name: sub_102146F0
 * func-address: 0x102146f0
 * callers: 0x10016ddd
 * callees: 0x100016a4, 0x10006622, 0x10008698, 0x10009b60, 0x1000bc7b, 0x1000ce87, 0x1000dc97, 0x100110b3, 0x100139b7, 0x1001905b, 0x1001a8de, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

void __thiscall sub_102146F0(int this, int a2, int a3, unsigned int a4, int a5)
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
  char *v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // [esp-Ch] [ebp-90h]
  int v26; // [esp-8h] [ebp-8Ch]
  int v27; // [esp-8h] [ebp-8Ch]
  int v28[4]; // [esp+0h] [ebp-84h] BYREF
  void *v29; // [esp+10h] [ebp-74h]
  int v30; // [esp+14h] [ebp-70h]
  unsigned int v31; // [esp+18h] [ebp-6Ch]
  unsigned int v32; // [esp+1Ch] [ebp-68h]
  _BYTE v33[8]; // [esp+20h] [ebp-64h] BYREF
  char v34[44]; // [esp+28h] [ebp-5Ch] BYREF
  void *v35; // [esp+54h] [ebp-30h]
  int v36; // [esp+58h] [ebp-2Ch]
  int v37; // [esp+5Ch] [ebp-28h]
  void *v38; // [esp+64h] [ebp-20h]
  int v39; // [esp+68h] [ebp-1Ch]
  int v40; // [esp+6Ch] [ebp-18h]
  int *v41; // [esp+74h] [ebp-10h]
  int v42; // [esp+80h] [ebp-4h]

  v41 = v28;
  v31 = this;
  sub_1001905B(a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v42 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 80;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 80;
    else
      v8 = 0;
    if ( 53687091 - v8 < a4 )
      sub_1000BC7B(v28[0], v28[1]);
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 80;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v21 = *(_DWORD *)(this + 8);
      v32 = v21;
      if ( (v21 - a3) / 80 >= a4 )
      {
        v31 = v21 - 80 * a4;
        v23 = sub_10006622(v31, v21, v21);
        v24 = v31;
        *(_DWORD *)(this + 8) = v23;
        sub_10008698(a3, v24, v32);
        sub_10009B60(a3, a3 + 80 * a4, (int)v33);
      }
      else
      {
        v32 = 80 * a4;
        sub_10006622(a3, v21, a3 + 80 * a4);
        v26 = a4 - (*(_DWORD *)(this + 8) - a3) / 80;
        v25 = *(_DWORD *)(this + 8);
        LOBYTE(v42) = 3;
        sub_100139B7(v25, v26, (int)v33);
        v22 = v32;
        *(_DWORD *)(this + 8) += v32;
        v27 = *(_DWORD *)(this + 8) - v22;
        v42 = 0;
        sub_10009B60(a3, v27, (int)v33);
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
        v10 = a4 + sub_100110B3();
      v12 = (void *)sub_1000CE87(v10);
      v13 = *(_DWORD *)(this + 4);
      LOBYTE(v32) = 0;
      v29 = v12;
      v30 = (int)v12;
      LOBYTE(v42) = 1;
      v30 = sub_1000DC97(v13, a3, (int)v12, this);
      v14 = sub_100139B7(v30, a4, (int)v33);
      v15 = *(_DWORD *)(this + 8);
      LOBYTE(v32) = 0;
      v30 = v14;
      sub_1000DC97(a3, v15, v14, this);
      v16 = *(_DWORD *)(this + 4);
      v17 = 0;
      v42 = 0;
      if ( v16 )
        v17 = (*(_DWORD *)(this + 8) - v16) / 80;
      v18 = v17 + a4;
      if ( v16 )
      {
        sub_100016A4(v16, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      v19 = v29;
      v20 = (char *)v29 + 80 * v18;
      *(_DWORD *)(this + 12) = (char *)v29 + 80 * v10;
      *(_DWORD *)(this + 8) = v20;
      *(_DWORD *)(this + 4) = v19;
    }
  }
  v42 = -1;
  if ( v38 )
    operator delete(v38);
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( v35 )
    operator delete(v35);
  v35 = 0;
  v36 = 0;
  v37 = 0;
  std::string::~string(v34);
}
