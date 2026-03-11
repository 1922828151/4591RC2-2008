/*
 * func-name: ?set@INET_Addr@IONetwork@Outpop@@QAEHABV123@@Z
 * func-address: 0x10002680
 * callers: none
 * callees: 0x1004f11e
 */

int __thiscall Outpop::IONetwork::INET_Addr::set(
        Outpop::IONetwork::INET_Addr *this,
        const struct Outpop::IONetwork::INET_Addr *a2)
{
  int result; // eax

  if ( *((_DWORD *)a2 + 1) == -1 )
  {
    result = 0;
    *((_DWORD *)this + 3) = 0;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 6) = 0;
  }
  else
  {
    memcpy((char *)this + 12, (char *)a2 + 12, *((_DWORD *)a2 + 2));
    *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    return 0;
  }
  return result;
}
