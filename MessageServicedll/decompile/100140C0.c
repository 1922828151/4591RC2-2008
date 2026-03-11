/*
 * func-name: sub_100140C0
 * func-address: 0x100140c0
 * callers: 0x100140a0
 * callees: none
 */

void __stdcall sub_100140C0(_DWORD *a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  v1 = (Outpop::Utility::Ref_Object *)a1[28];
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
  Outpop::IONetwork::Connector_Config::~Connector_Config((Outpop::IONetwork::Connector_Config *)(a1 + 2));
  Outpop::Utility::Ref_Object::~Ref_Object((Outpop::Utility::Ref_Object *)a1);
}
