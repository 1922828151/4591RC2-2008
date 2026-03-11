/*
 * func-name: sub_100A2F30
 * func-address: 0x100a2f30
 * callers: none
 * callees: 0x1014a230, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100A2F30(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x8Cu, *((_DWORD *)this - 1), (void (__thiscall *)(void *))CDlgMgr::~CDlgMgr);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CDlgMgr::~CDlgMgr((CDlgMgr *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
