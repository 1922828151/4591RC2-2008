/*
 * func-name: ?GenerateNewGUID@Actor@@QAEXXZ
 * func-address: 0x1004d6c0
 * callers: 0x10080030
 * callees: 0x1007ec70
 */

void __thiscall Actor::GenerateNewGUID(GUID *this)
{
  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    CoCreateGuid(this + 16);
  }
  else
  {
    this[16].Data1 = 0;
    *(_DWORD *)&this[16].Data2 = 0;
    *(_DWORD *)this[16].Data4 = 0;
    *(_DWORD *)&this[16].Data4[4] = 0;
  }
}
