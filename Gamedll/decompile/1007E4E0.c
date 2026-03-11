/*
 * func-name: ?Clone@Effect_Base@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1007e4e0
 * callers: 0x1001a988
 * callees: none
 */

void __thiscall Effect_Base::Clone(Effect_Base *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  *((float *)a2 + 282) = *((float *)this + 282);
  *((float *)a2 + 279) = *((float *)this + 279);
  *((float *)a2 + 280) = *((float *)this + 280);
  *((_DWORD *)a2 + 273) = *((_DWORD *)this + 273);
  *((_DWORD *)a2 + 274) = *((_DWORD *)this + 274);
  *((_DWORD *)a2 + 275) = *((_DWORD *)this + 275);
  *((_DWORD *)a2 + 276) = *((_DWORD *)this + 276);
  *((_DWORD *)a2 + 277) = *((_DWORD *)this + 277);
}
