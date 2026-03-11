/*
 * func-name: ?SetEnabled@CREContainer@@UAEX_N@Z
 * func-address: 0x100ad7e0
 * callers: none
 * callees: none
 */

void __thiscall CREContainer::SetEnabled(CREContainer *this, bool a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // ecx

  *((_BYTE *)this + 156) = a2;
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 134);
    if ( !v4 || i >= (*((_DWORD *)this + 135) - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(*((_DWORD *)this + 134) + 4 * i);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 128))(v5, *((unsigned __int8 *)this + 156));
  }
}
