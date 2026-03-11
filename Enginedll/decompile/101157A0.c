/*
 * func-name: sub_101157A0
 * func-address: 0x101157a0
 * callers: 0x10115b90
 * callees: 0x1000db00, 0x1000f380, 0x1001b350, 0x1010e450, 0x10112180, 0x10114b80, 0x10114c30, 0x101155e0, 0x10115620, 0x10115670, 0x101156a0, 0x101a2500, 0x101a2522
 */

void __thiscall sub_101157A0(int this, int a2, CREControl *a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  char *v13; // eax
  CREControl *v14; // ecx
  CREControl *v15; // eax
  char *v16; // eax
  CREControl *v17; // ecx
  int *v18; // ecx
  int v19; // eax
  unsigned int v20; // edi
  _DWORD *v21; // eax
  CREControl *v22; // edi
  CREControl *v23; // [esp-Ch] [ebp-40h]
  int v24; // [esp-8h] [ebp-3Ch]
  int v25; // [esp-8h] [ebp-3Ch]
  int v26; // [esp+0h] [ebp-34h] BYREF
  int v27[4]; // [esp+Ch] [ebp-28h] BYREF
  _DWORD *v28; // [esp+1Ch] [ebp-18h]
  int v29; // [esp+20h] [ebp-14h]
  int *v30; // [esp+24h] [ebp-10h]
  int v31; // [esp+30h] [ebp-4h]
  char *v32; // [esp+48h] [ebp+14h]

  v30 = &v26;
  v29 = this;
  sub_1000F380((int)v27, (int)a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v31 = 0;
  if ( v6 )
    v8 = (*(_DWORD *)(this + 12) - v6) >> 4;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v6 )
      v7 = (*(_DWORD *)(this + 8) - v6) >> 4;
    if ( 0xFFFFFFF - v7 < a4 )
      sub_1010E450();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) >> 4;
    else
      v9 = 0;
    if ( v8 >= a4 + v9 )
    {
      v21 = *(_DWORD **)(this + 8);
      v28 = v21;
      if ( ((char *)v21 - (char *)a3) >> 4 >= a4 )
      {
        v22 = (CREControl *)&v21[-4 * a4];
        *(_DWORD *)(this + 8) = sub_10115670(v22, (CREControl *)v21, v21);
        sub_101156A0((char *)a3, (char *)v22, v28);
        sub_10112180((int)a3, (int)a3 + 16 * a4, (int)v27);
      }
      else
      {
        sub_10115670(a3, (CREControl *)v21, (_DWORD *)a3 + 4 * a4);
        v24 = a4 - ((*(_DWORD *)(this + 8) - (int)a3) >> 4);
        v23 = *(CREControl **)(this + 8);
        LOBYTE(v31) = 3;
        sub_101155E0(v23, v24, (int)v27);
        *(_DWORD *)(this + 8) += 16 * a4;
        v25 = *(_DWORD *)(this + 8) - 16 * a4;
        v31 = 0;
        sub_10112180((int)a3, v25, (int)v27);
      }
    }
    else
    {
      if ( 0xFFFFFFF - (v8 >> 1) >= v8 )
        v10 = (v8 >> 1) + v8;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) >> 4;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
      {
        if ( v6 )
          v12 = (*(_DWORD *)(this + 8) - v6) >> 4;
        else
          v12 = 0;
        v10 = v12 + a4;
      }
      v13 = (char *)sub_1001B350(v10);
      v14 = *(CREControl **)(this + 4);
      LOBYTE(v28) = 0;
      v32 = v13;
      LOBYTE(v31) = 1;
      v15 = (CREControl *)sub_10114C30(v14, a3, v13);
      v16 = sub_101155E0(v15, a4, (int)v27);
      v17 = *(CREControl **)(this + 8);
      LOBYTE(v28) = 0;
      sub_10114C30(a3, v17, v16);
      v18 = *(int **)(this + 4);
      v31 = 0;
      if ( v18 )
        v19 = (*(_DWORD *)(this + 8) - (int)v18) >> 4;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
      {
        sub_10114B80(v18, *(int **)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = &v32[16 * v10];
      *(_DWORD *)(this + 8) = &v32[16 * v20];
      *(_DWORD *)(this + 4) = v32;
    }
  }
  v31 = -1;
  sub_1000DB00(v27);
}
