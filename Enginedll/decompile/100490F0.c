/*
 * func-name: ?Destroy@XMLSystem@@QAEXXZ
 * func-address: 0x100490f0
 * callers: 0x10037000, 0x100372d0, 0x10037b30, 0x1003b120, 0x1003e810, 0x10043050, 0x100481a0, 0x10048630, 0x10048910, 0x1004ae30, 0x1004b190, 0x1010b030, 0x1010b240, 0x1014c910, 0x1014d2f0, 0x1014d940, 0x1014da70, 0x1014dc70, 0x10159c30
 * callees: none
 */

void __thiscall XMLSystem::Destroy(XMLSystem *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 21);
  if ( v2 )
  {
    (**v2)(v2, 1);
    *((_DWORD *)this + 21) = 0;
  }
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 18);
  if ( v3 )
    (**v3)(v3, 1);
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 22);
  if ( v4 )
    (**v4)(v4, 1);
  xercesc_2_5::XMLPlatformUtils::Terminate();
  xercesc_2_5::XMLString::release((unsigned __int16 **)this + 15);
}
