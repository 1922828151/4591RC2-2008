/*
 * func-name: ??1CombinPart@GameClient@@QAE@XZ_0
 * func-address: 0x101048d0
 * callers: 0x1000bfaf
 * callees: none
 */

void __thiscall GameClient::CombinPart::~CombinPart(GameClient::CombinPart *this)
{
  std::vector<Model *>::~vector<Model *>((char *)this + 32);
  std::string::~string(this);
}
