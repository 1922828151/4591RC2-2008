/*
 * func-name: ??1P2P_Config@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10004850
 * callers: 0x10042700, 0x1004a940, 0x1004aa10
 * callees: none
 */

int __thiscall Outpop::IONetwork::P2P_Config::~P2P_Config(Outpop::IONetwork::P2P_Config *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 22);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  return std::string::~string((char *)this + 44);
}
