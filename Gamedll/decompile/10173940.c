/*
 * func-name: ?AddScaleSign@Robot@GameClient@@QAEXABVVector@@MM@Z_0
 * func-address: 0x10173940
 * callers: 0x1001168f
 * callees: 0x10015ab9
 */

void __thiscall GameClient::Robot::AddScaleSign(GameClient::Robot *this, const struct Vector *a2, float a3, float a4)
{
  if ( *((_DWORD *)this + 372) )
    sub_10015AB9((int)a2, a3, a4);
}
