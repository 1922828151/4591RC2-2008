/*
 * func-name: ?GetHeadMsg@AdapterActor@GameClient@@QAEPAVHeadingMessage@2@XZ_0
 * func-address: 0x100f2950
 * callers: 0x1000ce46
 * callees: none
 */

struct GameClient::HeadingMessage *__thiscall GameClient::AdapterActor::GetHeadMsg(GameClient::AdapterActor *this)
{
  return (struct GameClient::HeadingMessage *)*((_DWORD *)this + 317);
}
