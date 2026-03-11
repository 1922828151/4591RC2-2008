/*
 * func-name: ??0CombinPart@GameClient@@QAE@ABU01@@Z_0
 * func-address: 0x10104940
 * callers: 0x10004b5b
 * callees: none
 */

GameClient::CombinPart *__thiscall GameClient::CombinPart::CombinPart(
        GameClient::CombinPart *this,
        const struct GameClient::CombinPart *a2)
{
  std::string::string(this, a2);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  std::vector<Model *>::vector<Model *>((char *)this + 32, (char *)a2 + 32);
  return this;
}
