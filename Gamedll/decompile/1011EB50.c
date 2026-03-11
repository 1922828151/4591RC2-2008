/*
 * func-name: ?GetParent@Establishment@GameClient@@QAEPAV12@XZ_0
 * func-address: 0x1011eb50
 * callers: 0x1001253f
 * callees: none
 */

struct GameClient::Establishment *__thiscall GameClient::Establishment::GetParent(GameClient::Establishment *this)
{
  return (struct GameClient::Establishment *)*((_DWORD *)this + 42);
}
