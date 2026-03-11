/*
 * func-name: ?paser_config@Logger@Utility@Outpop@@QAEXPBD@Z
 * func-address: 0x10016760
 * callers: none
 * callees: 0x10012390
 */

void __thiscall Outpop::Utility::Logger::paser_config(Outpop::Utility::Logger *this, const char *a2)
{
  int v2; // eax
  char v3; // [esp+Bh] [ebp-2Dh] BYREF
  void **v4; // [esp+Ch] [ebp-2Ch] BYREF
  _BYTE v5[28]; // [esp+10h] [ebp-28h] BYREF
  int v6; // [esp+34h] [ebp-4h]

  if ( *((_BYTE *)this + 168) != 1 )
  {
    *((_BYTE *)this + 168) = 1;
    v4 = &Outpop::Utility::Logger_Config_Paser::`vftable';
    v6 = 1;
    v2 = std::string::string(v5, a2);
    LOBYTE(v6) = 2;
    Outpop::Utility::Config::load_config(
      (Outpop::Utility::Config *)&v3,
      v2,
      (struct Outpop::Utility::Config_Paser *)&v4);
    LOBYTE(v6) = 1;
    std::string::~string(v5);
  }
}
