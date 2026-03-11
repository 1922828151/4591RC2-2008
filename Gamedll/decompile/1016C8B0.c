/*
 * func-name: ??0FEstablishment@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1016c8b0
 * callers: 0x10018fb1
 * callees: 0x10002720, 0x100065e1, 0x1000b613, 0x10017bb1
 */

GameClient::FEstablishment *__thiscall GameClient::FEstablishment::FEstablishment(
        GameClient::FEstablishment *this,
        const struct GameClient::FEstablishment *a2)
{
  GameClient::FProduct::FProduct(this, a2);
  *(_DWORD *)this = &GameClient::FEstablishment::`vftable';
  std::string::string((char *)this + 196, (char *)a2 + 196);
  std::string::string((char *)this + 224, (char *)a2 + 224);
  std::string::string((char *)this + 252, (char *)a2 + 252);
  std::string::string((char *)this + 280, (char *)a2 + 280);
  std::string::string((char *)this + 308, (char *)a2 + 308);
  std::string::string((char *)this + 336, (char *)a2 + 336);
  std::string::string((char *)this + 364, (char *)a2 + 364);
  std::string::string((char *)this + 392, (char *)a2 + 392);
  sub_1000B613((int)a2 + 420);
  sub_1000B613((int)a2 + 436);
  sub_10002720((int)a2 + 452);
  *((float *)this + 117) = *((float *)a2 + 117);
  *((_BYTE *)this + 472) = *((_BYTE *)a2 + 472);
  sub_100065E1((int)a2 + 476);
  sub_1000B613((int)a2 + 492);
  *((_DWORD *)this + 127) = *((_DWORD *)a2 + 127);
  *((float *)this + 128) = *((float *)a2 + 128);
  return this;
}
