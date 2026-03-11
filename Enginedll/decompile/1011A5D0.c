/*
 * func-name: sub_1011A5D0
 * func-address: 0x1011a5d0
 * callers: 0x1011a8d0
 * callees: 0x1006c470, 0x101190c0, 0x10119e20, 0x10119f40, 0x1011a040, 0x1011a0f0, 0x1011a1d0, 0x1011a250, 0x1011a530, 0x101a2500, 0x101a2522
 */

int __thiscall sub_1011A5D0(int this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v5; // edx
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  CREControl *v14; // eax
  _DWORD *v15; // ecx
  CREControl *v16; // eax
  char *v17; // eax
  _DWORD *v18; // ecx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ebx
  _DWORD *v22; // ecx
  int v23; // ebx
  CREControl *v25; // [esp-Ch] [ebp-58h]
  int v26; // [esp-8h] [ebp-54h]
  _DWORD *v27; // [esp-8h] [ebp-54h]
  int v28; // [esp+0h] [ebp-4Ch] BYREF
  _DWORD v29[3]; // [esp+Ch] [ebp-40h] BYREF
  _BYTE v30[28]; // [esp+18h] [ebp-34h] BYREF
  int v31; // [esp+34h] [ebp-18h]
  int v32; // [esp+38h] [ebp-14h]
  int *v33; // [esp+3Ch] [ebp-10h]
  int v34; // [esp+48h] [ebp-4h]
  int v35; // [esp+5Ch] [ebp+10h]
  CREControl *v36; // [esp+60h] [ebp+14h]
  _DWORD *v37; // [esp+60h] [ebp+14h]

  v5 = a5[1];
  v29[0] = *a5;
  v7 = a5[2];
  v33 = &v28;
  v29[2] = v7;
  v32 = this;
  v29[1] = v5;
  std::string::string(v30, a5 + 3);
  v8 = *(_DWORD *)(this + 4);
  v9 = 0;
  v34 = 0;
  if ( v8 )
    v9 = (*(_DWORD *)(this + 12) - v8) / 40;
  if ( a4 )
  {
    if ( v8 )
      v10 = (*(_DWORD *)(this + 8) - v8) / 40;
    else
      v10 = 0;
    if ( 107374182 - v10 < a4 )
      sub_10119E20();
    if ( v8 )
      v11 = (*(_DWORD *)(this + 8) - v8) / 40;
    else
      v11 = 0;
    if ( v9 >= a4 + v11 )
    {
      v22 = *(_DWORD **)(this + 8);
      v37 = v22;
      if ( ((char *)v22 - a3) / 40 >= a4 )
      {
        v23 = 40 * a4;
        v35 = (int)&v22[-10 * a4];
        *(_DWORD *)(this + 8) = sub_1011A530(&v22[v23 / 0xFFFFFFFC], v22, (CREControl *)v22);
        sub_1011A0F0((int)a3, v35, v37);
        sub_10119F40(a3, &a3[v23], v29);
      }
      else
      {
        sub_1011A530(a3, v22, (CREControl *)&a3[40 * a4]);
        v26 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 40;
        v25 = *(CREControl **)(this + 8);
        LOBYTE(v34) = 3;
        sub_1011A250(v25, v26, v29);
        *(_DWORD *)(this + 8) += 40 * a4;
        v27 = (_DWORD *)(*(_DWORD *)(this + 8) - 40 * a4);
        v34 = 0;
        sub_10119F40(a3, v27, v29);
      }
    }
    else
    {
      if ( 107374182 - (v9 >> 1) >= v9 )
        v12 = (v9 >> 1) + v9;
      else
        v12 = 0;
      if ( v8 )
        v13 = (*(_DWORD *)(this + 8) - v8) / 40;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
        v12 = a4 + std::vector<BBox>::size((_DWORD *)this);
      v14 = (CREControl *)sub_1006C470(v12);
      v15 = *(_DWORD **)(this + 4);
      LOBYTE(v31) = 0;
      v36 = v14;
      LOBYTE(v34) = 1;
      v16 = sub_1011A040(v15, a3, v14);
      v17 = sub_1011A250(v16, a4, v29);
      v18 = *(_DWORD **)(this + 8);
      LOBYTE(v31) = 0;
      sub_1011A040(a3, v18, (CREControl *)v17);
      v19 = *(_DWORD *)(this + 4);
      v20 = 0;
      v34 = 0;
      if ( v19 )
        v20 = (*(_DWORD *)(this + 8) - v19) / 40;
      v21 = v20 + a4;
      if ( v19 )
      {
        sub_1011A1D0(v19, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v36 + 40 * v12;
      *(_DWORD *)(this + 8) = (char *)v36 + 40 * v21;
      *(_DWORD *)(this + 4) = v36;
    }
  }
  v34 = -1;
  return std::string::~string(v30);
}
