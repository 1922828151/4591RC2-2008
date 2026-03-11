/*
 * func-name: ?GetCurrentVelocity@Robot@GameClient@@UAE?AVVector@@XZ_0
 * func-address: 0x101728e0
 * callers: 0x10016856
 * callees: none
 */

int __thiscall GameClient::Robot::GetCurrentVelocity(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx

  result = a2;
  v3 = this[188];
  v4 = this[190];
  *(_DWORD *)a2 = v3;
  *(_DWORD *)(a2 + 8) = v4;
  *(float *)(a2 + 4) = 0.0;
  return result;
}
