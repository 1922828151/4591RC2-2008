/*
 * func-name: ?get_host_addr_str@INET_Addr@IONetwork@Outpop@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x100037e0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::INET_Addr::get_host_addr_str(struct in_addr *this, int a2)
{
  char *v2; // eax

  v2 = inet_ntoa(this[4]);
  std::string::string(a2, v2);
  return a2;
}
