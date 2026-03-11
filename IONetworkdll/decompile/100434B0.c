/*
 * func-name: ?send_unite_quence@P2P_Channel@IONetwork@Outpop@@QAEHAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x100434b0
 * callers: 0x10042eb0, 0x10043720, 0x10044a00, 0x100455d0
 * callees: 0x1004bb00
 */

int __thiscall Outpop::IONetwork::P2P_Channel::send_unite_quence(char *this, int a2)
{
  int v2; // ebx
  Outpop::Utility::Stream_Base **v3; // esi
  Outpop::Utility::Stream_Base **v4; // edi
  bool v5; // cc
  bool v6; // cf
  Outpop::Utility::Stream_Base **v7; // ebx
  Outpop::Utility::Stream_Base *v8; // ebx
  int v9; // eax
  char *v10; // ecx
  Outpop::Utility::Ref_Object *v11; // ecx
  bool v12; // zf
  Outpop::Utility::Stream_Base **v13; // ebx
  Outpop::Utility::Stream_Base *v14; // ecx
  char *v15; // ebx
  Outpop::Utility::Stream_Base *v16; // ecx
  char *v17; // esi
  int v18; // edi
  char v20; // [esp-24h] [ebp-60h] BYREF
  char v21; // [esp-20h] [ebp-5Ch]
  int v22; // [esp-1Ch] [ebp-58h]
  int v23; // [esp-18h] [ebp-54h]
  int v24; // [esp-14h] [ebp-50h]
  int v25; // [esp-10h] [ebp-4Ch]
  int v26; // [esp-Ch] [ebp-48h]
  int v27; // [esp-8h] [ebp-44h]
  _DWORD v28[5]; // [esp-4h] [ebp-40h] BYREF
  char *v29; // [esp+10h] [ebp-2Ch]
  char *totallength; // [esp+14h] [ebp-28h]
  Outpop::Utility::Stream_Base **v31; // [esp+18h] [ebp-24h]
  int v32; // [esp+1Ch] [ebp-20h]
  Outpop::Utility::Stream_Base **v33; // [esp+20h] [ebp-1Ch]
  int v34; // [esp+24h] [ebp-18h]
  Outpop::Utility::Stream_Base **v35; // [esp+28h] [ebp-14h]
  int v36; // [esp+38h] [ebp-4h]

  v29 = this;
  v2 = a2;
  v3 = *(Outpop::Utility::Stream_Base ***)(a2 + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  v4 = *(Outpop::Utility::Stream_Base ***)(a2 + 4);
  v5 = (unsigned int)v4 <= *(_DWORD *)(a2 + 8);
  v34 = a2;
  v35 = v3;
  if ( !v5 )
    invalid_parameter_noinfo();
  v6 = (unsigned int)v3 < *(_DWORD *)(a2 + 8);
  v33 = v4;
  v32 = a2;
  v31 = v3;
  if ( !v6 )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    ++v3;
    v5 = *(_DWORD *)(v2 + 4) <= *(_DWORD *)(v2 + 8);
    totallength = *(char **)(v2 + 8);
    if ( !v5 )
      invalid_parameter_noinfo();
    if ( a2 != v2 )
      invalid_parameter_noinfo();
    if ( v3 == (Outpop::Utility::Stream_Base **)totallength )
      break;
    if ( !v34 )
      invalid_parameter_noinfo();
    v7 = v35;
    if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 8) )
      invalid_parameter_noinfo();
    v8 = *v7;
    if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    totallength = (char *)Outpop::Utility::Stream_Base::get_totallength(*v3);
    v9 = Outpop::Utility::Stream_Base::get_totallength(v8);
    v10 = &totallength[v9];
    if ( (int)&totallength[v9] >= 65400 )
    {
      v15 = v29;
      v28[0] = 0;
      v27 = 0;
      totallength = &v20;
      std::string::string(v29 + 636);
      v36 = 3;
      if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 8) )
        invalid_parameter_noinfo();
      v36 = -1;
      Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(v35, v15 + 80, v20, v21, v22, v23, v24, v25, v26, v27, v28[0]);
      v34 = a2;
      v35 = v3;
    }
    else
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      v28[0] = v10;
      v11 = *v3;
      v12 = *v3 == 0;
      totallength = (char *)v28;
      v28[0] = v11;
      if ( !v12 )
        Outpop::Utility::Ref_Object::addref(v11);
      v36 = 2;
      if ( !v32 )
        invalid_parameter_noinfo();
      v13 = v33;
      if ( (unsigned int)v33 >= *(_DWORD *)(v32 + 8) )
        invalid_parameter_noinfo();
      v14 = *v13;
      v36 = -1;
      Outpop::Utility::Binary_Stream::cont(v14, v28[0]);
    }
    v6 = (unsigned int)v3 < *(_DWORD *)(a2 + 8);
    v33 = v3;
    v32 = a2;
    if ( !v6 )
      invalid_parameter_noinfo();
    v2 = a2;
  }
  totallength = (char *)v28;
  v28[0] = 0;
  v36 = 0;
  if ( !v32 )
    invalid_parameter_noinfo();
  if ( (unsigned int)v33 >= *(_DWORD *)(v32 + 8) )
    invalid_parameter_noinfo();
  v16 = *v33;
  v36 = -1;
  Outpop::Utility::Binary_Stream::cont(v16, v28[0]);
  v17 = v29;
  v28[0] = 0;
  v27 = 0;
  totallength = &v20;
  std::string::string(v29 + 636);
  v36 = 1;
  v18 = v34;
  if ( !v34 )
    invalid_parameter_noinfo();
  if ( (unsigned int)v35 >= *(_DWORD *)(v18 + 8) )
    invalid_parameter_noinfo();
  v36 = -1;
  Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(v35, v17 + 80, v20, v21, v22, v23, v24, v25, v26, v27, v28[0]);
  return 0;
}
