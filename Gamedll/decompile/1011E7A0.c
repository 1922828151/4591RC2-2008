/*
 * func-name: ?GetOwner@Seat@GameClient@@QAEPAVEstablishment@2@XZ_0
 * func-address: 0x1011e7a0
 * callers: 0x1000f358
 * callees: none
 */

struct GameClient::Establishment *__thiscall GameClient::Seat::GetOwner(GameClient::Seat *this)
{
  return (struct GameClient::Establishment *)*((_DWORD *)this + 22);
}
