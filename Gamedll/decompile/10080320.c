/*
 * func-name: ?RefreshOptions@Effect_Laser@@UAEXXZ_0
 * func-address: 0x10080320
 * callers: 0x1001877d
 * callees: none
 */

void __thiscall Effect_Laser::RefreshOptions(Effect_Laser *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 263);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 176) = *((_DWORD *)this + 273);
    Effect_Base::RefreshOptions(this);
  }
}
