/*
 * func-name: sub_1006EBD0
 * func-address: 0x1006ebd0
 * callers: 0x10002469
 * callees: 0x10010cc1
 */

int __cdecl sub_1006EBD0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  result = (int)a1;
  if ( a1 )
  {
    *a1 = *a2;
    return GameClient::Group::Group((GameClient::Group *)(a1 + 1), (const struct GameClient::Group *)(a2 + 1));
  }
  return result;
}
