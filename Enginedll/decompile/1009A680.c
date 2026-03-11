/*
 * func-name: sub_1009A680
 * func-address: 0x1009a680
 * callers: 0x1009aa50
 * callees: 0x1000a840, 0x100993b0, 0x100994f0, 0x10099db0, 0x10099e40, 0x10099f00, 0x1009a420, 0x1009a450, 0x1009a650, 0x101a2500, 0x101a2522
 */

void __thiscall sub_1009A680(int this, int a2, CREControl *a3, unsigned int a4, void *a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  char *v12; // eax
  CREControl *v13; // ecx
  char *v14; // eax
  char *v15; // eax
  CREControl *v16; // ecx
  int v17; // eax
  unsigned int v18; // edi
  char *v19; // eax
  CREControl *v20; // ecx
  CREControl *v21; // edi
  CREControl *v22; // [esp-Ch] [ebp-4Ch]
  int v23; // [esp-8h] [ebp-48h]
  int v24; // [esp-8h] [ebp-48h]
  int v25; // [esp+0h] [ebp-40h] BYREF
  _BYTE v26[28]; // [esp+Ch] [ebp-34h] BYREF
  CREControl *v27; // [esp+28h] [ebp-18h]
  int v28; // [esp+2Ch] [ebp-14h]
  int *v29; // [esp+30h] [ebp-10h]
  int v30; // [esp+3Ch] [ebp-4h]
  char *v31; // [esp+54h] [ebp+14h]

  v29 = &v25;
  v28 = this;
  std::wstring::wstring(v26, a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v30 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 28;
  if ( a4 )
  {
    v8 = *(_DWORD *)(this + 4);
    if ( v8 )
      v8 = (*(_DWORD *)(this + 8) - v8) / 28;
    if ( 153391689 - v8 < a4 )
      sub_100994F0();
    v9 = *(_DWORD *)(this + 4);
    if ( v9 )
      v9 = (*(_DWORD *)(this + 8) - v9) / 28;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(CREControl **)(this + 8);
      v27 = v20;
      if ( (v20 - a3) / 28 >= a4 )
      {
        v21 = (CREControl *)((char *)v20 - 28 * a4);
        *(_DWORD *)(this + 8) = sub_1009A420(v21, v20, (char *)v20);
        sub_10099F00((int)a3, (int)v21, (int)v27);
        sub_10099DB0((int)a3, (int)a3 + 28 * a4, (int)v26);
      }
      else
      {
        sub_1009A420(a3, v20, (char *)a3 + 28 * a4);
        v23 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 28;
        v22 = *(CREControl **)(this + 8);
        LOBYTE(v30) = 3;
        sub_1009A450(v22, v23, v26);
        *(_DWORD *)(this + 8) += 28 * a4;
        v24 = *(_DWORD *)(this + 8) - 28 * a4;
        v30 = 0;
        sub_10099DB0((int)a3, v24, (int)v26);
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
        v10 = a4 + sub_100993B0((_DWORD *)this);
      v12 = (char *)sub_1000A840(v10);
      v13 = *(CREControl **)(this + 4);
      LOBYTE(v27) = 0;
      v31 = v12;
      LOBYTE(v30) = 1;
      v14 = sub_10099E40(v13, a3, v12);
      v15 = sub_1009A450((CREControl *)v14, a4, v26);
      v16 = *(CREControl **)(this + 8);
      LOBYTE(v27) = 0;
      sub_10099E40(a3, v16, v15);
      v17 = *(_DWORD *)(this + 4);
      v30 = 0;
      if ( v17 )
        v17 = (*(_DWORD *)(this + 8) - v17) / 28;
      v18 = v17 + a4;
      v19 = *(char **)(this + 4);
      if ( v19 )
      {
        sub_1009A650(v19, *(char **)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = &v31[28 * v10];
      *(_DWORD *)(this + 8) = &v31[28 * v18];
      *(_DWORD *)(this + 4) = v31;
    }
  }
  v30 = -1;
  std::wstring::~wstring(v26);
}
