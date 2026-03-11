/*
 * func-name: sub_1016BC60
 * func-address: 0x1016bc60
 * callers: 0x1016bf70
 * callees: 0x1001a3d0, 0x10056d80, 0x10057020, 0x10057f20, 0x100589f0, 0x1005d6f0, 0x10161790, 0x1016b650, 0x1016ba70, 0x1016baa0, 0x1016bae0, 0x101a2500, 0x101a2522
 */

void __thiscall sub_1016BC60(int this, int a2, CREControl *a3, unsigned int a4, _DWORD *a5)
{
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // edi
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  char *v18; // eax
  CREControl *v19; // ecx
  CREControl *v20; // eax
  char *v21; // eax
  CREControl *v22; // ecx
  int (__thiscall ***v23)(_DWORD, _DWORD); // ecx
  int v24; // eax
  unsigned int v25; // ebx
  CREControl *v26; // ecx
  int v27; // ebx
  CREControl *v28; // [esp-Ch] [ebp-64h]
  int v29; // [esp-8h] [ebp-60h]
  int v30; // [esp-8h] [ebp-60h]
  int v31; // [esp+0h] [ebp-58h] BYREF
  _DWORD v32[8]; // [esp+Ch] [ebp-4Ch] BYREF
  _DWORD v33[5]; // [esp+2Ch] [ebp-2Ch] BYREF
  int v34; // [esp+40h] [ebp-18h]
  int v35; // [esp+44h] [ebp-14h]
  int *v36; // [esp+48h] [ebp-10h]
  int v37; // [esp+54h] [ebp-4h]
  int v38; // [esp+68h] [ebp+10h]
  char *v39; // [esp+6Ch] [ebp+14h]
  CREControl *v40; // [esp+6Ch] [ebp+14h]

  v36 = &v31;
  v35 = this;
  v6 = a5[1];
  v7 = a5[3];
  v32[2] = a5[2];
  v8 = a5[5];
  v32[1] = v6;
  v9 = a5[4];
  v32[5] = v8;
  v32[3] = v7;
  v10 = a5[6];
  v32[4] = v9;
  v11 = a5[7];
  v32[0] = &MatBlock::`vftable';
  v32[6] = v10;
  v32[7] = v11;
  sub_100589F0(v33, (int)(a5 + 8));
  v33[4] = a5[12];
  v12 = *(_DWORD *)(this + 4);
  v13 = 0;
  v37 = 0;
  if ( v12 )
    v13 = (*(_DWORD *)(this + 12) - v12) / 52;
  if ( a4 )
  {
    if ( v12 )
      v14 = (*(_DWORD *)(this + 8) - v12) / 52;
    else
      v14 = 0;
    if ( 82595524 - v14 < a4 )
      sub_10056D80();
    if ( v12 )
      v15 = (*(_DWORD *)(this + 8) - v12) / 52;
    else
      v15 = 0;
    if ( v13 >= a4 + v15 )
    {
      v26 = *(CREControl **)(this + 8);
      v40 = v26;
      if ( (v26 - a3) / 52 >= a4 )
      {
        v27 = 52 * a4;
        v38 = (int)v26 - 52 * a4;
        *(_DWORD *)(this + 8) = sub_1016BAE0((CREControl *)((char *)v26 - v27), v26, v26);
        sub_1016BA70((int)a3, v38, (int)v40);
        sub_1016B650((int)a3, (int)a3 + v27, v32);
      }
      else
      {
        sub_1016BAE0(a3, v26, (_DWORD *)a3 + 13 * a4);
        v29 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 52;
        v28 = *(CREControl **)(this + 8);
        LOBYTE(v37) = 3;
        sub_1016BAA0(v28, v29, v32);
        *(_DWORD *)(this + 8) += 52 * a4;
        v30 = *(_DWORD *)(this + 8) - 52 * a4;
        v37 = 0;
        sub_1016B650((int)a3, v30, v32);
      }
    }
    else
    {
      if ( 82595524 - (v13 >> 1) >= v13 )
        v16 = (v13 >> 1) + v13;
      else
        v16 = 0;
      if ( v12 )
        v17 = (*(_DWORD *)(this + 8) - v12) / 52;
      else
        v17 = 0;
      if ( v16 < a4 + v17 )
        v16 = a4 + sub_1001A3D0((_DWORD *)this);
      v18 = (char *)sub_10057020(v16);
      v19 = *(CREControl **)(this + 4);
      LOBYTE(v34) = 0;
      v39 = v18;
      LOBYTE(v37) = 1;
      v20 = (CREControl *)sub_1005D6F0(v19, a3, v18);
      v21 = sub_1016BAA0(v20, a4, v32);
      v22 = *(CREControl **)(this + 8);
      LOBYTE(v34) = 0;
      sub_1005D6F0(a3, v22, v21);
      v23 = *(int (__thiscall ****)(_DWORD, _DWORD))(this + 4);
      v24 = 0;
      v37 = 0;
      if ( v23 )
        v24 = (*(_DWORD *)(this + 8) - (int)v23) / 52;
      v25 = v24 + a4;
      if ( v23 )
      {
        sub_10057F20(v23, *(int (__thiscall ****)(_DWORD, _DWORD))(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = &v39[52 * v16];
      *(_DWORD *)(this + 8) = &v39[52 * v25];
      *(_DWORD *)(this + 4) = v39;
    }
  }
  sub_10161790(v32);
}
