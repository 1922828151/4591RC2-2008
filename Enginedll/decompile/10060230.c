/*
 * func-name: sub_10060230
 * func-address: 0x10060230
 * callers: 0x10062570
 * callees: 0x10061240, 0x100612a0, 0x101a2500
 */

void __thiscall sub_10060230(char *this)
{
  char *v2; // esi
  void **v3; // esi
  void **v4; // esi

  v2 = this + 80;
  *(_DWORD *)this = &CBSPTreeData::`vftable';
  *((_DWORD *)this + 1) = &CBSPTreeData::`vftable';
  sub_10061240(this + 80);
  if ( *((_DWORD *)v2 + 2) != -1 )
  {
    if ( *(_DWORD *)v2 )
    {
      free(*(void **)v2);
      *(_DWORD *)v2 = 0;
    }
    *((_DWORD *)v2 + 1) = 0;
  }
  v3 = (void **)(this + 52);
  sub_100612A0(this + 52);
  if ( *((_DWORD *)this + 15) != -1 )
  {
    if ( *v3 )
    {
      free(*v3);
      *v3 = 0;
    }
    *((_DWORD *)this + 14) = 0;
  }
  v4 = (void **)(this + 24);
  sub_10061240(this + 24);
  if ( *((_DWORD *)this + 8) != -1 )
  {
    if ( *v4 )
    {
      free(*v4);
      *v4 = 0;
    }
    *((_DWORD *)this + 7) = 0;
  }
  if ( *((_DWORD *)this + 3) )
    operator delete(*((void **)this + 3));
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
}
