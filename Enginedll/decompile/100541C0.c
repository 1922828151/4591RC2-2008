/*
 * func-name: ??1ActorInstancer@@UAE@XZ
 * func-address: 0x100541c0
 * callers: 0x100547f0
 * callees: 0x100511a0
 */

void __thiscall ActorInstancer::~ActorInstancer(ActorInstancer *this)
{
  unsigned int v2; // ecx
  ActorInstancer **v3; // eax
  int v4; // ebx
  ActorInstancer **v5; // edi
  ActorInstancer **i; // ecx
  int v7; // eax

  *(_DWORD *)this = &ActorInstancer::`vftable';
  v2 = dword_10284758;
  v3 = (ActorInstancer **)Destination;
  v4 = dword_10284758;
  if ( (unsigned int)Destination > dword_10284758 )
  {
    invalid_parameter_noinfo();
    v3 = (ActorInstancer **)Destination;
    v2 = dword_10284758;
  }
  v5 = v3;
  if ( (unsigned int)v3 > v2 )
    invalid_parameter_noinfo();
  for ( i = v5; i != (ActorInstancer **)v4; ++i )
  {
    if ( *i == this )
      break;
  }
  v7 = (dword_10284758 - (int)(i + 1)) >> 2;
  if ( v7 > 0 )
    memmove_s(i, 4 * v7, i + 1, 4 * v7);
  dword_10284758 -= 4;
  std::string::~string((char *)this + 1084);
  std::string::~string((char *)this + 1056);
  Actor::~Actor(this);
}
