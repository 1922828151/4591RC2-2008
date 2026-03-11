/*
 * func-name: ?get_asynch_request_item@Request_Ack@Message@Outpop@@QAE?AV?$Smart_Ptr@USAsynchRequestAckItem@Request_Ack@Message@Outpop@@@Utility@3@I@Z
 * func-address: 0x10026cd0
 * callers: 0x10023fd0, 0x100248a0
 * callees: 0x10015df0, 0x10027830
 */

Outpop::Utility::Ref_Object **__thiscall Outpop::Message::Request_Ack::get_asynch_request_item(
        _DWORD *this,
        Outpop::Utility::Ref_Object **a2,
        int a3)
{
  Outpop::Utility::Lock *v4; // ebp
  int v5; // edi
  int v6; // ebx
  Outpop::Utility::Ref_Object *v7; // eax
  Outpop::Utility::Ref_Object *v8; // esi
  Outpop::Utility::Ref_Object *v9; // esi
  Outpop::Utility::Ref_Object *v11; // [esp+1Ch] [ebp-14h] BYREF
  int v12; // [esp+20h] [ebp-10h]
  int v13; // [esp+2Ch] [ebp-4h]

  v4 = (Outpop::Utility::Lock *)(this + 22);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 22));
  v13 = 1;
  v5 = (int)(this + 2);
  sub_10015DF0(this + 2, &v11, &a3);
  v6 = this[4];
  v7 = (Outpop::Utility::Ref_Object *)(this + 3);
  v8 = v11;
  if ( !v11 || v11 != v7 )
    invalid_parameter_noinfo();
  if ( v12 == v6 )
  {
    *a2 = 0;
    LOBYTE(v13) = 0;
    Outpop::Utility::Lock::unlock(v4);
    return a2;
  }
  else
  {
    if ( !v8 )
      invalid_parameter_noinfo();
    if ( v12 == *((_DWORD *)v8 + 1) )
      invalid_parameter_noinfo();
    v11 = *(Outpop::Utility::Ref_Object **)(v12 + 12);
    v9 = v11;
    if ( v11 )
      Outpop::Utility::Ref_Object::addref(v11);
    LOBYTE(v13) = 2;
    sub_10027830(v5);
    *a2 = v9;
    if ( v9 )
      Outpop::Utility::Ref_Object::addref(v9);
    LOBYTE(v13) = 1;
    if ( v9 )
      Outpop::Utility::Ref_Object::release(v9);
    LOBYTE(v13) = 0;
    Outpop::Utility::Lock::unlock(v4);
    return a2;
  }
}
