/*
 * func-name: sub_10127000
 * func-address: 0x10127000
 * callers: 0x10127390
 * callees: 0x1001abb0, 0x1001f200, 0x10023df0, 0x10027030, 0x1008fa90, 0x100e7cb0, 0x100e7e40, 0x10126c60, 0x101a2500, 0x101a2522
 */

int __thiscall sub_10127000(int this, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // ecx
  int v12; // ebx
  CREControl *v13; // eax
  int v14; // ecx
  CREControl *v15; // eax
  char *v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // edi
  CREControl *v21; // eax
  int v22; // edi
  CREControl *v24; // [esp-Ch] [ebp-50h]
  int v25; // [esp-8h] [ebp-4Ch]
  int v26; // [esp-8h] [ebp-4Ch]
  int v27; // [esp+0h] [ebp-44h] BYREF
  _BYTE v28[28]; // [esp+Ch] [ebp-38h] BYREF
  int v29; // [esp+28h] [ebp-1Ch]
  CREControl *v30; // [esp+2Ch] [ebp-18h]
  int v31; // [esp+30h] [ebp-14h]
  int *v32; // [esp+34h] [ebp-10h]
  int v33; // [esp+40h] [ebp-4h]
  CREControl *v34; // [esp+58h] [ebp+14h]

  v32 = &v27;
  v31 = this;
  std::string::string(v28, a5);
  v29 = a5[7];
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v33 = 0;
  if ( v6 )
    v8 = (*(_DWORD *)(this + 12) - v6) >> 5;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v6 )
      v7 = (*(_DWORD *)(this + 8) - v6) >> 5;
    if ( 0x7FFFFFF - v7 < a4 )
      sub_1001ABB0();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) >> 5;
    else
      v9 = 0;
    if ( v8 >= a4 + v9 )
    {
      v21 = *(CREControl **)(this + 8);
      v30 = v21;
      if ( ((int)v21 - a3) >> 5 >= a4 )
      {
        v22 = (int)v21 - 32 * a4;
        *(_DWORD *)(this + 8) = sub_10023DF0(v22, (int)v21, v21);
        sub_100E7E40(a3, v22, (int)v30);
        sub_100E7CB0(a3, a3 + 32 * a4, (int)v28);
      }
      else
      {
        sub_10023DF0(a3, (int)v21, (CREControl *)(a3 + 32 * a4));
        v25 = a4 - ((*(_DWORD *)(this + 8) - a3) >> 5);
        v24 = *(CREControl **)(this + 8);
        LOBYTE(v33) = 3;
        sub_10126C60(v24, v25, (int)v28);
        *(_DWORD *)(this + 8) += 32 * a4;
        v26 = *(_DWORD *)(this + 8) - 32 * a4;
        v33 = 0;
        sub_100E7CB0(a3, v26, (int)v28);
      }
    }
    else
    {
      if ( 0x7FFFFFF - (v8 >> 1) >= v8 )
        v10 = (v8 >> 1) + v8;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) >> 5;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
      {
        if ( v6 )
          v12 = (*(_DWORD *)(this + 8) - v6) >> 5;
        else
          v12 = 0;
        v10 = a4 + v12;
      }
      v13 = (CREControl *)sub_1008FA90(v10);
      v14 = *(_DWORD *)(this + 4);
      LOBYTE(v30) = 0;
      v34 = v13;
      LOBYTE(v33) = 1;
      v15 = sub_1001F200(v14, a3, v13);
      v16 = sub_10126C60(v15, a4, (int)v28);
      v17 = *(_DWORD *)(this + 8);
      LOBYTE(v30) = 0;
      sub_1001F200(a3, v17, (CREControl *)v16);
      v18 = *(_DWORD *)(this + 4);
      v33 = 0;
      if ( v18 )
        v19 = (*(_DWORD *)(this + 8) - v18) >> 5;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
      {
        sub_10027030(v18, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v34 + 32 * v10;
      *(_DWORD *)(this + 8) = (char *)v34 + 32 * v20;
      *(_DWORD *)(this + 4) = v34;
    }
  }
  v33 = -1;
  return std::string::~string(v28);
}
