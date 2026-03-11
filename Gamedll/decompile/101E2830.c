/*
 * func-name: sub_101E2830
 * func-address: 0x101e2830
 * callers: 0x1000f06f
 * callees: 0x10003fe9, 0x1000a4fc, 0x1000b9ba, 0x1000c8d8, 0x10011009, 0x10012b7a, 0x100152d5, 0x102c9d50
 */

int __thiscall sub_101E2830(void *this)
{
  void *v2; // eax
  void *v3; // eax

  *(_DWORD *)this = &GameClient::CharacterManager::`vftable';
  v2 = (void *)*((_DWORD *)this + 76);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 0;
  sub_10011009();
  if ( *((_DWORD *)this + 68) )
    operator delete(*((void **)this + 68));
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 70) = 0;
  sub_10012B7A();
  sub_10003FE9();
  v3 = (void *)*((_DWORD *)this + 47);
  if ( v3 )
    operator delete(v3);
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  sub_1000C8D8();
  operator delete(*((void **)this + 44));
  *((_DWORD *)this + 44) = 0;
  if ( *((_DWORD *)this + 37) )
    operator delete(*((void **)this + 37));
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  sub_100152D5();
  if ( *((_DWORD *)this + 27) )
    operator delete(*((void **)this + 27));
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  sub_100152D5();
  if ( *((_DWORD *)this + 17) )
    operator delete(*((void **)this + 17));
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  sub_1000B9BA();
  if ( *((_DWORD *)this + 7) )
    operator delete(*((void **)this + 7));
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  return sub_1000A4FC();
}
