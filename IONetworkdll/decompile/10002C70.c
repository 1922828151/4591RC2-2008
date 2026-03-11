/*
 * func-name: ?set@INET_Addr@IONetwork@Outpop@@QAEHQB_W@Z
 * func-address: 0x10002c70
 * callers: 0x10003220
 * callees: none
 */

int __thiscall Outpop::IONetwork::INET_Addr::set(Outpop::IONetwork::INET_Addr *this, const wchar_t *a2)
{
  Outpop::Utility::Wide_To_Ascii *v3; // eax
  char *v4; // eax
  int v5; // esi

  v3 = (Outpop::Utility::Wide_To_Ascii *)Outpop::Utility::Wide_To_Ascii::Wide_To_Ascii(
                                           (Outpop::Utility::Wide_To_Ascii *)&a2,
                                           a2);
  v4 = Outpop::Utility::Wide_To_Ascii::char_rep(v3);
  v5 = (*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *, char *))(*(_DWORD *)this + 28))(this, v4);
  Outpop::Utility::Wide_To_Ascii::~Wide_To_Ascii((Outpop::Utility::Wide_To_Ascii *)&a2);
  return v5;
}
