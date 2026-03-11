/*
 * func-name: sub_100225B0
 * func-address: 0x100225b0
 * callers: 0x10021bb0
 * callees: 0x10009af0, 0x1000a460, 0x1000bfa0, 0x1001dd40, 0x1001e350, 0x1001e380, 0x1001e540, 0x10023320, 0x100294f2, 0x10029d92
 */

void __stdcall sub_100225B0(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  int v16[5]; // [esp+0h] [ebp-30h] BYREF
  int v17; // [esp+14h] [ebp-1Ch] BYREF
  Outpop::Utility::Ref_Object *v18; // [esp+18h] [ebp-18h]
  int v19; // [esp+1Ch] [ebp-14h]
  int *v20; // [esp+20h] [ebp-10h]
  int v21; // [esp+2Ch] [ebp-4h]
  char *v22; // [esp+38h] [ebp+8h]
  int v23; // [esp+3Ch] [ebp+Ch]

  v20 = v16;
  sub_1000BFA0(&v17, a2);
  v21 = 0;
  v5 = a1[1];
  if ( v5 )
    v6 = (a1[3] - v5) >> 3;
  else
    v6 = 0;
  if ( v5 )
    v7 = (a1[2] - v5) >> 3;
  else
    v7 = 0;
  if ( v7 == 0x1FFFFFFF )
    sub_10009AF0(v16[0], v16[1]);
  if ( v5 )
    v8 = (a1[2] - v5) >> 3;
  else
    v8 = 0;
  if ( v6 >= v8 + 1 )
  {
    v14 = a1[2];
    v15 = (v14 - a4) >> 3;
    if ( v15 )
    {
      a1[2] = sub_1001E350(v15, v14, v14 - 8, v14);
      sub_1001E380(v14 - 8, a4, v14);
    }
    else
    {
      sub_1001E350(0, a4 + 8, a4, v14);
      LOBYTE(v21) = 3;
      sub_1001DD40(a1[2], 1 - ((a1[2] - a4) >> 3), (int)&v17);
      v21 = 0;
      a1[2] += 8;
    }
    sub_10023320();
  }
  else
  {
    if ( 0x1FFFFFFF - (v6 >> 1) >= v6 )
    {
      v9 = (v6 >> 1) + v6;
      v23 = v9;
    }
    else
    {
      v23 = 0;
      v9 = 0;
    }
    if ( v5 )
      v10 = (a1[2] - v5) >> 3;
    else
      v10 = 0;
    if ( v9 < v10 + 1 )
    {
      if ( v5 )
        v11 = (a1[2] - v5) >> 3;
      else
        v11 = 0;
      v9 = v11 + 1;
      v23 = v9;
    }
    v22 = (char *)sub_1000A460(v9);
    v19 = (int)v22;
    LOBYTE(v21) = 1;
    v19 = sub_1001E350(a1[1], (int)v22, a1[1], a4);
    v19 = sub_1001DD40(v19, 1, (int)&v17);
    sub_1001E350(a1[2], v19, a4, a1[2]);
    v21 = 0;
    v12 = a1[1];
    if ( v12 )
      v13 = (a1[2] - v12) >> 3;
    else
      v13 = 0;
    if ( v12 )
    {
      sub_1001E540(a1[2], v12);
      operator delete((void *)a1[1]);
    }
    a1[3] = &v22[8 * v23];
    a1[2] = &v22[8 * v13 + 8];
    a1[1] = v22;
  }
  v21 = -1;
  if ( v18 )
    Outpop::Utility::Ref_Object::release(v18);
}
