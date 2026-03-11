/*
 * func-name: ?Shutdown@GUISystem@@UAEXXZ
 * func-address: 0x100d6440
 * callers: none
 * callees: 0x100e2550
 */

void __thiscall GUISystem::Shutdown(GUISystem *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax

  v2 = *((_DWORD *)this + 5);
  if ( v2 )
    v3 = (*((_DWORD *)this + 6) - v2) >> 2;
  else
    v3 = 0;
  LogPrintf("Saving %d windows", v3);
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 5);
    if ( !v4 || !((*((_DWORD *)this + 6) - v4) >> 2) )
      break;
    (*(void (__thiscall **)(GUISystem *, _DWORD))(*(_DWORD *)this + 56))(this, **((_DWORD **)this + 5));
  }
}
