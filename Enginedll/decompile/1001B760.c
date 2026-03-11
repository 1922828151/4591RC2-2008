/*
 * func-name: ?GetNumAnimations@Model@@QAEHXZ
 * func-address: 0x1001b760
 * callers: none
 * callees: none
 */

int __thiscall Model::GetNumAnimations(Model *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 96);
  if ( v1 )
    return (*((_DWORD *)this + 97) - v1) >> 4;
  else
    return 0;
}
