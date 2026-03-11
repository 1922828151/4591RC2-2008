/*
 * func-name: sub_10016BD0
 * func-address: 0x10016bd0
 * callers: none
 * callees: 0x10118a60, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10016BD0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))OcclusionQuery::~OcclusionQuery);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &OcclusionQuery::`vftable';
    RenderBase::~RenderBase((RenderBase *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
