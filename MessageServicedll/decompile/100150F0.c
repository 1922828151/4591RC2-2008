/*
 * func-name: ?close_connector@Connector_Manager@Message@Outpop@@QAEXI@Z
 * func-address: 0x100150f0
 * callers: 0x1000cc00, 0x10011620, 0x10013130
 * callees: 0x10015df0, 0x1001d450
 */

void __thiscall Outpop::Message::Connector_Manager::close_connector(
        Outpop::Message::Connector_Manager *this,
        unsigned int a2)
{
  Outpop::Utility::Ref_Object *v3; // ebx
  Outpop::Utility::Lock *v4; // edi
  void *v5; // ecx
  char *v6; // eax
  int v7; // esi
  char v8; // [esp+17h] [ebp-2Dh]
  Outpop::Utility::Lock *v9; // [esp+20h] [ebp-24h]
  int v10; // [esp+24h] [ebp-20h] BYREF
  void *v11; // [esp+28h] [ebp-1Ch]
  int v12; // [esp+2Ch] [ebp-18h] BYREF
  void *v13; // [esp+30h] [ebp-14h]
  int v14; // [esp+40h] [ebp-4h]

  v3 = 0;
  v8 = 0;
  v14 = 1;
  v4 = (Outpop::Message::Connector_Manager *)((char *)this + 48);
  v9 = (Outpop::Message::Connector_Manager *)((char *)this + 48);
  Outpop::Utility::Lock::lock((Outpop::Message::Connector_Manager *)((char *)this + 48));
  sub_10015DF0(&v10, &a2);
  v5 = (void *)*((_DWORD *)this + 4);
  v6 = (char *)this + 12;
  v7 = v10;
  v13 = v5;
  if ( !v10 || (char *)v10 != v6 )
    invalid_parameter_noinfo();
  if ( v11 != v13 )
  {
    v8 = 1;
    if ( !v7 )
      invalid_parameter_noinfo();
    if ( v11 == *(void **)(v7 + 4) )
      invalid_parameter_noinfo();
    v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v11 + 3);
    if ( v3 )
      Outpop::Utility::Ref_Object::addref(v3);
    sub_1001D450((int)&v12, v7, v11);
    v4 = v9;
  }
  LOBYTE(v14) = 0;
  Outpop::Utility::Lock::unlock(v4);
  if ( v8 )
    (*(void (__thiscall **)(_DWORD *))(**((_DWORD **)v3 + 28) + 16))(*((_DWORD **)v3 + 28));
  v14 = -1;
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
}
