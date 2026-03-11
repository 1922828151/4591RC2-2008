/*
 * func-name: ?initialize@Dgram_Connector@IONetwork@Outpop@@UAEXAAUConnector_Config@23@@Z
 * func-address: 0x100368f0
 * callers: none
 * callees: 0x100046e0
 */

_DWORD *__thiscall Outpop::IONetwork::Dgram_Connector::initialize(
        Outpop::IONetwork::Dgram_Connector *this,
        struct Outpop::IONetwork::Connector_Config *a2)
{
  char *v3; // edi
  _DWORD *v4; // esi
  _DWORD *result; // eax

  Outpop::IONetwork::Connector_Config::operator=((int)this + 12, (int)a2);
  v3 = (char *)this + 124;
  v4 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)a2 + 11) + 16))((char *)a2 + 44);
  result = (_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 16))(v3);
  *result = *v4;
  result[1] = v4[1];
  result[2] = v4[2];
  result[3] = v4[3];
  return result;
}
