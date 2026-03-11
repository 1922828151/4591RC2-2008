/*
 * func-name: ?SetChip@Establishment@GameClient@@QAEXW4BASE_TYPE@@J@Z_0
 * func-address: 0x101a1b80
 * callers: 0x1000b5eb
 * callees: none
 */

int __thiscall GameClient::Establishment::SetChip(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  this[88] = a2;
  this[89] = a3;
  return result;
}
