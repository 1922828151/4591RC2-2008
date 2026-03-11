/*
 * func-name: ?SetVisible@Effect_Base@@UAEX_N@Z_0
 * func-address: 0x1007e580
 * callers: 0x1001ac4e
 * callees: none
 */

void __thiscall Effect_Base::SetVisible(Effect_Base *this, bool a2)
{
  *((_BYTE *)this + 816) = !a2;
}
