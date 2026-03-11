/*
 * func-name: ?set@INET_Addr@IONetwork@Outpop@@QAEHQBD00@Z
 * func-address: 0x10002950
 * callers: 0x100026d0, 0x10002af0, 0x100030e0
 * callees: 0x10002880
 */

int __thiscall Outpop::IONetwork::INET_Addr::set(
        Outpop::IONetwork::INET_Addr *this,
        char *String,
        char *a3,
        char *proto)
{
  int v5; // eax
  int v6; // eax
  int s_port; // edi
  struct servent *v8; // eax
  char *EndPtr; // [esp+8h] [ebp-4h] BYREF

  EndPtr = 0;
  v5 = strtol(String, &EndPtr, 10);
  if ( v5 < 0 || *EndPtr )
  {
    s_port = -1;
    v8 = getservbyname(String, proto);
    if ( v8 )
      s_port = v8->s_port;
    v6 = s_port;
  }
  else
  {
    v6 = htons(v5);
  }
  if ( v6 > 0 )
    return Outpop::IONetwork::INET_Addr::set(this, v6, a3, 0, 0);
  else
    return -1;
}
