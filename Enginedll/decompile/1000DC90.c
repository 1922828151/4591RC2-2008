/*
 * func-name: sub_1000DC90
 * func-address: 0x1000dc90
 * callers: 0x1000e9c0, 0x1000ff60, 0x1017cd90
 * callees: 0x1000a460, 0x1000a840, 0x1000b9b0, 0x1000c150, 0x1000c5f0, 0x1000d020, 0x1000dad0, 0x1000db50, 0x100993b0, 0x101a2500, 0x101a2522
 */

int __thiscall sub_1000DC90(int this, int a2, CREControl *a3, unsigned int a4, void *a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  char *v12; // eax
  CREControl *v13; // ecx
  CREControl *v14; // eax
  char *v15; // eax
  CREControl *v16; // ecx
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  CREControl *v20; // ecx
  CREControl *v21; // edi
  CREControl *v23; // [esp-Ch] [ebp-4Ch]
  int v24; // [esp-8h] [ebp-48h]
  int v25; // [esp-8h] [ebp-48h]
  int v26; // [esp+0h] [ebp-40h] BYREF
  _BYTE v27[28]; // [esp+Ch] [ebp-34h] BYREF
  CREControl *v28; // [esp+28h] [ebp-18h]
  int v29; // [esp+2Ch] [ebp-14h]
  int *v30; // [esp+30h] [ebp-10h]
  int v31; // [esp+3Ch] [ebp-4h]
  char *v32; // [esp+54h] [ebp+14h]

  v30 = &v26;
  v29 = this;
  std::string::string(v27, a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v31 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 28;
  if ( a4 )
  {
    v8 = *(_DWORD *)(this + 4);
    if ( v8 )
      v8 = (*(_DWORD *)(this + 8) - v8) / 28;
    if ( 153391689 - v8 < a4 )
      sub_1000A460();
    v9 = *(_DWORD *)(this + 4);
    if ( v9 )
      v9 = (*(_DWORD *)(this + 8) - v9) / 28;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(CREControl **)(this + 8);
      v28 = v20;
      if ( (v20 - a3) / 28 >= a4 )
      {
        v21 = (CREControl *)((char *)v20 - 28 * a4);
        *(_DWORD *)(this + 8) = sub_1000D020(v21, v20, (int)v20);
        sub_1000C5F0((int)a3, (int)v21, (int)v28);
        sub_1000B9B0((int)a3, (int)a3 + 28 * a4, (int)v27);
      }
      else
      {
        sub_1000D020(a3, v20, (int)a3 + 28 * a4);
        v24 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 28;
        v23 = *(CREControl **)(this + 8);
        LOBYTE(v31) = 3;
        sub_1000DB50(v23, v24, (int)v27);
        *(_DWORD *)(this + 8) += 28 * a4;
        v25 = *(_DWORD *)(this + 8) - 28 * a4;
        v31 = 0;
        sub_1000B9B0((int)a3, v25, (int)v27);
      }
    }
    else
    {
      if ( 153391689 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      v11 = *(_DWORD *)(this + 4);
      if ( v11 )
        v11 = (*(_DWORD *)(this + 8) - v11) / 28;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_100993B0(this);
      v12 = (char *)sub_1000A840(v10);
      v13 = *(CREControl **)(this + 4);
      LOBYTE(v28) = 0;
      v32 = v12;
      LOBYTE(v31) = 1;
      v14 = (CREControl *)sub_1000C150(v13, a3, (int)v12);
      v15 = sub_1000DB50(v14, a4, (int)v27);
      v16 = *(CREControl **)(this + 8);
      LOBYTE(v28) = 0;
      sub_1000C150(a3, v16, (int)v15);
      v17 = *(_DWORD *)(this + 4);
      v31 = 0;
      if ( v17 )
        v17 = (*(_DWORD *)(this + 8) - v17) / 28;
      v18 = v17 + a4;
      v19 = *(_DWORD *)(this + 4);
      if ( v19 )
      {
        sub_1000DAD0(v19, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = &v32[28 * v10];
      *(_DWORD *)(this + 8) = &v32[28 * v18];
      *(_DWORD *)(this + 4) = v32;
    }
  }
  v31 = -1;
  return std::string::~string(v27);
}
