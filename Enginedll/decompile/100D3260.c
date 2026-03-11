/*
 * func-name: sub_100D3260
 * func-address: 0x100d3260
 * callers: 0x100d3ca0
 * callees: 0x100096e0, 0x10009fe0, 0x1006c740, 0x1006da00, 0x1006fd60, 0x100ce970, 0x100cf780, 0x100d0da0, 0x100d2980, 0x101a2500, 0x101a2522
 */

void __thiscall sub_100D3260(_DWORD *this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v5; // edx
  int v7; // ecx
  int v8; // ebx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // ebx
  int v19; // eax
  unsigned int v20; // ecx
  void *v21; // eax
  char *v22; // ecx
  char *v23; // ebx
  _DWORD *v24; // [esp-Ch] [ebp-60h]
  int v25; // [esp-8h] [ebp-5Ch]
  _DWORD *v26; // [esp-8h] [ebp-5Ch]
  int v27; // [esp+0h] [ebp-54h] BYREF
  _DWORD v28[3]; // [esp+Ch] [ebp-48h] BYREF
  _BYTE v29[28]; // [esp+18h] [ebp-3Ch] BYREF
  int v30; // [esp+34h] [ebp-20h]
  int v31; // [esp+38h] [ebp-1Ch]
  _DWORD *v32; // [esp+3Ch] [ebp-18h]
  void *v33; // [esp+40h] [ebp-14h]
  int *v34; // [esp+44h] [ebp-10h]
  int v35; // [esp+50h] [ebp-4h]
  unsigned int v36; // [esp+64h] [ebp+10h]

  v5 = a5[2];
  v7 = a5[1];
  v28[0] = *a5;
  v34 = &v27;
  v28[1] = v7;
  v32 = this;
  v28[2] = v5;
  std::wstring::wstring(v29, a5 + 3);
  v30 = a5[10];
  v8 = this[1];
  v9 = 0;
  v35 = 0;
  if ( v8 )
    v9 = (this[3] - v8) / 44;
  if ( a4 )
  {
    if ( v8 )
      v10 = (this[2] - v8) / 44;
    else
      v10 = 0;
    if ( 97612893 - v10 < a4 )
      sub_1006C740();
    if ( v8 )
      v11 = (this[2] - v8) / 44;
    else
      v11 = 0;
    if ( v9 >= a4 + v11 )
    {
      v23 = (char *)this[2];
      if ( (v23 - a3) / 44 >= a4 )
      {
        this[2] = sub_100D2980(&v23[-44 * a4], v23, (_DWORD *)this[2]);
        sub_100CF780(a3, &v23[-44 * a4], v23);
        sub_100CE970(a3, &a3[44 * a4], v28);
      }
      else
      {
        sub_100D2980(a3, v23, &a3[44 * a4]);
        v25 = a4 - (this[2] - (int)a3) / 44;
        v24 = (_DWORD *)this[2];
        LOBYTE(v35) = 3;
        sub_100D0DA0(v24, v25, v28);
        this[2] += 44 * a4;
        v26 = (_DWORD *)(this[2] - 44 * a4);
        v35 = 0;
        sub_100CE970(a3, v26, v28);
      }
    }
    else
    {
      if ( 97612893 - (v9 >> 1) >= v9 )
        v12 = (v9 >> 1) + v9;
      else
        v12 = 0;
      if ( v8 )
        v13 = (this[2] - v8) / 44;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
        v12 = a4 + sub_100096E0(this);
      v14 = sub_10009FE0(v12);
      v15 = (_DWORD *)this[1];
      LOBYTE(v31) = 0;
      v33 = v14;
      LOBYTE(v35) = 1;
      v16 = sub_1006DA00(v15, a3, v14);
      v17 = sub_100D0DA0(v16, a4, v28);
      sub_1006DA00(a3, (_DWORD *)this[2], v17);
      v18 = this[1];
      v19 = 0;
      v35 = 0;
      if ( v18 )
        v19 = (this[2] - v18) / 44;
      v20 = v19 + a4;
      v36 = v19 + a4;
      if ( v18 )
      {
        sub_1006FD60(v18, this[2]);
        operator delete((void *)this[1]);
        v20 = v36;
      }
      v21 = v33;
      v22 = (char *)v33 + 44 * v20;
      this[3] = (char *)v33 + 44 * v12;
      this[2] = v22;
      this[1] = v21;
    }
  }
  v35 = -1;
  std::wstring::~wstring(v29);
}
