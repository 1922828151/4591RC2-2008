/*
 * func-name: ?initialize@Stream_Connector@IONetwork@Outpop@@UAEXAAUConnector_Config@23@@Z
 * func-address: 0x1001de00
 * callers: none
 * callees: 0x100046e0
 */

int __thiscall Outpop::IONetwork::Stream_Connector::initialize(
        Outpop::IONetwork::Stream_Connector *this,
        struct Outpop::IONetwork::Connector_Config *a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  int result; // eax

  Outpop::IONetwork::Connector_Config::operator=((int)this + 12, (int)a2);
  v3 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)a2 + 11) + 16))((char *)a2 + 44);
  v4 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 35) + 16))((char *)this + 140);
  *v4 = *v3;
  v4[1] = v3[1];
  v4[2] = v3[2];
  v4[3] = v3[3];
  result = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 42) = result;
  return result;
}
