/*
 * func-name: sub_10259490
 * func-address: 0x10259490
 * callers: 0x10003a1c
 * callees: 0x10001974, 0x10001c7b, 0x10004084, 0x100043bd, 0x1000b460, 0x1000d9ea, 0x100101f4, 0x10010b86, 0x10012571, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

void __thiscall sub_10259490(int this, int a2, int a3, unsigned int a4, int *a5)
{
  int v5; // eax
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  void *v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ebx
  char *v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // [esp-Ch] [ebp-64h]
  int v26; // [esp-8h] [ebp-60h]
  int v27; // [esp-8h] [ebp-60h]
  int v28[4]; // [esp+0h] [ebp-58h] BYREF
  void *v29; // [esp+10h] [ebp-48h]
  int v30; // [esp+14h] [ebp-44h]
  unsigned int v31; // [esp+18h] [ebp-40h]
  unsigned int v32; // [esp+1Ch] [ebp-3Ch]
  int v33; // [esp+20h] [ebp-38h] BYREF
  _BYTE v34[28]; // [esp+24h] [ebp-34h] BYREF
  int v35; // [esp+40h] [ebp-18h]
  int *v36; // [esp+48h] [ebp-10h]
  int v37; // [esp+54h] [ebp-4h]

  v36 = v28;
  v5 = *a5;
  v31 = this;
  v33 = v5;
  std::wstring::wstring(v34, a5 + 1);
  v35 = a5[8];
  v7 = *(_DWORD *)(this + 4);
  v8 = 0;
  v37 = 0;
  if ( v7 )
    v8 = (*(_DWORD *)(this + 12) - v7) / 36;
  if ( a4 )
  {
    if ( v7 )
      v9 = (*(_DWORD *)(this + 8) - v7) / 36;
    else
      v9 = 0;
    if ( 119304647 - v9 < a4 )
      sub_10004084(v28[0], v28[1]);
    if ( v7 )
      v10 = (*(_DWORD *)(this + 8) - v7) / 36;
    else
      v10 = 0;
    if ( v8 >= a4 + v10 )
    {
      v21 = *(_DWORD *)(this + 8);
      v32 = v21;
      if ( (v21 - a3) / 36 >= a4 )
      {
        v31 = v21 - 36 * a4;
        v23 = sub_10001C7B(v31, v21, v21);
        v24 = v31;
        *(_DWORD *)(this + 8) = v23;
        sub_100043BD(a3, v24, v32);
        sub_1000B460(a3, a3 + 36 * a4, (int)&v33);
      }
      else
      {
        v32 = 36 * a4;
        sub_10001C7B(a3, v21, a3 + 36 * a4);
        v26 = a4 - (*(_DWORD *)(this + 8) - a3) / 36;
        v25 = *(_DWORD *)(this + 8);
        LOBYTE(v37) = 3;
        sub_100101F4(v25, v26, (int)&v33);
        v22 = v32;
        *(_DWORD *)(this + 8) += v32;
        v27 = *(_DWORD *)(this + 8) - v22;
        v37 = 0;
        sub_1000B460(a3, v27, (int)&v33);
      }
    }
    else
    {
      if ( 119304647 - (v8 >> 1) >= v8 )
        v11 = (v8 >> 1) + v8;
      else
        v11 = 0;
      if ( v7 )
        v12 = (*(_DWORD *)(this + 8) - v7) / 36;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
        v11 = a4 + sub_1000D9EA();
      v13 = (void *)sub_10010B86(v11);
      v14 = *(_DWORD *)(this + 4);
      LOBYTE(v32) = 0;
      v29 = v13;
      v30 = (int)v13;
      LOBYTE(v37) = 1;
      v30 = sub_10001974(v14, a3, (int)v13);
      v15 = sub_100101F4(v30, a4, (int)&v33);
      v16 = *(_DWORD *)(this + 8);
      LOBYTE(v32) = 0;
      v30 = v15;
      sub_10001974(a3, v16, v15);
      v17 = *(_DWORD *)(this + 4);
      v18 = 0;
      v37 = 0;
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) / 36;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_10012571(v17, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      v20 = (char *)v29;
      *(_DWORD *)(this + 12) = (char *)v29 + 36 * v11;
      *(_DWORD *)(this + 8) = &v20[36 * v19];
      *(_DWORD *)(this + 4) = v20;
    }
  }
  v37 = -1;
  std::wstring::~wstring(v34);
}
