/*
 * func-name: sub_102BCEC0
 * func-address: 0x102bcec0
 * callers: 0x10001672
 * callees: 0x10006b09, 0x10007955, 0x1000909d, 0x1000be6f, 0x1000e651, 0x1001393a, 0x10013c41, 0x10013e80, 0x1001a3f2, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

void __thiscall sub_102BCEC0(int this, int a2, int a3, unsigned int a4, int *a5)
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
  int v25; // [esp-Ch] [ebp-68h]
  int v26; // [esp-8h] [ebp-64h]
  int v27; // [esp-8h] [ebp-64h]
  int v28[4]; // [esp+0h] [ebp-5Ch] BYREF
  void *v29; // [esp+10h] [ebp-4Ch]
  int v30; // [esp+14h] [ebp-48h]
  unsigned int v31; // [esp+18h] [ebp-44h]
  unsigned int v32; // [esp+1Ch] [ebp-40h]
  _DWORD v33[2]; // [esp+20h] [ebp-3Ch] BYREF
  _BYTE v34[28]; // [esp+28h] [ebp-34h] BYREF
  int v35; // [esp+44h] [ebp-18h]
  int *v36; // [esp+4Ch] [ebp-10h]
  int v37; // [esp+58h] [ebp-4h]

  v36 = v28;
  v5 = *a5;
  v33[1] = a5[1];
  v31 = this;
  v33[0] = v5;
  std::string::string(v34, a5 + 2);
  v35 = a5[9];
  v7 = *(_DWORD *)(this + 4);
  v8 = 0;
  v37 = 0;
  if ( v7 )
    v8 = (*(_DWORD *)(this + 12) - v7) / 40;
  if ( a4 )
  {
    if ( v7 )
      v9 = (*(_DWORD *)(this + 8) - v7) / 40;
    else
      v9 = 0;
    if ( 107374182 - v9 < a4 )
      sub_1001A3F2(v28[0], v28[1]);
    if ( v7 )
      v10 = (*(_DWORD *)(this + 8) - v7) / 40;
    else
      v10 = 0;
    if ( v8 >= a4 + v10 )
    {
      v21 = *(_DWORD *)(this + 8);
      v32 = v21;
      if ( (v21 - a3) / 40 >= a4 )
      {
        v31 = v21 - 40 * a4;
        v23 = sub_10013E80(v31, v21, v21);
        v24 = v31;
        *(_DWORD *)(this + 8) = v23;
        sub_1000BE6F(a3, v24, v32);
        sub_10006B09(a3, a3 + 40 * a4, (int)v33);
      }
      else
      {
        v32 = 40 * a4;
        sub_10013E80(a3, v21, a3 + 40 * a4);
        v26 = a4 - (*(_DWORD *)(this + 8) - a3) / 40;
        v25 = *(_DWORD *)(this + 8);
        LOBYTE(v37) = 3;
        sub_1000E651(v25, v26, (int)v33);
        v22 = v32;
        *(_DWORD *)(this + 8) += v32;
        v27 = *(_DWORD *)(this + 8) - v22;
        v37 = 0;
        sub_10006B09(a3, v27, (int)v33);
      }
    }
    else
    {
      if ( 107374182 - (v8 >> 1) >= v8 )
        v11 = (v8 >> 1) + v8;
      else
        v11 = 0;
      if ( v7 )
        v12 = (*(_DWORD *)(this + 8) - v7) / 40;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
        v11 = a4 + sub_10013C41();
      v13 = (void *)sub_1001393A(v11);
      v14 = *(_DWORD *)(this + 4);
      LOBYTE(v32) = 0;
      v29 = v13;
      v30 = (int)v13;
      LOBYTE(v37) = 1;
      v30 = sub_1000909D(v14, a3, (int)v13);
      v15 = sub_1000E651(v30, a4, (int)v33);
      v16 = *(_DWORD *)(this + 8);
      LOBYTE(v32) = 0;
      v30 = v15;
      sub_1000909D(a3, v16, v15);
      v17 = *(_DWORD *)(this + 4);
      v18 = 0;
      v37 = 0;
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) / 40;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_10007955(v17, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      v20 = (char *)v29;
      *(_DWORD *)(this + 12) = (char *)v29 + 40 * v11;
      *(_DWORD *)(this + 8) = &v20[40 * v19];
      *(_DWORD *)(this + 4) = v20;
    }
  }
  v37 = -1;
  std::string::~string(v34);
}
