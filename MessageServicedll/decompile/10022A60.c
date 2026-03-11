/*
 * func-name: sub_10022A60
 * func-address: 0x10022a60
 * callers: 0x10022490
 * callees: 0x10009cc0, 0x1000c220, 0x10022520, 0x10023080, 0x10023160, 0x10023190, 0x100231c0, 0x100294f2, 0x10029d92
 */

void __stdcall sub_10022A60(void *a1, Outpop::Utility::Ref_Object **a2, int a3, int a4)
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
  int v15; // [esp-4h] [ebp-2Ch]
  int v16; // [esp+0h] [ebp-28h] BYREF
  int v17; // [esp+10h] [ebp-18h]
  Outpop::Utility::Ref_Object *v18[2]; // [esp+14h] [ebp-14h] BYREF
  int v19; // [esp+24h] [ebp-4h]
  char *v20; // [esp+30h] [ebp+8h]
  int v21; // [esp+34h] [ebp+Ch]

  v18[1] = (Outpop::Utility::Ref_Object *)&v16;
  v5 = *a2;
  v18[0] = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  v19 = 0;
  v6 = *((_DWORD *)a1 + 1);
  if ( v6 )
    v7 = (*((_DWORD *)a1 + 3) - v6) >> 2;
  else
    v7 = 0;
  if ( v6 )
    v8 = (*((_DWORD *)a1 + 2) - v6) >> 2;
  else
    v8 = 0;
  if ( v8 == 0x3FFFFFFF )
    sub_1000C220();
  if ( v6 )
    v9 = (*((_DWORD *)a1 + 2) - v6) >> 2;
  else
    v9 = 0;
  if ( v7 >= v9 + 1 )
  {
    v15 = *((_DWORD *)a1 + 2);
    if ( (v15 - a4) >> 2 )
    {
      *((_DWORD *)a1 + 2) = sub_10023160(*((_DWORD *)a1 + 2) - 4, v15);
      sub_100231C0(a4);
    }
    else
    {
      sub_10023160(a4, v15);
      LOBYTE(v19) = 3;
      sub_10022520(*((_DWORD *)a1 + 2), 1 - ((*((_DWORD *)a1 + 2) - a4) >> 2), (int)v18);
      v19 = 0;
      *((_DWORD *)a1 + 2) += 4;
    }
    sub_10023190();
  }
  else
  {
    if ( 0x3FFFFFFF - (v7 >> 1) >= v7 )
    {
      v10 = (v7 >> 1) + v7;
      v21 = v10;
    }
    else
    {
      v21 = 0;
      v10 = 0;
    }
    if ( v6 )
      v11 = (*((_DWORD *)a1 + 2) - v6) >> 2;
    else
      v11 = 0;
    if ( v10 < v11 + 1 )
    {
      if ( v6 )
        v12 = (*((_DWORD *)a1 + 2) - v6) >> 2;
      else
        v12 = 0;
      v10 = v12 + 1;
      v21 = v10;
    }
    v20 = (char *)sub_10009CC0(v10);
    v17 = (int)v20;
    LOBYTE(v19) = 1;
    v17 = sub_10023160(*((_DWORD *)a1 + 1), a4);
    v17 = sub_10022520(v17, 1, (int)v18);
    sub_10023160(a4, *((_DWORD *)a1 + 2));
    v19 = 0;
    v13 = *((_DWORD *)a1 + 1);
    if ( v13 )
      v14 = (*((_DWORD *)a1 + 2) - v13) >> 2;
    else
      v14 = 0;
    if ( v13 )
    {
      sub_10023080();
      operator delete(*((void **)a1 + 1));
    }
    *((_DWORD *)a1 + 3) = &v20[4 * v21];
    *((_DWORD *)a1 + 2) = &v20[4 * v14 + 4];
    *((_DWORD *)a1 + 1) = v20;
  }
  v19 = -1;
  if ( v18[0] )
    Outpop::Utility::Ref_Object::release(v18[0]);
}
