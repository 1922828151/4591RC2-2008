/*
 * func-name: sub_1001DFB0
 * func-address: 0x1001dfb0
 * callers: 0x1001dd70
 * callees: 0x10009080, 0x10009af0, 0x1000b280, 0x1001b460, 0x1001de90, 0x1001e260, 0x1001e2b0, 0x1001e3d0, 0x10027b30, 0x10028110, 0x100294f2, 0x10029d92
 */

void __stdcall sub_1001DFB0(_DWORD *a1, int a2, int a3)
{
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // [esp-4h] [ebp-38h]
  int v13[4]; // [esp+0h] [ebp-34h] BYREF
  _BYTE v14[12]; // [esp+10h] [ebp-24h] BYREF
  int v15; // [esp+1Ch] [ebp-18h]
  int v16; // [esp+20h] [ebp-14h]
  int *v17; // [esp+24h] [ebp-10h]
  int v18; // [esp+30h] [ebp-4h]
  char *v19; // [esp+3Ch] [ebp+8h]

  v17 = v13;
  sub_1001E2B0(v14);
  v18 = 0;
  v4 = a1[1];
  if ( v4 )
    v5 = (a1[3] - v4) / 12;
  else
    v5 = 0;
  if ( v4 )
    v6 = (a1[2] - v4) / 12;
  else
    v6 = 0;
  if ( v6 == 357913941 )
    sub_10009AF0(v13[0], v13[1]);
  if ( v4 )
    v7 = (a1[2] - v4) / 12;
  else
    v7 = 0;
  if ( v5 >= v7 + 1 )
  {
    v12 = a1[2];
    if ( (v12 - a3) / 12 )
    {
      a1[2] = sub_1001E3D0(a1[2] - 12, v12);
      sub_10027B30();
      sub_10028110(a3 + 12);
    }
    else
    {
      sub_1001E3D0(a3, v12);
      LOBYTE(v18) = 3;
      sub_1001DE90(a1[2], 1 - (a1[2] - a3) / 12, (int)v14);
      v18 = 0;
      a1[2] += 12;
      sub_10028110(a1[2] - 12);
    }
  }
  else
  {
    if ( 357913941 - (v5 >> 1) >= v5 )
    {
      v8 = (v5 >> 1) + v5;
      v16 = v8;
    }
    else
    {
      v16 = 0;
      v8 = 0;
    }
    if ( v4 )
      v9 = (a1[2] - v4) / 12;
    else
      v9 = 0;
    if ( v8 < v9 + 1 )
    {
      v16 = sub_10009080(a1) + 1;
      v8 = v16;
    }
    v19 = (char *)sub_1001E260(v8);
    v15 = (int)v19;
    LOBYTE(v18) = 1;
    v15 = sub_1001E3D0(a1[1], a3);
    v15 = sub_1001DE90(v15, 1, (int)v14);
    sub_1001E3D0(a3, a1[2]);
    v10 = 0;
    v18 = 0;
    v11 = a1[1];
    if ( v11 )
    {
      v10 = (a1[2] - v11) / 12;
      sub_1000B280(v11, a1[2]);
      operator delete((void *)a1[1]);
    }
    a1[3] = &v19[12 * v16];
    a1[2] = &v19[12 * v10 + 12];
    a1[1] = v19;
  }
  v18 = -1;
  sub_1001B460((int)v14);
}
