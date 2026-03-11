/*
 * func-name: sub_1014F2B0
 * func-address: 0x1014f2b0
 * callers: 0x1014f5b0
 * callees: 0x101493d0, 0x1014df30, 0x1014df50, 0x1014dfd0, 0x1014e0c0, 0x1014e2e0, 0x1014e390, 0x1014e820, 0x1014e8e0, 0x1014ec70, 0x1014ee70, 0x1014f1d0, 0x101a2500, 0x101a2522
 */

int __thiscall sub_1014F2B0(int this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  CREControl *v12; // eax
  _DWORD *v13; // ecx
  CREControl *v14; // eax
  char *v15; // eax
  _DWORD *v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ebx
  _DWORD *v20; // ecx
  char *v21; // ebx
  CREControl *v23; // [esp-Ch] [ebp-74h]
  int v24; // [esp-8h] [ebp-70h]
  _DWORD *v25; // [esp-8h] [ebp-70h]
  int v26; // [esp+0h] [ebp-68h] BYREF
  _DWORD v27[17]; // [esp+Ch] [ebp-5Ch] BYREF
  _DWORD *v28; // [esp+50h] [ebp-18h]
  int v29; // [esp+54h] [ebp-14h]
  int *v30; // [esp+58h] [ebp-10h]
  int v31; // [esp+64h] [ebp-4h]
  CREControl *v32; // [esp+7Ch] [ebp+14h]

  v30 = &v26;
  v29 = this;
  sub_1014DFD0(v27, a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v31 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 68;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 68;
    else
      v8 = 0;
    if ( 63161283 - v8 < a4 )
      sub_1014DF50();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 68;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(_DWORD **)(this + 8);
      v28 = v20;
      if ( ((char *)v20 - a3) / 68 >= a4 )
      {
        v21 = (char *)&v20[-17 * a4];
        *(_DWORD *)(this + 8) = sub_1014F1D0(v21, v20, (CREControl *)v20);
        sub_1014E820(a3, v21, v28);
        sub_1014E2E0(a3, &a3[68 * a4], v27);
      }
      else
      {
        sub_1014F1D0(a3, v20, (CREControl *)&a3[68 * a4]);
        v24 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 68;
        v23 = *(CREControl **)(this + 8);
        LOBYTE(v31) = 3;
        sub_1014EC70(v23, v24, v27);
        *(_DWORD *)(this + 8) += 68 * a4;
        v25 = (_DWORD *)(*(_DWORD *)(this + 8) - 68 * a4);
        v31 = 0;
        sub_1014E2E0(a3, v25, v27);
      }
    }
    else
    {
      if ( 63161283 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 68;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_1014DF30((_DWORD *)this);
      v12 = (CREControl *)sub_1014E0C0(v10);
      v13 = *(_DWORD **)(this + 4);
      LOBYTE(v28) = 0;
      v32 = v12;
      LOBYTE(v31) = 1;
      v14 = sub_1014E390(v13, a3, v12);
      v15 = sub_1014EC70(v14, a4, v27);
      v16 = *(_DWORD **)(this + 8);
      LOBYTE(v28) = 0;
      sub_1014E390(a3, v16, (CREControl *)v15);
      v17 = *(_DWORD *)(this + 4);
      v18 = 0;
      v31 = 0;
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) / 68;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_1014E8E0(v17, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v32 + 68 * v10;
      *(_DWORD *)(this + 8) = (char *)v32 + 68 * v19;
      *(_DWORD *)(this + 4) = v32;
    }
  }
  v31 = -1;
  return sub_101493D0((char *)v27);
}
