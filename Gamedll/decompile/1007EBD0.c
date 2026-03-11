/*
 * func-name: ?SetTransform@Effect_Base@@UAEXABVMatrix@@@Z_0
 * func-address: 0x1007ebd0
 * callers: 0x10015e01
 * callees: none
 */

void __thiscall Effect_Base::SetTransform(Effect_Base *this, const struct Matrix *a2)
{
  int v3; // eax
  int v4; // eax

  Actor::SetTransform(this, a2);
  v3 = *((_DWORD *)this + 263);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 1133) )
    {
      *(_DWORD *)(v3 + 20) = *((_DWORD *)this + 214);
      v4 = v3 + 20;
      *(_DWORD *)(v4 + 4) = *((_DWORD *)this + 215);
      *(_DWORD *)(v4 + 8) = *((_DWORD *)this + 216);
      qmemcpy((void *)(*((_DWORD *)this + 263) + 44), (char *)this + 868, 0x40u);
    }
  }
}
