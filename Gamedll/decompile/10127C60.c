/*
 * func-name: ??0ControlledEstab@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10127c60
 * callers: 0x100106fe
 * callees: 0x1000524f, 0x1000e53e
 */

GameClient::ControlledEstab *__thiscall GameClient::ControlledEstab::ControlledEstab(
        GameClient::ControlledEstab *this,
        const struct GameClient::ControlledEstab *a2)
{
  GameClient::ControlledEstab *result; // eax

  GameClient::Establishment::Establishment(this, a2);
  *(_DWORD *)this = &GameClient::ControlledEstab::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::ControlledEstab::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 114) = *((_DWORD *)a2 + 114);
  *((_DWORD *)this + 115) = *((_DWORD *)a2 + 115);
  *((_DWORD *)this + 116) = *((_DWORD *)a2 + 116);
  *((_DWORD *)this + 117) = *((_DWORD *)a2 + 117);
  *((_DWORD *)this + 118) = *((_DWORD *)a2 + 118);
  *((_BYTE *)this + 476) = *((_BYTE *)a2 + 476);
  *((_DWORD *)this + 120) = *((_DWORD *)a2 + 120);
  *((_DWORD *)this + 121) = *((_DWORD *)a2 + 121);
  *((_DWORD *)this + 122) = *((_DWORD *)a2 + 122);
  *((_DWORD *)this + 123) = *((_DWORD *)a2 + 123);
  *((_DWORD *)this + 124) = *((_DWORD *)a2 + 124);
  *((_DWORD *)this + 125) = *((_DWORD *)a2 + 125);
  *((float *)this + 126) = *((float *)a2 + 126);
  *((_DWORD *)this + 127) = *((_DWORD *)a2 + 127);
  sub_1000E53E((int)a2 + 512);
  result = this;
  *((float *)this + 132) = *((float *)a2 + 132);
  *((_BYTE *)this + 532) = *((_BYTE *)a2 + 532);
  return result;
}
