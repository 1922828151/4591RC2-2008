/*
 * func-name: sub_10107810
 * func-address: 0x10107810
 * callers: 0x10011ba8
 * callees: 0x10004b5b
 */

int __thiscall sub_10107810(int this, char *a2)
{
  std::string::string((void *)this, a2);
  GameClient::CombinPart::CombinPart(
    (GameClient::CombinPart *)(this + 28),
    (const struct GameClient::CombinPart *)(a2 + 28));
  return this;
}
