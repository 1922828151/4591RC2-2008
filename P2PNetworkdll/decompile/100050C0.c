/*
 * func-name: ?handle_read_seqeuence_stream@Peer@P2P@Outpop@@UAEXAAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@@Z
 * func-address: 0x100050c0
 * callers: none
 * callees: 0x10023306
 */

void __thiscall Outpop::P2P::Peer::handle_read_seqeuence_stream(_DWORD *this, _DWORD *a2)
{
  Outpop::Utility::Ref_Object **act_obj; // eax
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object **v4; // ecx
  Outpop::Utility::Ref_Object **v5; // eax
  Outpop::Utility::Ref_Object **v6; // esi
  Outpop::Utility::Ref_Object **v7; // edi
  Outpop::Utility::Ref_Object **v8; // edi
  Outpop::Utility::Ref_Object **v9; // esi
  Outpop::Utility::Ref_Object *v10; // [esp+10h] [ebp-2Ch] BYREF
  Outpop::Utility::Ref_Object *v11; // [esp+14h] [ebp-28h] BYREF
  _DWORD *v12; // [esp+18h] [ebp-24h]
  int v13; // [esp+1Ch] [ebp-20h] BYREF
  void *v14; // [esp+20h] [ebp-1Ch]
  unsigned int v15; // [esp+24h] [ebp-18h]
  int v16; // [esp+28h] [ebp-14h]
  int v17; // [esp+38h] [ebp-4h]

  v12 = this;
  act_obj = (Outpop::Utility::Ref_Object **)Outpop::IONetwork::Channel::get_act_obj(*a2, &v11);
  v17 = 0;
  v3 = *act_obj;
  v10 = *act_obj;
  if ( v10 )
  {
    Outpop::Utility::Ref_Object::addref(v3);
    v3 = v10;
  }
  LOBYTE(v17) = 2;
  if ( v11 )
  {
    Outpop::Utility::Ref_Object::release(v11);
    v3 = v10;
  }
  if ( v3 )
  {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    LOBYTE(v17) = 3;
    (*(void (__thiscall **)(_DWORD, int *, int *, int *))(*(_DWORD *)*a2 + 48))(*a2, &v13, &v13, &v13);
    v4 = (Outpop::Utility::Ref_Object **)v14;
    v5 = (Outpop::Utility::Ref_Object **)v15;
    v6 = (Outpop::Utility::Ref_Object **)v14;
    if ( (unsigned int)v14 <= v15 )
      goto LABEL_9;
    invalid_parameter_noinfo();
    v5 = (Outpop::Utility::Ref_Object **)v15;
    while ( 1 )
    {
      v4 = (Outpop::Utility::Ref_Object **)v14;
LABEL_9:
      v7 = v5;
      if ( v4 > v5 )
      {
        invalid_parameter_noinfo();
        v5 = (Outpop::Utility::Ref_Object **)v15;
        v4 = (Outpop::Utility::Ref_Object **)v14;
      }
      if ( v6 == v7 )
        break;
      if ( v6 >= v5 )
        invalid_parameter_noinfo();
      (*(void (__thiscall **)(_DWORD *, Outpop::Utility::Ref_Object **, Outpop::Utility::Ref_Object **))(*(v12 - 3) + 24))(
        v12 - 3,
        &v10,
        v6);
      v5 = (Outpop::Utility::Ref_Object **)v15;
      if ( (unsigned int)v6 >= v15 )
      {
        invalid_parameter_noinfo();
        v5 = (Outpop::Utility::Ref_Object **)v15;
      }
      ++v6;
    }
    LOBYTE(v17) = 2;
    if ( v4 )
    {
      v8 = v5;
      v9 = v4;
      if ( v4 != v5 )
      {
        do
        {
          if ( *v9 )
            Outpop::Utility::Ref_Object::release(*v9);
          ++v9;
        }
        while ( v9 != v8 );
        v4 = (Outpop::Utility::Ref_Object **)v14;
      }
      operator delete(v4);
    }
    v3 = v10;
    v14 = 0;
    v15 = 0;
    v16 = 0;
  }
  v17 = -1;
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
}
