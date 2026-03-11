/*
 * func-name: ??1IndoorVolume@@UAE@XZ
 * func-address: 0x100da460
 * callers: 0x1004d0c0
 * callees: 0x100511a0, 0x1017a0b0
 */

void __thiscall IndoorVolume::~IndoorVolume(IndoorVolume *this)
{
  unsigned int v2; // ecx
  IndoorVolume **v3; // eax
  int v4; // ebx
  IndoorVolume **v5; // esi
  IndoorVolume **i; // ecx
  int v7; // eax

  *(_DWORD *)this = &IndoorVolume::`vftable';
  v2 = dword_11240BEC;
  v3 = (IndoorVolume **)dword_11240BE8;
  v4 = dword_11240BEC;
  if ( (unsigned int)dword_11240BE8 > dword_11240BEC )
  {
    invalid_parameter_noinfo();
    v3 = (IndoorVolume **)dword_11240BE8;
    v2 = dword_11240BEC;
  }
  v5 = v3;
  if ( (unsigned int)v3 > v2 )
    invalid_parameter_noinfo();
  for ( i = v5; i != (IndoorVolume **)v4; ++i )
  {
    if ( *i == this )
      break;
  }
  v7 = (dword_11240BEC - (int)(i + 1)) >> 2;
  if ( v7 > 0 )
    memmove_s(i, 4 * v7, i + 1, 4 * v7);
  dword_11240BEC -= 4;
  sub_1017A0B0((char *)this + 1052);
  Actor::~Actor(this);
}
