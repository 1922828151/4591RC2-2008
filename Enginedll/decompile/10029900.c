/*
 * func-name: sub_10029900
 * func-address: 0x10029900
 * callers: none
 * callees: 0x100295d0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10029900(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x9E0u, *((_DWORD *)this - 1), (void (__thiscall *)(void *))Mesh::~Mesh);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Mesh::~Mesh((Mesh *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
