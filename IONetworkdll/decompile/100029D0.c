/*
 * func-name: ?set@INET_Addr@IONetwork@Outpop@@QAEHQBDI0@Z
 * func-address: 0x100029d0
 * callers: 0x100026d0, 0x10002bc0, 0x10003180
 * callees: none
 */

int __thiscall Outpop::IONetwork::INET_Addr::set(
        Outpop::IONetwork::INET_Addr *this,
        char *String,
        unsigned int a3,
        char *proto)
{
  int v5; // eax
  int s_port; // ebx
  struct servent *v7; // eax
  char *EndPtr; // [esp+Ch] [ebp-4h] BYREF

  EndPtr = 0;
  v5 = strtol(String, &EndPtr, 10);
  if ( v5 < 0 || *EndPtr )
  {
    s_port = -1;
    v7 = getservbyname(String, proto);
    if ( v7 )
      s_port = v7->s_port;
  }
  else
  {
    s_port = htons(v5);
  }
  if ( s_port < 0 )
    return -1;
  if ( *((_DWORD *)this + 1) == 2 )
  {
    *((_DWORD *)this + 1) = 2;
    *((_WORD *)this + 6) = 2;
    *((_DWORD *)this + 2) = 16;
    *((_DWORD *)this + 4) = a3;
  }
  *((_WORD *)this + 7) = s_port;
  return 0;
}
