/*
 * func-name: sub_10140310
 * func-address: 0x10140310
 * callers: none
 * callees: 0x10012a30
 */

char __thiscall sub_10140310(_DWORD *this, int a2)
{
  if ( *(_DWORD *)(a2 + 712) )
    std::vector<Actor *>::push_back(this + 1, &a2);
  return 1;
}
