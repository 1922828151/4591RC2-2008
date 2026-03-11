/*
 * func-name: ?hash64@INET_Addr@IONetwork@Outpop@@QAE_JXZ
 * func-address: 0x10003890
 * callers: 0x10017730, 0x10018710, 0x10018f50, 0x10026cd0, 0x10027c50, 0x10028900, 0x10029880, 0x10031590, 0x10036c20, 0x100372d0, 0x100377c0, 0x10038060
 * callees: 0x1004f130
 */

int __thiscall Outpop::IONetwork::INET_Addr::hash64(Outpop::IONetwork::INET_Addr *this)
{
  ntohl(*((_DWORD *)this + 4));
  return ntohs(*((_WORD *)this + 7));
}
