/*
 * func-name: sub_1003BAF0
 * func-address: 0x1003baf0
 * callers: 0x1003b9e0
 * callees: 0x1002c4f0, 0x100359d0, 0x1003bac0, 0x1003bd40, 0x1003bd90, 0x1003c250, 0x1003c280, 0x1004e870, 0x1004f112
 */

void __stdcall sub_1003BAF0(_DWORD *a1, Outpop::Utility::Ref_Object **a2, int a3, Outpop::Utility::Ref_Object **a4)
{
  Outpop::Utility::Ref_Object *v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  Outpop::Utility::Ref_Object **v15; // edi
  int v16; // [esp-4h] [ebp-2Ch]
  int v17; // [esp+0h] [ebp-28h] BYREF
  int v18; // [esp+10h] [ebp-18h]
  Outpop::Utility::Ref_Object *v19[2]; // [esp+14h] [ebp-14h] BYREF
  int v20; // [esp+24h] [ebp-4h]
  int v21; // [esp+30h] [ebp+8h]
  unsigned int v22; // [esp+34h] [ebp+Ch]

  v19[1] = (Outpop::Utility::Ref_Object *)&v17;
  v5 = *a2;
  v19[0] = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  v20 = 0;
  v6 = a1[1];
  if ( v6 )
    v7 = (a1[3] - v6) >> 2;
  else
    v7 = 0;
  if ( v6 )
    v8 = (a1[2] - v6) >> 2;
  else
    v8 = 0;
  if ( v8 == 0x3FFFFFFF )
    sub_100359D0();
  if ( v6 )
    v9 = (a1[2] - v6) >> 2;
  else
    v9 = 0;
  if ( v7 >= v9 + 1 )
  {
    v16 = a1[2];
    if ( (v16 - (int)a4) >> 2 )
    {
      a1[2] = sub_1003C250(a1[2] - 4, v16);
      sub_1003C280(a4);
      v15 = a4 + 1;
    }
    else
    {
      sub_1003C250(a4, v16);
      LOBYTE(v20) = 3;
      sub_1003BAC0(a1[2], 1 - ((a1[2] - (int)a4) >> 2), (int)v19);
      v20 = 0;
      a1[2] += 4;
      v15 = (Outpop::Utility::Ref_Object **)(a1[2] - 4);
    }
    sub_1002C4F0(a4, v19, v15);
  }
  else
  {
    if ( 0x3FFFFFFF - (v7 >> 1) >= v7 )
    {
      v10 = (v7 >> 1) + v7;
      v22 = v10;
    }
    else
    {
      v22 = 0;
      v10 = 0;
    }
    if ( v6 )
      v11 = (a1[2] - v6) >> 2;
    else
      v11 = 0;
    if ( v10 < v11 + 1 )
    {
      if ( v6 )
        v12 = (a1[2] - v6) >> 2;
      else
        v12 = 0;
      v22 = v12 + 1;
    }
    v21 = sub_1003BD40();
    v18 = v21;
    LOBYTE(v20) = 1;
    v18 = sub_1003C250(a1[1], a4);
    v18 = sub_1003BAC0(v18, 1, (int)v19);
    sub_1003C250(a4, a1[2]);
    v20 = 0;
    v13 = a1[1];
    if ( v13 )
      v14 = (a1[2] - v13) >> 2;
    else
      v14 = 0;
    if ( v13 )
    {
      sub_1003BD90();
      operator delete(a1[1]);
    }
    a1[3] = v21 + 4 * v22;
    a1[2] = v21 + 4 * v14 + 4;
    a1[1] = v21;
  }
  v20 = -1;
  if ( v19[0] )
    Outpop::Utility::Ref_Object::release(v19[0]);
}
