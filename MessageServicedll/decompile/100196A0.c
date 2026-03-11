/*
 * func-name: sub_100196A0
 * func-address: 0x100196a0
 * callers: 0x10019a80, 0x10019e50
 * callees: 0x1001c100, 0x1001d930
 */

_DWORD *__stdcall sub_100196A0(
        _DWORD *a1,
        int a2,
        Outpop::Utility::Ref_Object **a3,
        int a4,
        Outpop::Utility::Ref_Object **a5)
{
  _DWORD *v5; // esi
  Outpop::Utility::Ref_Object **v6; // eax
  Outpop::Utility::Ref_Object *v7; // ecx
  bool v8; // zf
  Outpop::Utility::Ref_Object *v9; // ecx
  _DWORD *v10; // ebp
  int v11; // edi
  _DWORD *v12; // esi
  int v13; // edi
  _DWORD *v14; // ebp
  int v15; // esi
  _DWORD *v16; // esi
  _DWORD *v17; // edi
  _DWORD *v18; // ebp
  int v19; // eax
  _DWORD *v20; // esi
  _DWORD *v21; // edx
  _DWORD *result; // eax
  int v23; // [esp+14h] [ebp-34h] BYREF
  _DWORD *v24; // [esp+18h] [ebp-30h]
  int v25; // [esp+1Ch] [ebp-2Ch] BYREF
  _DWORD *v26; // [esp+20h] [ebp-28h]
  int v27; // [esp+24h] [ebp-24h]
  int v28; // [esp+28h] [ebp-20h]
  _BYTE v29[16]; // [esp+2Ch] [ebp-1Ch] BYREF
  int v30; // [esp+44h] [ebp-4h]

  v5 = a1;
  Outpop::Utility::Timer_Handler::Timer_Handler((Outpop::Utility::Timer_Handler *)a1);
  v30 = 0;
  v6 = a3;
  *v5 = &Outpop::Message::Group_Item::`vftable';
  v7 = *v6;
  v8 = *v6 == 0;
  v5[2] = *v6;
  if ( !v8 )
    Outpop::Utility::Ref_Object::addref(v7);
  LOBYTE(v30) = 1;
  v9 = *a5;
  v8 = *a5 == 0;
  v5[3] = *a5;
  if ( !v8 )
    Outpop::Utility::Ref_Object::addref(v9);
  v10 = v5 + 4;
  a3 = (Outpop::Utility::Ref_Object **)(v5 + 4);
  sub_1001D930(v5 + 4, &a1);
  Outpop::Utility::Lock::Lock((Outpop::Utility::Lock *)(v5 + 15));
  LOBYTE(v30) = 5;
  v11 = a4;
  v5[21] = a2;
  v12 = **(_DWORD ***)(v11 + 8);
  v13 = v11 + 4;
  while ( 1 )
  {
    v26 = *(_DWORD **)(v13 + 4);
    if ( v12 == v26 )
      break;
    a3 = 0;
    LOBYTE(v30) = 6;
    if ( v12 == *(_DWORD **)(v13 + 4) )
      invalid_parameter_noinfo();
    v27 = v12[2];
    v28 = 0;
    v23 = v27;
    v24 = 0;
    LOBYTE(v30) = 10;
    sub_1001C100(v10, v29, &v23);
    LOBYTE(v30) = 5;
    if ( v12 == *(_DWORD **)(v13 + 4) )
      invalid_parameter_noinfo();
    v12 = (_DWORD *)*v12;
  }
  v14 = **(_DWORD ***)(a4 + 48);
  v15 = a4 + 44;
  a4 += 44;
  v24 = v14;
  while ( v14 != *(_DWORD **)(v15 + 4) )
  {
    v16 = *(_DWORD **)v14[5];
    v17 = v14 + 4;
    while ( 1 )
    {
      if ( v14 == *(_DWORD **)(a4 + 4) )
        invalid_parameter_noinfo();
      v18 = (_DWORD *)v14[5];
      if ( v17 != v24 + 4 )
        invalid_parameter_noinfo();
      if ( v16 == v18 )
        break;
      if ( v16 == (_DWORD *)v17[1] )
        invalid_parameter_noinfo();
      v19 = v16[2];
      a3 = 0;
      v27 = v19;
      v28 = 0;
      v25 = v19;
      v26 = 0;
      LOBYTE(v30) = 17;
      sub_1001C100(a1 + 4, v29, &v25);
      LOBYTE(v30) = 5;
      if ( v16 == (_DWORD *)v17[1] )
        invalid_parameter_noinfo();
      v16 = (_DWORD *)*v16;
      v14 = v24;
    }
    v20 = v24;
    if ( v24 == *(_DWORD **)(a4 + 4) )
      invalid_parameter_noinfo();
    v21 = (_DWORD *)*v20;
    v15 = a4;
    v24 = v21;
    v14 = v21;
  }
  result = a1;
  a1[23] = 0;
  result[14] = 0;
  result[22] = 0;
  return result;
}
