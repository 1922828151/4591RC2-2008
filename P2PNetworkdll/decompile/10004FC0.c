/*
 * func-name: ?handle_read_stream@Peer@P2P@Outpop@@UAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@AAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@@Z
 * func-address: 0x10004fc0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::P2P::Peer::handle_read_stream(_DWORD *this, int a2, _DWORD *a3)
{
  Outpop::Utility::Ref_Object **act_obj; // eax
  Outpop::Utility::Ref_Object *v4; // ecx
  unsigned int v5; // esi
  unsigned int v6; // ebx
  Outpop::Utility::Ref_Object *v7; // [esp+10h] [ebp-1Ch] BYREF
  Outpop::Utility::Ref_Object *v8; // [esp+14h] [ebp-18h] BYREF
  _DWORD *v9; // [esp+18h] [ebp-14h]
  int v10; // [esp+28h] [ebp-4h]

  v9 = this;
  act_obj = (Outpop::Utility::Ref_Object **)Outpop::IONetwork::Channel::get_act_obj(*a3, &v8);
  v10 = 0;
  v4 = *act_obj;
  v7 = *act_obj;
  if ( v7 )
  {
    Outpop::Utility::Ref_Object::addref(v4);
    v4 = v7;
  }
  LOBYTE(v10) = 2;
  if ( v8 )
  {
    Outpop::Utility::Ref_Object::release(v8);
    v4 = v7;
  }
  if ( v4 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    if ( v5 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    while ( 1 )
    {
      v6 = *(_DWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) > v6 )
        invalid_parameter_noinfo();
      if ( v5 == v6 )
        break;
      if ( v5 >= *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      (*(void (__thiscall **)(_DWORD *, Outpop::Utility::Ref_Object **, unsigned int))(*(v9 - 3) + 24))(v9 - 3, &v7, v5);
      if ( v5 >= *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      v5 += 4;
    }
    v4 = v7;
  }
  v10 = -1;
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
}
