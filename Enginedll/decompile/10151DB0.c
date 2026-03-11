/*
 * func-name: ?Tick@CControlBox@@UAEXXZ
 * func-address: 0x10151db0
 * callers: none
 * callees: none
 */

void __thiscall CControlBox::Tick(CControlBox *this)
{
  unsigned int v1; // edi
  int i; // ebx
  int v4; // eax
  int v5; // eax

  v1 = 0;
  for ( i = 0; ; i += 12 )
  {
    v4 = *((_DWORD *)this + 134);
    if ( !v4 || v1 >= (*((_DWORD *)this + 135) - v4) / 12 )
      break;
    v5 = *((_DWORD *)this + 134);
    if ( !v5 || v1 >= (*((_DWORD *)this + 135) - v5) / 12 )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(i + *((_DWORD *)this + 134)) + 24))(*(_DWORD *)(i
                                                                                                 + *((_DWORD *)this + 134)));
    ++v1;
  }
}
