/*
 * func-name: ??1Connector_Config@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x100045b0
 * callers: 0x10004ca0, 0x10004d20, 0x10004e20
 * callees: none
 */

char *__thiscall Outpop::IONetwork::Connector_Config::~Connector_Config(Outpop::IONetwork::Connector_Config *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  char *result; // eax

  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 23);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 20);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  result = (char *)this + 44;
  *((_DWORD *)this + 11) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 11) = &Outpop::IONetwork::Addr::`vftable';
  return result;
}
