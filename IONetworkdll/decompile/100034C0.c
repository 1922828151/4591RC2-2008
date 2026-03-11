/*
 * func-name: ?get_host_name@INET_Addr@IONetwork@Outpop@@QAEHQA_WI@Z
 * func-address: 0x100034c0
 * callers: none
 * callees: 0x10003640, 0x1004e861
 */

int __thiscall Outpop::IONetwork::INET_Addr::get_host_name(
        Outpop::IONetwork::INET_Addr *this,
        wchar_t *const a2,
        unsigned int a3)
{
  unsigned int v3; // eax
  int host_name_i; // eax
  int v5; // esi
  bool v6; // zf
  Outpop::Utility::Ascii_To_Wide *v8; // eax
  wchar_t *v9; // eax
  wchar_t v11; // cx
  _BYTE v12[4]; // [esp+Ch] [ebp-118h] BYREF
  CHAR v13[260]; // [esp+10h] [ebp-114h] BYREF
  int v14; // [esp+120h] [ebp-4h]

  v3 = a3;
  if ( a3 <= 0x101 )
  {
    if ( a3 <= 1 )
      return -1;
  }
  else
  {
    v3 = 257;
  }
  host_name_i = Outpop::IONetwork::INET_Addr::get_host_name_i(this, v13, v3);
  v5 = host_name_i;
  v6 = host_name_i == 0;
  if ( host_name_i < 0 )
  {
    if ( host_name_i == -2 )
      return -1;
    v13[0] = 0;
    v6 = host_name_i == 0;
  }
  if ( v6 )
  {
    v8 = (Outpop::Utility::Ascii_To_Wide *)Outpop::Utility::Ascii_To_Wide::Ascii_To_Wide(
                                             (Outpop::Utility::Ascii_To_Wide *)v12,
                                             v13);
    v14 = 0;
    v9 = Outpop::Utility::Ascii_To_Wide::wchar_rep(v8);
    do
    {
      v11 = *v9;
      *a2++ = *v9++;
    }
    while ( v11 );
    v14 = -1;
    Outpop::Utility::Ascii_To_Wide::~Ascii_To_Wide((Outpop::Utility::Ascii_To_Wide *)v12);
  }
  return v5;
}
