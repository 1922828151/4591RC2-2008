/*
 * func-name: sub_100016F0
 * func-address: 0x100016f0
 * callers: 0x10001e80, 0x10001ec0, 0x10001f10, 0x10002630
 * callees: 0x10001660, 0x10034f90
 */

bool __thiscall sub_100016F0(void *this, int a2)
{
  int v3; // eax
  bool v4; // cc
  int v5; // ecx

  v3 = *((_DWORD *)this + 3);
  if ( a2 > *((_DWORD *)this + 2) - v3 && !*((_BYTE *)this + 4) )
  {
    memcpy(*((void **)this + 4), (const void *)(*((_DWORD *)this + 4) + v3), *((_DWORD *)this + 5) - v3);
    *((_DWORD *)this + 5) -= *((_DWORD *)this + 3);
    v4 = a2 <= *((_DWORD *)this + 2);
    *((_DWORD *)this + 3) = 0;
    if ( !v4 )
      sub_10001660((int)this, a2);
  }
  v5 = *((_DWORD *)this + 3);
  if ( a2 > *((_DWORD *)this + 2) - v5 )
    return 0;
  if ( *((_BYTE *)this + 24) )
  {
    if ( *((_DWORD *)this + 5) < a2 + v5 )
    {
      while ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 4))(this) )
      {
        *((_DWORD *)this + 5) += (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(
                                   this,
                                   *((_DWORD *)this + 5) + *((_DWORD *)this + 4),
                                   *((_DWORD *)this + 2) - *((_DWORD *)this + 5));
        if ( *((_DWORD *)this + 5) >= a2 + *((_DWORD *)this + 3) )
          return 1;
      }
    }
  }
  else
  {
    *((_DWORD *)this + 5) += (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(
                               this,
                               *((_DWORD *)this + 5) + *((_DWORD *)this + 4),
                               *((_DWORD *)this + 2) - *((_DWORD *)this + 5));
  }
  return a2 + *((_DWORD *)this + 3) <= *((_DWORD *)this + 5);
}
