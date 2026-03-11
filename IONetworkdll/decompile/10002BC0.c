/*
 * func-name: ?set@INET_Addr@IONetwork@Outpop@@QAEHQB_WI0@Z
 * func-address: 0x10002bc0
 * callers: 0x100033e0
 * callees: 0x100029d0
 */

int __thiscall Outpop::IONetwork::INET_Addr::set(
        Outpop::IONetwork::INET_Addr *this,
        const wchar_t *const a2,
        unsigned int a3,
        const wchar_t *a4)
{
  Outpop::Utility::Wide_To_Ascii *v5; // ebp
  Outpop::Utility::Wide_To_Ascii *v6; // edi
  char *v7; // eax
  int v8; // esi
  unsigned int v10; // [esp-8h] [ebp-28h]
  char *v11; // [esp-4h] [ebp-24h]
  _BYTE v12[8]; // [esp+10h] [ebp-10h] BYREF
  int v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]
  const wchar_t *retaddr; // [esp+20h] [ebp+0h]

  v5 = (Outpop::Utility::Wide_To_Ascii *)Outpop::Utility::Wide_To_Ascii::Wide_To_Ascii(
                                           (Outpop::Utility::Wide_To_Ascii *)v12,
                                           a4);
  v13 = 0;
  v6 = (Outpop::Utility::Wide_To_Ascii *)Outpop::Utility::Wide_To_Ascii::Wide_To_Ascii(
                                           (Outpop::Utility::Wide_To_Ascii *)&a3,
                                           retaddr);
  v12[4] = 1;
  Outpop::Utility::Wide_To_Ascii::char_rep(v5);
  v7 = Outpop::Utility::Wide_To_Ascii::char_rep(v6);
  v8 = Outpop::IONetwork::INET_Addr::set(this, v7, v10, v11);
  LOBYTE(v14) = 0;
  Outpop::Utility::Wide_To_Ascii::~Wide_To_Ascii((Outpop::Utility::Wide_To_Ascii *)&a4);
  v14 = -1;
  Outpop::Utility::Wide_To_Ascii::~Wide_To_Ascii((Outpop::Utility::Wide_To_Ascii *)v12);
  return v8;
}
