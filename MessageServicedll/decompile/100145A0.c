/*
 * func-name: ?connect@Connector_Manager@Message@Outpop@@QAEHI@Z
 * func-address: 0x100145a0
 * callers: 0x1000cb70, 0x10012f50, 0x10013940, 0x10014890, 0x10016920
 * callees: 0x10014f30
 */

int __thiscall Outpop::Message::Connector_Manager::connect(
        Outpop::Message::Connector_Manager *this,
        Outpop::Utility::Ref_Object *a2)
{
  Outpop::Utility::Ref_Object **v3; // esi
  Outpop::Utility::Ref_Object *v4; // ecx
  Outpop::Utility::Ref_Object *v6; // [esp+14h] [ebp-14h] BYREF
  Outpop::Utility::Ref_Object *v7; // [esp+18h] [ebp-10h] BYREF
  int v8; // [esp+24h] [ebp-4h]

  Outpop::Message::Connector_Manager::find_connector(&v6, a2);
  v8 = 0;
  if ( v6 )
  {
    a2 = 0;
    LOBYTE(v8) = 1;
    if ( *((_DWORD *)this + 32) )
    {
      v3 = (Outpop::Utility::Ref_Object **)(*(int (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **, char *, _DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 32) + 4))(
                                             *((_DWORD *)this + 32),
                                             &v7,
                                             (char *)v6 + 56,
                                             *((_DWORD *)v6 + 3),
                                             *((_DWORD *)v6 + 5),
                                             *((_DWORD *)v6 + 4),
                                             *((_DWORD *)v6 + 6));
      LOBYTE(v8) = 2;
      if ( a2 )
        Outpop::Utility::Ref_Object::release(a2);
      v4 = *v3;
      a2 = *v3;
      if ( a2 )
        Outpop::Utility::Ref_Object::addref(v4);
      LOBYTE(v8) = 1;
      if ( v7 )
        Outpop::Utility::Ref_Object::release(v7);
    }
    else if ( *((_DWORD *)v6 + 26) )
    {
      a2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v6 + 26);
      if ( a2 )
        Outpop::Utility::Ref_Object::addref(a2);
    }
    (*(void (__thiscall **)(Outpop::Utility::Ref_Object *, Outpop::Utility::Ref_Object **))(*(_DWORD *)v6 + 12))(
      v6,
      &a2);
    LOBYTE(v8) = 0;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
  v8 = -1;
  if ( v6 )
    Outpop::Utility::Ref_Object::release(v6);
  return 0;
}
