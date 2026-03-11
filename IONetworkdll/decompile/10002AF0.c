/*
 * func-name: ?set@INET_Addr@IONetwork@Outpop@@QAEHQB_W00@Z
 * func-address: 0x10002af0
 * callers: 0x10003340
 * callees: 0x10002950
 */

int __thiscall Outpop::IONetwork::INET_Addr::set(
        Outpop::IONetwork::INET_Addr *this,
        const wchar_t *a2,
        wchar_t *a3,
        const wchar_t *a4)
{
  Outpop::Utility::Wide_To_Ascii *v5; // ebp
  Outpop::Utility::Wide_To_Ascii *v6; // ebx
  char *v7; // eax
  int v8; // edi
  char *v10; // [esp-8h] [ebp-34h]
  char *v11; // [esp-4h] [ebp-30h]
  _BYTE v12[8]; // [esp+Ch] [ebp-20h] BYREF
  int v13; // [esp+14h] [ebp-18h] BYREF
  _BYTE v14[4]; // [esp+18h] [ebp-14h] BYREF
  int v15; // [esp+1Ch] [ebp-10h] BYREF
  char v16; // [esp+20h] [ebp-Ch]
  int v17; // [esp+24h] [ebp-8h]
  int v18; // [esp+28h] [ebp-4h]

  v5 = (Outpop::Utility::Wide_To_Ascii *)Outpop::Utility::Wide_To_Ascii::Wide_To_Ascii(
                                           (Outpop::Utility::Wide_To_Ascii *)&v15,
                                           a4);
  v17 = 0;
  v6 = (Outpop::Utility::Wide_To_Ascii *)Outpop::Utility::Wide_To_Ascii::Wide_To_Ascii(
                                           (Outpop::Utility::Wide_To_Ascii *)&v13,
                                           a2);
  v16 = 1;
  Outpop::Utility::Wide_To_Ascii::Wide_To_Ascii((Outpop::Utility::Wide_To_Ascii *)v12, (const wchar_t *)v18);
  v16 = 2;
  Outpop::Utility::Wide_To_Ascii::char_rep(v5);
  Outpop::Utility::Wide_To_Ascii::char_rep(v6);
  v7 = Outpop::Utility::Wide_To_Ascii::char_rep((Outpop::Utility::Wide_To_Ascii *)a3);
  v8 = Outpop::IONetwork::INET_Addr::set(this, v7, v10, v11);
  LOBYTE(v18) = 1;
  Outpop::Utility::Wide_To_Ascii::~Wide_To_Ascii((Outpop::Utility::Wide_To_Ascii *)&v13);
  LOBYTE(v18) = 0;
  Outpop::Utility::Wide_To_Ascii::~Wide_To_Ascii((Outpop::Utility::Wide_To_Ascii *)v14);
  v18 = -1;
  Outpop::Utility::Wide_To_Ascii::~Wide_To_Ascii((Outpop::Utility::Wide_To_Ascii *)&v15);
  return v8;
}
