/*
 * func-name: sub_100124C0
 * func-address: 0x100124c0
 * callers: 0x10013230
 * callees: 0x10009cb0, 0x1000c350, 0x1000cd90, 0x1000f0f0, 0x100114e0, 0x10026fa0, 0x1008fa90, 0x10126830, 0x101a2500, 0x101a2522
 */

int __thiscall sub_100124C0(int this, int a2, char *a3, unsigned int a4, char *a5)
{
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // ebx
  int v10; // ecx
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // ebx
  CREControl *v14; // eax
  _DWORD *v15; // ecx
  CREControl *v16; // eax
  char *v17; // eax
  _DWORD *v18; // ecx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // edi
  CREControl *v22; // eax
  _DWORD *v23; // edi
  CREControl *v25; // [esp-Ch] [ebp-50h]
  int v26; // [esp-8h] [ebp-4Ch]
  int v27; // [esp-8h] [ebp-4Ch]
  int v28; // [esp+0h] [ebp-44h] BYREF
  int v29; // [esp+Ch] [ebp-38h] BYREF
  _BYTE v30[28]; // [esp+10h] [ebp-34h] BYREF
  CREControl *v31; // [esp+2Ch] [ebp-18h]
  int v32; // [esp+30h] [ebp-14h]
  int *v33; // [esp+34h] [ebp-10h]
  int v34; // [esp+40h] [ebp-4h]
  CREControl *v35; // [esp+58h] [ebp+14h]

  v6 = *(_DWORD *)a5;
  v33 = &v28;
  v29 = v6;
  v32 = this;
  std::string::string(v30, a5 + 4);
  v7 = *(_DWORD *)(this + 4);
  v8 = 0;
  v34 = 0;
  if ( v7 )
    v9 = (*(_DWORD *)(this + 12) - v7) >> 5;
  else
    v9 = 0;
  if ( a4 )
  {
    if ( v7 )
      v8 = (*(_DWORD *)(this + 8) - v7) >> 5;
    if ( 0x7FFFFFF - v8 < a4 )
      sub_10009CB0();
    if ( v7 )
      v10 = (*(_DWORD *)(this + 8) - v7) >> 5;
    else
      v10 = 0;
    if ( v9 >= a4 + v10 )
    {
      v22 = *(CREControl **)(this + 8);
      v31 = v22;
      if ( (v22 - (CREControl *)a3) >> 5 >= a4 )
      {
        v23 = (_DWORD *)((char *)v22 - 32 * a4);
        *(_DWORD *)(this + 8) = sub_100114E0(v23, v22, v22);
        sub_1000CD90((int)a3, (int)v23, (int)v31);
        sub_10126830(a3, &a3[32 * a4], &v29);
      }
      else
      {
        sub_100114E0(a3, v22, (CREControl *)&a3[32 * a4]);
        v26 = a4 - ((*(_DWORD *)(this + 8) - (int)a3) >> 5);
        v25 = *(CREControl **)(this + 8);
        LOBYTE(v34) = 3;
        sub_1000F0F0(v25, v26, &v29);
        *(_DWORD *)(this + 8) += 32 * a4;
        v27 = *(_DWORD *)(this + 8) - 32 * a4;
        v34 = 0;
        sub_10126830(a3, v27, &v29);
      }
    }
    else
    {
      if ( 0x7FFFFFF - (v9 >> 1) >= v9 )
        v11 = (v9 >> 1) + v9;
      else
        v11 = 0;
      if ( v7 )
        v12 = (*(_DWORD *)(this + 8) - v7) >> 5;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
      {
        if ( v7 )
          v13 = (*(_DWORD *)(this + 8) - v7) >> 5;
        else
          v13 = 0;
        v11 = a4 + v13;
      }
      v14 = (CREControl *)sub_1008FA90(v11);
      v15 = *(_DWORD **)(this + 4);
      LOBYTE(v31) = 0;
      v35 = v14;
      LOBYTE(v34) = 1;
      v16 = sub_1000C350(v15, a3, v14);
      v17 = sub_1000F0F0(v16, a4, &v29);
      v18 = *(_DWORD **)(this + 8);
      LOBYTE(v31) = 0;
      sub_1000C350(a3, v18, (CREControl *)v17);
      v19 = *(_DWORD *)(this + 4);
      v34 = 0;
      if ( v19 )
        v20 = (*(_DWORD *)(this + 8) - v19) >> 5;
      else
        v20 = 0;
      v21 = v20 + a4;
      if ( v19 )
      {
        sub_10026FA0(v19, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v35 + 32 * v11;
      *(_DWORD *)(this + 8) = (char *)v35 + 32 * v21;
      *(_DWORD *)(this + 4) = v35;
    }
  }
  v34 = -1;
  return std::string::~string(v30);
}
