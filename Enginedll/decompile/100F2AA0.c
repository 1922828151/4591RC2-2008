/*
 * func-name: sub_100F2AA0
 * func-address: 0x100f2aa0
 * callers: 0x100f4ca0, 0x100f4f50
 * callees: 0x101a2500
 */

void __thiscall sub_100F2AA0(int this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // ecx

  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(this + 32);
    if ( !v3 || i >= (*(_DWORD *)(this + 36) - v3) >> 3 )
      break;
    v4 = *(_DWORD *)(this + 32);
    if ( *(_DWORD *)(v4 + 8 * i + 4) )
    {
      if ( !v4 || i >= (*(_DWORD *)(this + 36) - v4) >> 3 )
        invalid_parameter_noinfo();
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 32) + 8 * i + 4) + 8))(*(_DWORD *)(*(_DWORD *)(this + 32) + 8 * i + 4));
      v5 = *(_DWORD *)(this + 32);
      if ( !v5 || i >= (*(_DWORD *)(this + 36) - v5) >> 3 )
        invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(this + 32) + 8 * i + 4) = 0;
    }
  }
  std::string::~string(this + 56);
  if ( *(_DWORD *)(this + 32) )
    operator delete(*(void **)(this + 32));
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
