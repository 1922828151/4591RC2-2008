/*
 * func-name: ?find_sconnector@Connector_Manager@Message@Outpop@@QAE?AV?$Smart_Ptr@USConnector@Connector_Manager@Message@Outpop@@@Utility@3@I@Z
 * func-address: 0x10015010
 * callers: 0x100167c0
 * callees: 0x10015df0
 */

Outpop::Utility::Ref_Object **__thiscall Outpop::Message::Connector_Manager::find_sconnector(
        _DWORD *this,
        Outpop::Utility::Ref_Object **a2,
        char a3)
{
  Outpop::Utility::Lock *v4; // edi
  int v5; // ebp
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // ebx
  Outpop::Utility::Ref_Object *v9; // ecx
  Outpop::Utility::Ref_Object **v10; // esi
  _DWORD *v12; // [esp+20h] [ebp-14h] BYREF
  int v13; // [esp+24h] [ebp-10h]
  int v14; // [esp+30h] [ebp-4h]

  v4 = (Outpop::Utility::Lock *)(this + 12);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 12));
  v14 = 1;
  sub_10015DF0(&v12, &a3);
  v5 = this[4];
  v6 = this + 3;
  v7 = v12;
  if ( !v12 || v12 != v6 )
    invalid_parameter_noinfo();
  v8 = v13;
  if ( v13 == v5 )
  {
    v10 = a2;
    *a2 = 0;
  }
  else
  {
    if ( !v7 )
      invalid_parameter_noinfo();
    if ( v8 == v7[1] )
      invalid_parameter_noinfo();
    v9 = *(Outpop::Utility::Ref_Object **)(v8 + 12);
    v10 = a2;
    *a2 = v9;
    if ( v9 )
      Outpop::Utility::Ref_Object::addref(v9);
  }
  LOBYTE(v14) = 0;
  Outpop::Utility::Lock::unlock(v4);
  return v10;
}
