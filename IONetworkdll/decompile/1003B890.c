/*
 * func-name: sub_1003B890
 * func-address: 0x1003b890
 * callers: none
 * callees: 0x100390a0
 */

void __thiscall sub_1003B890(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // ecx

  v6 = this[7];
  if ( this[13] == *(_DWORD *)(v6 + 376) )
    Outpop::IONetwork::Dgram_Connector::check_bliued_login_time((Outpop::Utility::Lock ***)v6);
}
