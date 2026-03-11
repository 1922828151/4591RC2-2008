/*
 * func-name: ?SetCamDirOffset@Robot@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x10033550
 * callers: 0x10013750
 * callees: none
 */

void __thiscall GameClient::Robot::SetCamDirOffset(GameClient::Robot *this, const struct Vector *a2)
{
  *((_DWORD *)this + 168) = *(_DWORD *)a2;
  *((_DWORD *)this + 169) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 170) = *((_DWORD *)a2 + 2);
}
