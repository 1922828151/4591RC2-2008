/*
 * func-name: sub_10127420
 * func-address: 0x10127420
 * callers: 0x10127850
 * callees: 0x100fdfe0, 0x101264c0, 0x10126510, 0x10126590, 0x10126610, 0x10126870, 0x10126a70, 0x10126b00, 0x10126bc0, 0x10126d10, 0x10126d50, 0x10127290, 0x101a2500, 0x101a2522
 */

int __thiscall sub_10127420(int this, int a2, _BYTE *a3, unsigned int a4, _BYTE *a5)
{
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  CREControl *v12; // eax
  _BYTE *v13; // ecx
  CREControl *v14; // eax
  char *v15; // eax
  _BYTE *v16; // ecx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  _BYTE *v20; // ecx
  _BYTE *v21; // ebx
  CREControl *v23; // [esp-Ch] [ebp-6Ch]
  int v24; // [esp-8h] [ebp-68h]
  _BYTE *v25; // [esp-8h] [ebp-68h]
  int v26; // [esp+0h] [ebp-60h] BYREF
  char v27[60]; // [esp+Ch] [ebp-54h] BYREF
  _BYTE *v28; // [esp+48h] [ebp-18h]
  int v29; // [esp+4Ch] [ebp-14h]
  int *v30; // [esp+50h] [ebp-10h]
  int v31; // [esp+5Ch] [ebp-4h]
  CREControl *v32; // [esp+74h] [ebp+14h]

  v30 = &v26;
  v29 = this;
  sub_10126610(v27, a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v31 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 60;
  if ( a4 )
  {
    v8 = *(_DWORD *)(this + 4);
    if ( v8 )
      v8 = (*(_DWORD *)(this + 8) - v8) / 60;
    if ( 71582788 - v8 < a4 )
      sub_10126590();
    v9 = *(_DWORD *)(this + 4);
    if ( v9 )
      v9 = (*(_DWORD *)(this + 8) - v9) / 60;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(_BYTE **)(this + 8);
      v28 = v20;
      if ( (v20 - a3) / 60 >= a4 )
      {
        v21 = &v20[-60 * a4];
        *(_DWORD *)(this + 8) = sub_10127290(v21, v20, (CREControl *)v20);
        sub_10126B00(a3, v21, v28);
        sub_10126870(a3, &a3[60 * a4], v27);
      }
      else
      {
        sub_10127290(a3, v20, (CREControl *)&a3[60 * a4]);
        v24 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 60;
        v23 = *(CREControl **)(this + 8);
        LOBYTE(v31) = 3;
        sub_10126D10(v23, v24, v27);
        *(_DWORD *)(this + 8) += 60 * a4;
        v25 = (_BYTE *)(*(_DWORD *)(this + 8) - 60 * a4);
        v31 = 0;
        sub_10126870(a3, v25, v27);
      }
    }
    else
    {
      if ( 71582788 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      v11 = *(_DWORD *)(this + 4);
      if ( v11 )
        v11 = (*(_DWORD *)(this + 8) - v11) / 60;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_10126510((_DWORD *)this);
      v12 = (CREControl *)sub_100FDFE0(v10);
      v13 = *(_BYTE **)(this + 4);
      LOBYTE(v28) = 0;
      v32 = v12;
      LOBYTE(v31) = 1;
      v14 = sub_10126A70(v13, a3, v12);
      v15 = sub_10126D10(v14, a4, v27);
      v16 = *(_BYTE **)(this + 8);
      LOBYTE(v28) = 0;
      sub_10126A70(a3, v16, (CREControl *)v15);
      v17 = *(_DWORD *)(this + 4);
      v31 = 0;
      if ( v17 )
        v17 = (*(_DWORD *)(this + 8) - v17) / 60;
      v18 = v17 + a4;
      v19 = *(_DWORD *)(this + 4);
      if ( v19 )
      {
        sub_10126BC0(v19, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v32 + 60 * v10;
      *(_DWORD *)(this + 8) = (char *)v32 + 60 * v18;
      *(_DWORD *)(this + 4) = v32;
    }
  }
  v31 = -1;
  return sub_101264C0(v27);
}
