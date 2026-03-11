/*
 * func-name: sub_100DA5B0
 * func-address: 0x100da5b0
 * callers: 0x1000c798
 * callees: none
 */

void __thiscall sub_100DA5B0(_DWORD *this)
{
  int v2; // eax

  *this = &ChainedLightEntity::`vftable';
  v2 = this[367];
  if ( v2 )
    *(float *)(v2 + 108) = 0.0;
  std::string::~string(this + 297);
  std::string::~string(this + 290);
  std::string::~string(this + 283);
  std::string::~string(this + 272);
  std::string::~string(this + 264);
  Actor::~Actor((Actor *)this);
}
