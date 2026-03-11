/*
 * func-name: ?GetCurrentVelocity@WorldObject@GameClient@@UAE?AVVector@@XZ_0
 * func-address: 0x100437b0
 * callers: 0x1000d9a4
 * callees: none
 */

float *__stdcall GameClient::WorldObject::GetCurrentVelocity(float *a1)
{
  float *result; // eax

  result = a1;
  *a1 = 0.0;
  a1[1] = 0.0;
  a1[2] = 0.0;
  return result;
}
