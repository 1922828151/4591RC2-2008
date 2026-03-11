/*
 * func-name: sub_10009400
 * func-address: 0x10009400
 * callers: 0x100091d0
 * callees: 0x10008ed0, 0x10009260, 0x10009690, 0x10009a10, 0x10009a40, 0x10009a70, 0x10009fd0, 0x1000a3a0, 0x10023306, 0x10023bc6
 */

void __stdcall sub_10009400(int a1, Outpop::Utility::Ref_Object **a2, int a3, int a4)
{
  Outpop::Utility::Ref_Object *v4; // ecx
  int v5; // eax
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // ecx
  void *v12; // eax
  int v13; // edi
  int v14; // esi
  Outpop::Utility::Ref_Object **v15; // eax
  void *v16; // eax
  char *v17; // ecx
  int v18; // [esp-4h] [ebp-30h]
  int v19[4]; // [esp+0h] [ebp-2Ch] BYREF
  int v20; // [esp+10h] [ebp-1Ch]
  void *v21; // [esp+14h] [ebp-18h]
  Outpop::Utility::Ref_Object *v22[2]; // [esp+18h] [ebp-14h] BYREF
  int v23; // [esp+28h] [ebp-4h]
  unsigned int v24; // [esp+38h] [ebp+Ch]

  v22[1] = (Outpop::Utility::Ref_Object *)v19;
  v4 = *a2;
  v22[0] = *a2;
  if ( v22[0] )
    Outpop::Utility::Ref_Object::addref(v4);
  v23 = 0;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 )
    v6 = (*(_DWORD *)(a1 + 12) - v5) >> 2;
  else
    v6 = 0;
  if ( v5 )
    v7 = (*(_DWORD *)(a1 + 8) - v5) >> 2;
  else
    v7 = 0;
  if ( v7 == 0x3FFFFFFF )
    sub_10008ED0(v19[0], v19[1]);
  if ( v5 )
    v8 = (*(_DWORD *)(a1 + 8) - v5) >> 2;
  else
    v8 = 0;
  if ( v6 >= v8 + 1 )
  {
    v18 = *(_DWORD *)(a1 + 8);
    if ( (v18 - a4) >> 2 )
    {
      *(_DWORD *)(a1 + 8) = sub_10009A10(*(_DWORD *)(a1 + 8) - 4, v18);
      sub_10009A70(a4);
    }
    else
    {
      sub_10009A10(a4, v18);
      LOBYTE(v23) = 3;
      sub_10009FD0(*(_DWORD *)(a1 + 8), v22);
      v23 = 0;
      *(_DWORD *)(a1 + 8) += 4;
    }
    sub_10009A40();
  }
  else
  {
    if ( 0x3FFFFFFF - (v6 >> 1) >= v6 )
    {
      v9 = (v6 >> 1) + v6;
      v24 = v9;
    }
    else
    {
      v24 = 0;
      v9 = 0;
    }
    if ( v5 )
      v10 = (*(_DWORD *)(a1 + 8) - v5) >> 2;
    else
      v10 = 0;
    if ( v9 < v10 + 1 )
    {
      if ( v5 )
        v11 = (*(_DWORD *)(a1 + 8) - v5) >> 2;
      else
        v11 = 0;
      v24 = v11 + 1;
      v9 = v11 + 1;
    }
    v12 = (void *)sub_10009690(v9);
    LOBYTE(v23) = 1;
    LOBYTE(v20) = 0;
    v21 = v12;
    v13 = sub_1000A3A0(a4, v12);
    sub_10009FD0(v13, v22);
    sub_1000A3A0(*(_DWORD *)(a1 + 8), v13 + 4);
    v14 = 0;
    v23 = 0;
    v15 = *(Outpop::Utility::Ref_Object ***)(a1 + 4);
    if ( v15 )
    {
      v14 = (*(_DWORD *)(a1 + 8) - (int)v15) >> 2;
      sub_10009260(v15, *(Outpop::Utility::Ref_Object ***)(a1 + 8));
      operator delete(*(void **)(a1 + 4));
    }
    v16 = v21;
    v17 = (char *)v21 + 4 * v14 + 4;
    *(_DWORD *)(a1 + 12) = (char *)v21 + 4 * v24;
    *(_DWORD *)(a1 + 8) = v17;
    *(_DWORD *)(a1 + 4) = v16;
  }
  v23 = -1;
  if ( v22[0] )
    Outpop::Utility::Ref_Object::release(v22[0]);
}
