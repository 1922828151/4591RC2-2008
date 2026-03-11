/*
 * func-name: sub_10055080
 * func-address: 0x10055080
 * callers: none
 * callees: 0x10161a90, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10055080(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x6C4u, *((_DWORD *)this - 1), (void (__thiscall *)(void *))Terrain::~Terrain);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Terrain::~Terrain((Terrain *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
