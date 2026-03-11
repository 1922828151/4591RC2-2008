/*
 * func-name: ?set@INET_Addr@IONetwork@Outpop@@QAEHGQB_WHH@Z
 * func-address: 0x10002a60
 * callers: 0x100032b0
 * callees: 0x10002880
 */

int __thiscall Outpop::IONetwork::INET_Addr::set(
        Outpop::IONetwork::INET_Addr *this,
        u_short a2,
        const wchar_t *a3,
        int a4,
        int a5)
{
  Outpop::Utility::Wide_To_Ascii *v6; // eax
  char *v7; // eax
  int v8; // esi
  int v10; // [esp-8h] [ebp-1Ch]
  int v11; // [esp-4h] [ebp-18h]

  v6 = (Outpop::Utility::Wide_To_Ascii *)Outpop::Utility::Wide_To_Ascii::Wide_To_Ascii(
                                           (Outpop::Utility::Wide_To_Ascii *)&a3,
                                           a3);
  v11 = a5;
  v10 = a4;
  v7 = Outpop::Utility::Wide_To_Ascii::char_rep(v6);
  v8 = Outpop::IONetwork::INET_Addr::set(this, a2, v7, v10, v11);
  Outpop::Utility::Wide_To_Ascii::~Wide_To_Ascii((Outpop::Utility::Wide_To_Ascii *)&a3);
  return v8;
}
