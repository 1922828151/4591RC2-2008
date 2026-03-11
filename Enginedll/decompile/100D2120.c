/*
 * func-name: sub_100D2120
 * func-address: 0x100d2120
 * callers: 0x100d2d00
 * callees: 0x1006bf80, 0x1006c470, 0x1006d7b0, 0x1006f9b0, 0x100ce9c0, 0x100cf7b0, 0x100d0de0, 0x100d1b70, 0x101190c0, 0x101a2500, 0x101a2522
 */

void __thiscall sub_100D2120(int *this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v5; // edx
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  char *v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ecx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ebx
  _DWORD *v22; // ecx
  int v23; // ebx
  _DWORD *v24; // [esp-Ch] [ebp-58h]
  int v25; // [esp-8h] [ebp-54h]
  _DWORD *v26; // [esp-8h] [ebp-54h]
  int v27; // [esp+0h] [ebp-4Ch] BYREF
  _DWORD v28[3]; // [esp+Ch] [ebp-40h] BYREF
  _BYTE v29[28]; // [esp+18h] [ebp-34h] BYREF
  int v30; // [esp+34h] [ebp-18h]
  int *v31; // [esp+38h] [ebp-14h]
  int *v32; // [esp+3Ch] [ebp-10h]
  int v33; // [esp+48h] [ebp-4h]
  int v34; // [esp+5Ch] [ebp+10h]
  char *v35; // [esp+60h] [ebp+14h]
  _DWORD *v36; // [esp+60h] [ebp+14h]

  v5 = a5[1];
  v28[0] = *a5;
  v7 = a5[2];
  v32 = &v27;
  v28[2] = v7;
  v31 = this;
  v28[1] = v5;
  std::wstring::wstring(v29, a5 + 3);
  v8 = this[1];
  v9 = 0;
  v33 = 0;
  if ( v8 )
    v9 = (this[3] - v8) / 40;
  if ( a4 )
  {
    if ( v8 )
      v10 = (this[2] - v8) / 40;
    else
      v10 = 0;
    if ( 107374182 - v10 < a4 )
      sub_1006BF80();
    if ( v8 )
      v11 = (this[2] - v8) / 40;
    else
      v11 = 0;
    if ( v9 >= a4 + v11 )
    {
      v22 = (_DWORD *)this[2];
      v36 = v22;
      if ( ((char *)v22 - a3) / 40 >= a4 )
      {
        v23 = 40 * a4;
        v34 = (int)&v22[-10 * a4];
        this[2] = (int)sub_100D1B70(&v22[v23 / 0xFFFFFFFC], v22, v22);
        sub_100CF7B0((int)a3, v34, v36);
        sub_100CE9C0(a3, &a3[v23], v28);
      }
      else
      {
        sub_100D1B70(a3, v22, &a3[40 * a4]);
        v25 = a4 - (this[2] - (int)a3) / 40;
        v24 = (_DWORD *)this[2];
        LOBYTE(v33) = 3;
        sub_100D0DE0(v24, v25, v28);
        this[2] += 40 * a4;
        v26 = (_DWORD *)(this[2] - 40 * a4);
        v33 = 0;
        sub_100CE9C0(a3, v26, v28);
      }
    }
    else
    {
      if ( 107374182 - (v9 >> 1) >= v9 )
        v12 = (v9 >> 1) + v9;
      else
        v12 = 0;
      if ( v8 )
        v13 = (this[2] - v8) / 40;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
        v12 = a4 + std::vector<BBox>::size(this);
      v14 = (char *)sub_1006C470(v12);
      v15 = (_DWORD *)this[1];
      LOBYTE(v30) = 0;
      v35 = v14;
      LOBYTE(v33) = 1;
      v16 = sub_1006D7B0(v15, a3, v14);
      v17 = sub_100D0DE0(v16, a4, v28);
      v18 = (_DWORD *)this[2];
      LOBYTE(v30) = 0;
      sub_1006D7B0(a3, v18, v17);
      v19 = this[1];
      v20 = 0;
      v33 = 0;
      if ( v19 )
        v20 = (this[2] - v19) / 40;
      v21 = v20 + a4;
      if ( v19 )
      {
        sub_1006F9B0(v19, this[2]);
        operator delete((void *)this[1]);
      }
      this[3] = (int)&v35[40 * v12];
      this[2] = (int)&v35[40 * v21];
      this[1] = (int)v35;
    }
  }
  v33 = -1;
  std::wstring::~wstring(v29);
}
