/*
 * func-name: sub_101589F0
 * func-address: 0x101589f0
 * callers: 0x10158f40
 * callees: 0x100cdeb0, 0x100ce150, 0x100ce410, 0x100cfd20, 0x100d1b40, 0x100d26a0, 0x10157a30, 0x10157b30, 0x10157d00, 0x101a2500, 0x101a2522
 */

void __thiscall sub_101589F0(_DWORD *this, int a2, char *a3, unsigned int a4, int *a5)
{
  int v5; // eax
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  char *v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // ecx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // ebx
  _DWORD *v21; // ecx
  int v22; // ebx
  _DWORD *v23; // [esp-Ch] [ebp-54h]
  int v24; // [esp-8h] [ebp-50h]
  _DWORD *v25; // [esp-8h] [ebp-50h]
  int v26; // [esp+0h] [ebp-48h] BYREF
  int v27; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v28[28]; // [esp+10h] [ebp-38h] BYREF
  int v29; // [esp+2Ch] [ebp-1Ch]
  int v30; // [esp+30h] [ebp-18h]
  _DWORD *v31; // [esp+34h] [ebp-14h]
  int *v32; // [esp+38h] [ebp-10h]
  int v33; // [esp+44h] [ebp-4h]
  int v34; // [esp+58h] [ebp+10h]
  char *v35; // [esp+5Ch] [ebp+14h]
  _DWORD *v36; // [esp+5Ch] [ebp+14h]

  v5 = *a5;
  v32 = &v26;
  v31 = this;
  v27 = v5;
  std::wstring::wstring(v28, a5 + 1);
  v29 = a5[8];
  v7 = this[1];
  v8 = 0;
  v33 = 0;
  if ( v7 )
    v8 = (this[3] - v7) / 36;
  if ( a4 )
  {
    if ( v7 )
      v9 = (this[2] - v7) / 36;
    else
      v9 = 0;
    if ( 119304647 - v9 < a4 )
      sub_100CE150();
    if ( v7 )
      v10 = (this[2] - v7) / 36;
    else
      v10 = 0;
    if ( v8 >= a4 + v10 )
    {
      v21 = (_DWORD *)this[2];
      v36 = v21;
      if ( ((char *)v21 - a3) / 36 >= a4 )
      {
        v22 = 36 * a4;
        v34 = (int)&v21[-9 * a4];
        this[2] = sub_100D1B40(&v21[v22 / 0xFFFFFFFC], v21, v21);
        sub_10157B30((int)a3, v34, v36);
        sub_10157A30(a3, &a3[v22], &v27);
      }
      else
      {
        sub_100D1B40(a3, v21, &a3[36 * a4]);
        v24 = a4 - (this[2] - (int)a3) / 36;
        v23 = (_DWORD *)this[2];
        LOBYTE(v33) = 3;
        sub_10157D00(v23, v24, &v27);
        this[2] += 36 * a4;
        v25 = (_DWORD *)(this[2] - 36 * a4);
        v33 = 0;
        sub_10157A30(a3, v25, &v27);
      }
    }
    else
    {
      if ( 119304647 - (v8 >> 1) >= v8 )
        v11 = (v8 >> 1) + v8;
      else
        v11 = 0;
      if ( v7 )
        v12 = (this[2] - v7) / 36;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
        v11 = a4 + sub_100CDEB0(this);
      v13 = (char *)sub_100CE410(v11);
      v14 = (_DWORD *)this[1];
      LOBYTE(v30) = 0;
      v35 = v13;
      LOBYTE(v33) = 1;
      v15 = sub_100CFD20(v14, a3, v13);
      v16 = sub_10157D00(v15, a4, &v27);
      v17 = (_DWORD *)this[2];
      LOBYTE(v30) = 0;
      sub_100CFD20(a3, v17, v16);
      v18 = this[1];
      v19 = 0;
      v33 = 0;
      if ( v18 )
        v19 = (this[2] - v18) / 36;
      v20 = v19 + a4;
      if ( v18 )
      {
        sub_100D26A0(v18, this[2]);
        operator delete((void *)this[1]);
      }
      this[3] = &v35[36 * v11];
      this[2] = &v35[36 * v20];
      this[1] = v35;
    }
  }
  v33 = -1;
  std::wstring::~wstring(v28);
}
