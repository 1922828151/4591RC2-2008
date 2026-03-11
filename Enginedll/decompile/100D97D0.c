/*
 * func-name: sub_100D97D0
 * func-address: 0x100d97d0
 * callers: 0x100d9b60
 * callees: 0x1006c300, 0x1006d900, 0x1006fa30, 0x100cdeb0, 0x100ce410, 0x100d8a10, 0x100d9280, 0x100d95a0, 0x100d95e0, 0x101a2500, 0x101a2522
 */

void __thiscall sub_100D97D0(int this, int a2, char *a3, unsigned int a4, void *a5)
{
  char v6; // cl
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  CREControl *v13; // eax
  char *v14; // ecx
  CREControl *v15; // eax
  char *v16; // eax
  char *v17; // ecx
  char *v18; // ecx
  int v19; // eax
  unsigned int v20; // ebx
  char *v21; // ecx
  int v22; // ebx
  CREControl *v23; // [esp-Ch] [ebp-54h]
  int v24; // [esp-8h] [ebp-50h]
  int v25; // [esp-8h] [ebp-50h]
  int v26; // [esp+0h] [ebp-48h] BYREF
  _BYTE v27[28]; // [esp+Ch] [ebp-3Ch] BYREF
  int v28; // [esp+28h] [ebp-20h]
  char v29; // [esp+2Ch] [ebp-1Ch]
  int v30; // [esp+30h] [ebp-18h]
  int v31; // [esp+34h] [ebp-14h]
  int *v32; // [esp+38h] [ebp-10h]
  int v33; // [esp+44h] [ebp-4h]
  int v34; // [esp+58h] [ebp+10h]
  CREControl *v35; // [esp+5Ch] [ebp+14h]
  char *v36; // [esp+5Ch] [ebp+14h]

  v32 = &v26;
  v31 = this;
  std::wstring::wstring(v27, a5);
  v6 = *((_BYTE *)a5 + 32);
  v28 = *((_DWORD *)a5 + 7);
  v29 = v6;
  v7 = *(_DWORD *)(this + 4);
  v8 = 0;
  v33 = 0;
  if ( v7 )
    v8 = (*(_DWORD *)(this + 12) - v7) / 36;
  if ( a4 )
  {
    if ( v7 )
      v9 = (*(_DWORD *)(this + 8) - v7) / 36;
    else
      v9 = 0;
    if ( 119304647 - v9 < a4 )
      sub_1006C300();
    if ( v7 )
      v10 = (*(_DWORD *)(this + 8) - v7) / 36;
    else
      v10 = 0;
    if ( v8 >= a4 + v10 )
    {
      v21 = *(char **)(this + 8);
      v36 = v21;
      if ( (v21 - a3) / 36 >= a4 )
      {
        v22 = 36 * a4;
        v34 = (int)&v21[-36 * a4];
        *(_DWORD *)(this + 8) = sub_100D95E0(&v21[-v22], v21, (CREControl *)v21);
        sub_100D9280((int)a3, v34, (int)v36);
        sub_100D8A10((int)a3, (int)&a3[v22], (int)v27);
      }
      else
      {
        sub_100D95E0(a3, v21, (CREControl *)&a3[36 * a4]);
        v24 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 36;
        v23 = *(CREControl **)(this + 8);
        LOBYTE(v33) = 3;
        sub_100D95A0(v23, v24, v27);
        *(_DWORD *)(this + 8) += 36 * a4;
        v25 = *(_DWORD *)(this + 8) - 36 * a4;
        v33 = 0;
        sub_100D8A10((int)a3, v25, (int)v27);
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
        v11 = a4 + sub_100CDEB0((_DWORD *)this);
      v13 = (CREControl *)sub_100CE410(v11);
      v14 = *(char **)(this + 4);
      LOBYTE(v30) = 0;
      v35 = v13;
      LOBYTE(v33) = 1;
      v15 = sub_1006D900(v14, a3, v13);
      v16 = sub_100D95A0(v15, a4, v27);
      v17 = *(char **)(this + 8);
      LOBYTE(v30) = 0;
      sub_1006D900(a3, v17, (CREControl *)v16);
      v18 = *(char **)(this + 4);
      v19 = 0;
      v33 = 0;
      if ( v18 )
        v19 = (*(_DWORD *)(this + 8) - (int)v18) / 36;
      v20 = v19 + a4;
      if ( v18 )
      {
        sub_1006FA30(v18, *(char **)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v35 + 36 * v11;
      *(_DWORD *)(this + 8) = (char *)v35 + 36 * v20;
      *(_DWORD *)(this + 4) = v35;
    }
  }
  v33 = -1;
  std::wstring::~wstring(v27);
}
