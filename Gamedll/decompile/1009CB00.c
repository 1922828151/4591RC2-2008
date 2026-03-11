/*
 * func-name: ?SetDefaults@TraceLineSystem@@UAEXXZ_0
 * func-address: 0x1009cb00
 * callers: 0x10004b60
 * callees: none
 */

void __thiscall TraceLineSystem::SetDefaults(TraceLineSystem *this)
{
  unsigned int v1; // edi
  int i; // ebx
  int v4; // eax
  int v5; // eax

  v1 = 0;
  for ( i = 0; ; i += 184 )
  {
    v4 = *((_DWORD *)this + 45);
    if ( !v4 || v1 >= (*((_DWORD *)this + 46) - v4) / 184 )
      break;
    v5 = *((_DWORD *)this + 45);
    if ( !v5 || v1 >= (*((_DWORD *)this + 46) - v5) / 184 )
      _invalid_parameter_noinfo();
    (*(void (__thiscall **)(TraceLineSystem *, int))(*(_DWORD *)this + 20))(this, i + *((_DWORD *)this + 45));
    ++v1;
  }
}
