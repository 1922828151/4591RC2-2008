/*
 * func-name: ?DeserializationComplete@Actor@@UAEXXZ
 * func-address: 0x1004e7f0
 * callers: 0x10167c60
 * callees: none
 */

void __thiscall Actor::DeserializationComplete(Actor *this)
{
  *((_DWORD *)this + 193) = *((_DWORD *)this + 27);
  *((_DWORD *)this + 194) = *((_DWORD *)this + 28);
  *((_DWORD *)this + 195) = *((_DWORD *)this + 29);
  *((_DWORD *)this + 196) = *((_DWORD *)this + 30);
  *((_DWORD *)this + 197) = *((_DWORD *)this + 31);
  *((_DWORD *)this + 198) = *((_DWORD *)this + 32);
  *((_DWORD *)this + 199) = *((_DWORD *)this + 33);
  *((_DWORD *)this + 200) = *((_DWORD *)this + 34);
  *((_DWORD *)this + 201) = *((_DWORD *)this + 35);
  (*(void (__thiscall **)(Actor *))(*(_DWORD *)this + 24))(this);
}
