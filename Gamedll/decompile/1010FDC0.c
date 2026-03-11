/*
 * func-name: ?PostRender@CombinRobot@GameClient@@UAEXPAVCamera@@@Z_0
 * func-address: 0x1010fdc0
 * callers: 0x100067da
 * callees: none
 */

// attributes: thunk
void __thiscall GameClient::CombinRobot::PostRender(GameClient::CombinRobot *this, struct Camera *a2)
{
  GameClient::CombinActor::PostRender(this, a2);
}
